import serial
import time

# function for sending Serial Messages to the Arduino
#   comm_arduino = variable for the arduino
#   user_input = message to be sent as a string
#       the string is encompassed in the start and end characters '<' and '>'

def send_arduino(comm_arduino, user_input):
    string = '<' + str(user_input) + '>'
    comm_arduino.write(string.encode())


# comm_arduino = variable for the arduino
# serial.Serial('port the arduino is plugged into', baudrate)
comm_arduino = serial.Serial('/dev/ttyACM0', baudrate=9600)


send_arduino(comm_arduino, 1) # sends the open command ('1') to the arduino
print("Opened")

time.sleep(3) # adds a delay before the next command is sent so the first one can execute fully 

send_arduino(comm_arduino, 2) # sends the close command ('2') to the arduino 
print("Closed") 