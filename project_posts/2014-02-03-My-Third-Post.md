### post_03: visualization scenario and prototype

#### visualizing scenario
On the secondary monitor, collected data will be shown.

1. a new follower (this person’s public profile)

-idle state : overall timeline animation
2. how often new followers occurred.
3. entire followers pattern over time

- taken gifts
4. taken item kind by a new follower
5. grouping followers who selected same kind of gifts

data influence factors
1. quality of randomwalks’ previous projects / activities - are they valuable enough to follow?
2. exhibition time period
a) opening period : mid period : end period 
b) weekdays : weekend : holidays
3. number of remaining items

#### time based visualization sketch
![visualization sketch_timeline]( https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_wire_timeline.jpg "visualization sketch_timeline")

![visualization wireframe_timeline](https://raw.github.com/randomwalks/devart-template/master/project_images/dataviz_idleStage.jpg "visualization wireframe_timeline")

#### item based visualization sketch
![visualization sketch_item]( https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_item_001.jpg "visualization sketch_item")
![visualization sketch_item_002](https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_item_002.jpg "visualization sketch_item_002")

#### visualization screen sketch
timeline (bottom side) : starting from the exhibition starting day to the end.
[new follower : exhibition stage (early, middle, end period ) : issues of the day (weekday, holiday, weekend, etc)]
items (top side) : 10~ 15 kinds of items including “no item”
connection (middle) : which item belongs to whom
![visualization sketch_screen_01]( https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_screen_001.jpg "visualization sketch_screen_01")

1) idle state
playing visualization based on time. Each new follower pitstop, corresponding item becomes highlighted and other related followers will be brighten as well. This will play over and over until interaction (means a new follower comes in) happens.

2) interaction state
Once a new follower happens, timeline animation stops. A new pitstop for the new follower will be shown on timeline and it will be connected to an item selected by that person. Other information of the day will be shown at bottom and other connections only related to the selected item will be highlighted.

