# **Robotic Kirispoon: Method of Control & Power**

## Description
There are multiple ways to control and power the Robotic Kirispoon. This document gives the two examples of control that were utilized in research. This document includes materials, tools, and instructions to reproduce these methods of control. An order form is located at the end of each method. 

## Method 1: Control through the use of a button
This method involves wiring the robotic kirispoon to an adaptable power source, an arduino, and a button to open and close the end-effector. This can be useful when providing an easy interface for users.

### Parts
    - Power Adapter 7 volts
    - Push Button
    - Four 10K Ohm Resistors 
    - Robotic Kirispoon End-effector (Servo Motor)
    - Arduino
    - Arduino Cable (This is used to connect the Arduino to the computer)
    - 9 Male/Male Wires
    - DC barrel jack adapter (Enables the power supply to connect to the Servo Motor)
    - Half Breadboard

### Files
    - KiriButton.ino 

## Instructions
{{Picture}}
    1. Build the circuit shown above
        *Note: Pay attention to the specific pins on the Arduino and the specific wire colors on the Servo Motor
        *Note: The Servo Motor is a part of the Robotic Kirispoon End-effector
    2. Download the following files:
        *Kiributton.ino
    3. Connect the Arduino to the computer with the above file
    4. In the Arduino IDE, open the Kiributton.ino sketch
    5. Upload the sketch to the Arduino to run the code
    6. Turn on the power supply to the motor
    7. Pressing the button will move the motor to open and close the Robotic Kirispoon, completing method 1

## Order List for Method 1
There are multiple ways to make the circuit shown in Method 1. The parts list below will contain the items to make the circuit utilized during research. A picture of that circuit is included below. 
(Note: each resistor shown in the circuit diagram is 10k ohms)
{{Picture}}
Before clicking on the links in this list, there are a couple of important things to note:
    - Note: The Arduino Cable is for a USB type B, depending on the computer used, another cable may need to be selected
    - Note: This list assumes the Robotic Kirispoon is already built
    - Note: The left-most column shows the number of the units to order
    - Note: This list will yield more materials than necessary to build the circuit
    - Note: This list assumes that a printer is readily available
    - Note: The “Link Cost” column shows the price of the product in the link address when this document was made, NOT the cost for the amount of material needed for one spoon

|# of Units|Part/Material|Unit Cost|
|---|---|---|
|1|[Arduino](https://store-usa.arduino.cc/products/arduino-uno-rev3?utm_source=google&utm_medium=cpc&utm_campaign=US-Pmax&gad_source=1&gad_campaignid=21317508903&gbraid=0AAAAACbEa84vFf-vMm0bSp7Ru9_hjazM2&gclid=CjwKCAiAmp3LBhAkEiwAJM2JUPkOYBex2DY1xz7MZbzy9ACP6xAJaNXNZbybs5sxCYbR4J5JAEu0iBoCLawQAvD_BwE )|$27.60|
|1|[Arduino Cable](https://store-usa.arduino.cc/collections/cables-wires/products/usb-2-0-cable-type-ab#looxReviews )|$6.50|
|1|[Power Adapter 7 volts  (includes a DC barrel jack adapter)](https://www.amazon.com/dp/B0B5GFJNS2/ref=sspa_dk_detail_3?psc=1&pd_rd_i=B0B5GFJNS2&pd_rd_w=mGGio&content-id=amzn1.sym.386c274b-4bfe-4421-9052-a1a56db557ab&pf_rd_p=386c274b-4bfe-4421-9052-a1a56db557ab&pf_rd_r=2W6D7QCPWHGRAN1Y680W&pd_rd_wg=op3lr&pd_rd_r=806a2af1-b4f9-48da-8165-049daf2cf8ef&sp_csd=d2lkZ2V0TmFtZT1zcF9kZXRhaWxfdGhlbWF0aWM )|$17.99|
|1|[10k Ohm Resistors (10 pack)](https://www.amazon.com/California-JOS-Carbon-Resistor-Tolerance/dp/B0BR68QQPF/ref=sr_1_3?dib=eyJ2IjoiMSJ9.CitfKyPFE5pIWUVS7QgFNKXsj0QNgNypSwtNjBlsotvRwHn9qigSDCFk9SjCPPLbGNeCPsj8pLYMNuQCzHIqfW5iafJLYPsvQ9Wtt7kOpD-ID9ATt-K7_nxSs8aBtOSvzfdjrLO01KDsecxBB8ocr0xEixn1dCMHj_CFr7BhUZ6v7vj1YpLuwfVmYQP2TTMp7lnIaGpZYiojs9D-rkrHKbrX4pLbe8gkUY-w42ecziI.BQNyUV8xU7tfTQWOo8j2iS77g3V_r7tXK5orqj6SgIE&dib_tag=se&hvadid=792677910694&hvdev=c&hvexpln=67&hvlocphy=9197701&hvnetw=g&hvocijid=18200258952104306485--&hvqmt=e&hvrand=18200258952104306485&hvtargid=kwd-6783760661&hydadcr=2794_13896043&keywords=10k%2Bohm%2Bresistor&mcid=4133edb7e5523276b60c85ef7beef09d&qid=1768418028&sr=8-3&th=1)|$3.99|
|1|[Half Breadboard](https://www.digikey.com/en/products/detail/dfrobot/FIT0096/7597069?gclsrc=aw.ds&gad_source=1&gad_campaignid=20232005509&gbraid=0AAAAADrbLliWzviSy71Vuvh3rn68vr0yy&gclid=CjwKCAiAmp3LBhAkEiwAJM2JUAsJKqjgIozuQ8PYXdKIrhqhSSRvO_wl6e72EOud3CsVuHPRZbkJcBoCjGIQAvD_BwE )|$2.90|
|1|[Push button (does not need an adapter)](https://www.amazon.com/EG-STARTS-Buttons-Illuminated-Machine/dp/B01LZMANZ7#:~:text=Wiring%20Information:,No%20lock%20button%20switch. )|$11.99|
|1|[M/M Wires (20 Count)](https://www.digikey.com/en/products/detail/sparkfun-electronics/PRT-12795/5993860)|$2.95|
||Total Cost: |$73.92|

## Method 2: Control through the use of Serial Messages
This method involves wiring the Robotic Kirispoon to an adaptable power source and Arduino. Serial messages will be received by the Arduino to open and close the end-effector. Researchers utilized VS Code to send Serial messages; an example is included. This can be useful when combining the open and close capability of the robotic Kirispoon with controls for other machines. An example of this would be using a controller to control the Robotic Kirispoon and the robot arm it is attached to.

### Parts
    - Power Adapter 7 volts
    - Robotic Kirispoon End-effector (Servo Motor)
    - Arduino
    - Arduino Cable (This is used to connect the Arduino to the computer)
    - 3 Male/Male Wires
    - Breadboard

### Files
    - Endeffector_Control_Example.ino
    - Open_close_Kirispoon.py

### Instructions
{{Picture}}

    1. Build the circuit shown above
        *Note: Pay attention to the specific pins on the Arduino and the specific wires on the Servo Motor
    2. Download the following files
        - Endeffector_Control_Example.ino
    3. Connect the Arduino to the computer with the above file
    4. In the Arduino IDE, open the Endeffector_Control_Example.ino sketch
    5. Upload the sketch to the Arduino to run the code
    6. Turn on the power supply to the motor
    7. In another software, such as Visual Studio, controlling the Robotic Kirispoon can be done by sending the specific messages over the Arduino Cable, which correspond to the action in the Arduino code. An example of sending serial messages in VS Code is seen in the Open_close_Kirispoon.py and below. 
    {{Picture}}
    To run the example shown above, follow the steps below:
    1. Download the following:
        - Open_close_Kirispoon.py
    2. Open the file above in VS Code
    3. Go into the folder containing Open_close_Kirispoon.py
    4. Right click on any white space in the folder to open a menu
    5. Choose “Open in Terminal”
    6. In the terminal type “python” to install it
    7. Install python
    8. **...(Incomplete)...**

## Order List for Method 2
There are multiple ways to make the circuit shown in Method 2. The parts list below will contain the items to make the circuit utilized during research. This circuit is similar to the one featured in the order form above, except that the orange and green wires, the button, and the resistors have been removed. A computer capable of sending serial messages corresponding to the Arduino is assumed to be available. 

Before clicking on the links in this list, there are a couple of important things to note:

    - Note: The Arduino Cable is for a USB type B. Depending on the computer used, another cable may need to be selected
    - Note: This list assumes the Robotic Kirispoon is already built
    - Note: The left-most column shows the number of the material to order
    - Note: This list will yield more materials than necessary to build the circuit
    - Note: This list assumes that a printer is readily available
    - Note: This list assumes that a computer or other hardware device capable of sending serial messages is readily available
    - Note: The “Link Cost” column shows the price of the product in the link address when this document was made, NOT the cost for the amount of material needed for one spoon

|# of Units|Part/Material|Unit Cost|
|---|---|---|
|1|[Arduino](https://store-usa.arduino.cc/products/arduino-uno-rev3?utm_source=google&utm_medium=cpc&utm_campaign=US-Pmax&gad_source=1&gad_campaignid=21317508903&gbraid=0AAAAACbEa84vFf-vMm0bSp7Ru9_hjazM2&gclid=CjwKCAiAmp3LBhAkEiwAJM2JUPkOYBex2DY1xz7MZbzy9ACP6xAJaNXNZbybs5sxCYbR4J5JAEu0iBoCLawQAvD_BwE )|$27.60|
|1|[Arduino Cable](https://store-usa.arduino.cc/collections/cables-wires/products/usb-2-0-cable-type-ab#looxReviews )|$6.50|
|1|[Power Adapter 7 volts (includes a DC barrel jack adapter)](https://www.amazon.com/dp/B0B5GFJNS2/ref=sspa_dk_detail_3?psc=1&pd_rd_i=B0B5GFJNS2&pd_rd_w=mGGio&content-id=amzn1.sym.386c274b-4bfe-4421-9052-a1a56db557ab&pf_rd_p=386c274b-4bfe-4421-9052-a1a56db557ab&pf_rd_r=2W6D7QCPWHGRAN1Y680W&pd_rd_wg=op3lr&pd_rd_r=806a2af1-b4f9-48da-8165-049daf2cf8ef&sp_csd=d2lkZ2V0TmFtZT1zcF9kZXRhaWxfdGhlbWF0aWM )|$17.99|
|1|[Half Breadboard](https://www.digikey.com/en/products/detail/dfrobot/FIT0096/7597069?gclsrc=aw.ds&gad_source=1&gad_campaignid=20232005509&gbraid=0AAAAADrbLliWzviSy71Vuvh3rn68vr0yy&gclid=CjwKCAiAmp3LBhAkEiwAJM2JUAsJKqjgIozuQ8PYXdKIrhqhSSRvO_wl6e72EOud3CsVuHPRZbkJcBoCjGIQAvD_BwE )|$2.90|
|1|[M/M Wires (20 Count)](https://www.digikey.com/en/products/detail/sparkfun-electronics/PRT-12795/5993860 )|$2.95|
||Total Cost: |$57.94|

