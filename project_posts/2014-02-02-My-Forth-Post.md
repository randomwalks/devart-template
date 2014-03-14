### post_04: hardware plan

#### different types of lucky draw machines
![types of lucky draws](https://raw.github.com/randomwalks/devart-template/master/project_images/luckyDraw_000.jpg "types of lucky draws")

#### lucky draw machine hacking plan

When a visitor follows  randomwalks google plus page on the installed computer,

1. a digital signal will be sent to an arduino board.
2. When an arduino board gets input data (“new follower came”), it sends a signal to a lucky draw machine system to generate one free play for the follower.
3. A follower can play with pickers of a lucky draw machine to get one of items.
4. Each gift has a pre-set RFID information including item kind.
5. RFID reader is installed at the bottom of a lucky draw machine, which can detect
  a) what kinds of gifts are going out and
  b) send a signal to an arduino board, which will send a signal back to a local computer database system.

![hardware hacking diagram]( https://raw.github.com/randomwalks/devart-template/master/project_images/hardware_hackingPlan_001.jpg "hardware hacking diagram")


#### detecting a selected gift and sending data to local database

![hardware RFID reader diagram](https://raw.github.com/randomwalks/devart-template/master/project_images/hardware_RFID_001.jpg "hardware RFID reader diagram")

When gifts are out, RFID tags (on the gifts) will touch one of attached RFID readers on the path way. After detecting gift kinds, RFID readers will send relevant data to the local database through Arduino.
Secondary solution of detecting kinds of gifts is using cameras. Each item has different color, so detecting colors will deliver data of gift kind to the server.


### post_04: hardware prototyping

#### joystick with 2 DC motor control
(https://docs.google.com/file/d/0B5SxHeyUnkICOXhSRENaTWtONGhfb1dZSVhqaWl5R3ZQVHYw/preview)

