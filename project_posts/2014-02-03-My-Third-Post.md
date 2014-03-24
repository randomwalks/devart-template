### post_03: visualization scenario and prototype

(updated 2014-03-24)

#### visualizing scenario omn the secondary monitor
comment :
As a visual challenge, multi windows will represent an each day of exhibition. And Any focusd day will be larger than the others, and each window will have related data (new followers corrensponding that day). We thought about breaking the visuals in two. 1) timeline 2) influence of new followers of randomwalks. However, we are still thinking the best way of communicate right information with visitors.

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

#### idle state: timeline based visualization
Informative visuals

![visualization sketch_timeline]( https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_wire_timeline.jpg "visualization sketch_timeline")

![visualization wireframe_timeline](https://raw.github.com/randomwalks/devart-template/master/project_images/dataviz_idleStage.jpg "visualization wireframe_timeline")

1. timeline loops over and over during idle.
2. exhibition days special issue indication : weekday/weekend/holidays
3. entire exhibition timeline will be shown on back side.
4. each day has its own window containing the day's followers, taken items, etc. Focused day has a larger window than the rest. Due to safe rendering, multi-windows will be limited 5 (or more).

key functions : webGL, multi-window, communicating between windows. dropping a specific day related information to a right window.

![multiwindow test](https://raw.githubusercontent.com/randomwalks/devart-template/master/project_images/dataviz_multiWindow_003.gif "multiwindow test")

![multiwindow test](https://raw.githubusercontent.com/randomwalks/devart-template/master/project_images/dataviz_multiwindow_test_001.jpg "multiwindow test")

reference : 
http://www.infimum.dk/HTML/JSwindows.html

#### interaction state :  whe a new follower happens
![visualization wireFrame](https://raw.github.com/randomwalks/devart-template/master/project_images/dataViz_interactionStage.jpg "visualization_wireFrame_interaction")

1. When visitors become new followers, 3D water space will be shown at the monitor.
2. A mesh surface or generative form standing for randomwalks will be lift up by a new follower's power.


```
# code sample

```
