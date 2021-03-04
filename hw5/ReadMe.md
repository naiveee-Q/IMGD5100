# ReadMe
The system has 4 bottons and 1 RGB LED. 
Use the four bottons to move the cube and change the mode by pressing the UI botton on the screen.
Use Ardity to connect Unity and Arduino. Use DOTween to move the objects.
It is supposed to be an RPG game design with a character walking on the map and talk to people. While character talking with NPCs, she may get into different modes.
### Problems
When using println, the msg get from Arduino is not the string I directly send. I tried to add "/n" but failed. So I use numbers to transform messages and after using parse to turn it back, it works.
