# Chrome-Dino-game-Hack-for-EEE-students
It's a simple project whare you can run the Dino game automatically by using light sensor and Servo Motor

Parts you’ll need:
1) Microcontroller (one of these):
  ESP32 Dev Board (recommended)
  or Arduino Uno
2) SG90 Micro Servo Motor
3) Breadboard
4) Jumper wires
5) USB cable (for power/programming)
6) Light sensor (LDR)
7) some resistors

Basic idea:
1) When a cactus passes, that pixel area changes brightness then Light sensor ditect it 
2) The Microcontroller detects the change
3) It triggers the servo to presses spacebar

How to build:
1) open "Dino game" file and 1st read "Dino Auto Play.pdf"
2) collect the componets that are mentioned.
3) add them them like the circuit name "Dino_circuit.png" or like "Dino Auto Play.pdf"
4) upload the code name "Dino_code.png"

How to upload the code:
1) 1st install the "Arduino IDE" (for installation follow youtube video)
2) Copy the code or download the file.
3) upload the code to Microcontroller.
   
How to optimizing the code:
1) Open Serial Monitor
2) Watch LDR values:
3) Set threshold between them

**Setup Tips:
1) LDR Placement
    Put it exactly where cactus appears
    Reduce ambient light interference (use tape tube)
2) Servo Position
    Align it with spacebar
    Adjust angle for clean press
3) Improve Accuracy
    Use black tape to focus sensor
    Increase sampling speed if needed




