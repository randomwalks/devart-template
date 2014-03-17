### post_03: visualization scenario and prototype

#### visualizing scenario omn the secondary monitor

1. a new follower
2. followers occuring pattern over time
4. taken gifts kinds by followers
5. grouping followers who selected same kind of gifts

data influence factors
1. quality of randomwalks’ previous projects / activities - are they valuable enough to follow?
2. exhibition time period
a) opening period : mid period : end period 
b) weekdays : weekend : holidays
3. number of remaining items

#### idle state: time based visualization
Informative visuals

![visualization sketch_timeline]( https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_wire_timeline.jpg "visualization sketch_timeline")

![visualization wireframe_timeline](https://raw.github.com/randomwalks/devart-template/master/project_images/dataviz_idleStage.jpg "visualization wireframe_timeline")

1. timeline loops over and over during idle.
2. exhibition days special issue indication : weekday/weekend/holidays
3. entire exhibition timeline will be shown on back side.
4. each day has its own window containing the day's followers, taken items, etc. Focused day has a larger window than the rest. Due to safe rendering, multi-windows will be limited 5 (or more).

key functions : webGL, multi-window, communicating between windows. dropping a specific day related information to a right window.

reference : 
http://www.infimum.dk/HTML/JSwindows.html


#### idle state : item based visualization sketch
![visualization sketch_item]( https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_item_001.jpg "visualization sketch_item")
![visualization sketch_item_002](https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_item_002.jpg "visualization sketch_item_002")

#### interaction state: 

