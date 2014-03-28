### post_04: hardware plan

#### different types of lucky draw machines
![types of lucky draws](https://raw.github.com/randomwalks/devart-template/master/project_images/luckyDraw_000.jpg "types of lucky draws")

#### lucky draw machine hacking plan

When a visitor gives a "plus" to randomwalks page on the installed computer,

1. a digital signal will be sent to an arduino board.
2. When an arduino board gets input data (“new plus added"), it sends a signal to a lucky draw machine system to generate one free play for the user.
3. The user can play with pickers of a lucky draw machine to get one of items.
4. Each gift has pre-set RFID stickers on its surface including item kind.
5. RFID readers are installed at the bottom of a lucky draw machine, which can detect
  a) what kinds of gifts are going out and
  b) send a signal to an arduino board, which will send a signal back to a local computer database system.

![hardware hacking diagram]( https://raw.github.com/randomwalks/devart-template/master/project_images/hardware_hackingPlan_001.jpg "hardware hacking diagram")


#### detecting a selected gift and sending data to local database

##### 3-1. RFID
![hardware RFID reader diagram](https://raw.github.com/randomwalks/devart-template/master/project_images/hardware_RFID_001.jpg "hardware RFID reader diagram")

When gifts are on the way of out, RFID tags (on the gifts) will touch one of attached RFID readers on the path way. After detecting gift kinds, RFID readers will send relevant data to the local database through Arduino.

##### 3-2. Color detection
![hardware color detector diagram](https://raw.github.com/randomwalks/devart-template/master/project_images/hardware_color_000.jpg "hardware color detector diagram")

Secondary solution of detecting gift kinds is a color detecting process. Each item has a different color depending on its kinds (which we will limit approximately less than 10 in this case), so color information will deliver data of gift kind to the server.
In this case, each item will be encapsulated by a solid color capsule pack.
