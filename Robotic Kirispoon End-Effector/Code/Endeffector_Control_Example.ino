

#include <Servo.h> // Include the Servo library

Servo myservo; // Create a servo object to control (MAX 7.4V)

int KiriState = 0; // 0 closed, 1 open
//const int buttonPin = 2; // arduino pin the button is wired to
const int openPosition = 100; // position of servo when kirigami is open ; theta
const int closedPosition = 70; // position of servo when kirigami is closed ; theta


String init_input;
String user_input;


boolean newData = false;
const byte numChars = 6;
char receivedChars[numChars];

void setup() {
  myservo.attach(9); //  Attaches the servo on pin 9 to the servo object
  myservo.write(openPosition); // start with kirispoon open


  Serial.begin(9600);
  Serial.print("Begin"); // tells user when the main loop (void loop()) is about to begin
}

void loop() {
   if(Serial.available())
   {
      recvWithStartEndMarkers(); // get the chrcters between the strt/end mrkers
      init_input = showNewData(); // mke the input chrcters into  string

      user_input = getValue(init_input,',',0); // first input is user input
      
      
      if (user_input == "1") // OPEN 
      {
        KiriState = 1; // change the kirigami state to open
        myservo.write(openPosition); // move servo to open position
        Serial.print("open   ");
  
      }
      else if(user_input == "2") // CLOSE
      {
        KiriState = 0; // change the kirigami state to closed
        myservo.write(closedPosition); // move servo to closed position
        Serial.print("closed   ");
        
      }
  }       

}


void recvWithStartEndMarkers() {
    static boolean recvInProgress = false;
    static byte ndx = 0;
    char startMarker = '<';
    char endMarker = '>';
    char rc;
 
    while (Serial.available() > 0 && newData == false) {
        rc = Serial.read();

        if (recvInProgress == true) {
            if (rc != endMarker) {
                receivedChars[ndx] = rc;
                ndx++;
                if (ndx >= numChars) {
                    ndx = numChars - 1;
                }
            }
            else {
                receivedChars[ndx] = '\0'; // terminate the string
                recvInProgress = false;
                ndx = 0;
                newData = true;
            }
        }
        else if (rc == startMarker) {
            recvInProgress = true;
        }
    }
}


String showNewData() {
    String s;
    if (newData == true) {
        newData = false;

        int ch_size;
        char temp = 'a';
        
        ch_size = sizeof(receivedChars)/sizeof(temp);
        s = convertToString(receivedChars, ch_size);        
    }
    return s;
}


String convertToString(char* a, int size)
{
    int i;
    String s = "";
    for (i = 0; i < size; i++) {
        s = s + a[i];
    }
    return s;
}

String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }
  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
