### post_03: visualization scenario and prototype

(updated 2014-03-24)

#### visualization on secondary monitor
comment :
As visual challenges, multi windows will represent the entire exhibition period day by day. Each window will contain daily related data such as who gave "plus" today, time-code, taken items etc. Our early idea was about breaking the visuals into two sections. 1) timeline 2) influence of "plus" to randomwalks. We are still figuring out the best communication way of delivering right information to the visitors. Therefore, we decide to stick with one combined visual of daily increase and entire change.

[front/small windows]
1. new "plus" users of a day
4. gifts taken by today "plus" users
5. grouping users who selected same kind gifts

[behind/main window]
1. influence factor of time 
a) opening period : mid period : end period 
b) weekdays : weekend : holidays
2. number of remaining items
3. compare "plus" increase and change of randomwalks followers or circle friends


#### visual test 
multi windows with 3D shape on the behind windowwindow

![visualization sketch_timeline]( https://raw.github.com/randomwalks/devart-template/master/project_images/visualization_wire_timeline.jpg "visualization sketch_timeline")

![visualization wireframe_timeline](https://raw.github.com/randomwalks/devart-template/master/project_images/dataviz_idleStage.jpg "visualization wireframe_timeline")

1.during idle state, multi windows will animate smoothly from beginning to end. Due to safe rendering, multi-windows might  be limited to a certain number. In this case, multi-windows will change position to represent different days.
2 & 3. entire exhibition timeline will be shown : weekday/weekend/holidays
4.each day has its own window containing the day's new "plus" user list, taken items, etc.
key functions : webGL, multi-window, communicating between windows. dropping related information to a right window.

![multiwindow test](https://raw.githubusercontent.com/randomwalks/devart-template/master/project_images/dataviz_multiWindow_003.gif "multiwindow test")

![multiwindow test](https://raw.githubusercontent.com/randomwalks/devart-template/master/project_images/dataviz_multiwindow_test_001.jpg "multiwindow test")

reference : 
http://www.infimum.dk/HTML/JSwindows.html

#### 3D visual on main window
![visualization wireFrame](https://raw.github.com/randomwalks/devart-template/master/project_images/dataViz_interactionStage.jpg "visualization_wireFrame_interaction")

1. When visitors make a "plus", 3D water space will be shown at the monitor (behind of multi-windows).
2. A mesh surface or generative form standing for randomwalks will be lift up by new "plus" power.

