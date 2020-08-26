---
title: 'Haptdoll: A Development of Gesture-based Interactions for Haptic Companion Doll in Virtual and Physical Environment'
disqus: hackmd
---

Haptdoll: A Development of Gesture-based Interactions for Haptic Companion Doll in Virtual and Physical Environment
===
![](https://i.imgur.com/icD493P.jpg)


## Table of Contents

[TOC]

## Abstract
<div align>
The main purpose of virtual reality is to immerse a user in a virtual environment. However, the most common criticism of the companion robotics is that they are not able to provide effective tactile feedback. 
In this minor research, we will propose a haptic feedback companion doll which has a tail mechanism controlled by the user hand gestures. 
For the reaction part, we design three emotions for the doll that can give user different feeling while they are interact with the companion doll in virtual and physical worlds.
</div>

Introduction
---
Our research group is trying to provide a new interface for interactive robotic in between virtual 
(VE) and real environment (RE).
Our previous work
has developed the interactive companion doll to deliver 
the intuitive manipulating object and motor-driven feedback in VE and RE to
let the users not only can perceive visual and sound feedback but perceive related motor-driven 
feedback during the experience. However, an emotion effect is a complex system, which has various conditions to be
activated by the different stimuli. Currently, to provide emotion feedback by simulating (natural behavior)
such as continuous touch, stamp and hit in VE, same time control the physical companion doll to display the 
correspond reaction is a challenge, there were no such an interactive interface able to simulate all the natural
behavior to provide the diversity of interaction. Most of the works developed the interactive doll only provide 
one-way communication from players to audiences, or just support interaction either in the VE or RE. 
To enhance the immersive experience in VR system,
we proposed a dynamic gesture control system based on the concept of three emotions (happy, sad and disgust) which
utilize LeapMotion to simulate and get the hand activity data in virtual reality. The system consists of interactive 
companion doll and virtual interactive interface developed with Unity. With the system, the user can interact
through three gestures with the digital companion doll to activate three emotions in the virtual scenario. 
Meanwhile, the user also can feel the motor-driven feedback when they are interacting with the companion doll.
The main contribution of this research are summarized as follows.

First, we developed a motor-driven tail mechanism with six emotions movements (happy, sad, angry, joy, surprise and disgust)
to deliver the real feedback from virtual scenario and a user study is conduct for selecting 
most three distinguished emotions (happy, sad and disturbing).

Second, we build an immersive VR application with a real doll for exploratory observation gestures how users represent.
Third, based on the results of first and second, we modify the immersive VR application allow user interact with 
companion doll in between virtual and real world. 

Our Approach
---
Virtual reality interactive applications, using types of equipment including LeapMotion and HTC VIVE. LeapMotion is mainly for the intuitive gesture control and HTC VIVE is for the virtual reality application development. By applying the Unity game engine to integrate LeapMotion and HTC VIVE to develop virtual reality interactive applications. In order to allow the virtual companion doll to have rich content to enhance the user’s immersive experience in the virtual environment, an interactive doll with a tail mechanism was developed, as shown in Figure 3, to simulate the tactile feedback with different virtual doll emotions. This interactive doll uses WeMos D1 mini as a microcontroller and is equipped with a WIFI module. The virtual content is developed by Unity to allow users to perform interactive applications. Two servo motors are used to drive and control the tail mechanism. The outer layer of the tail mechanism is covered with cotton and cloth to become a physical doll.


<div align=center><center class="half">
    <img src="https://i.imgur.com/9CgWgH2.png" width="180"/>
    <img src="https://i.imgur.com/lxbPSQ2.jpg" width="180"/>
    <img src="https://i.imgur.com/vm73GWi.jpg" width="200"/>
</center></div>



Conclusion
---
In summary, this paper has performed the HaptDoll that can provide the user with interacting 
and controlling virtual objects with sensors. This system 
approaches the unique capability of delivering the human arm 
movement and haptic sensations with wireless transmission, as 
efficacy of this approach, a user study had been conducted to 
evaluate basic human perception of this type of haptic actuation in 
terms of leveling three different kinds of doll emotions and 
tail movements. Finally, we developed a VR application for the user to 
experience the intuitive manipulation with the HaptDoll.  
We believe that this haptic companion doll should initiate a process of development and 
application. At the same time, distinct limitations point to 
directions for research and development. The final version of this 
paper will include psychophysical analysis of user studies to 
discover more intuitive behavior to immerse user into virtual 
environment. Tail rotation can be designed more vivid through 
more movement generator component with DC motor and gears. 
<div align=center>
    <img src="https://i.imgur.com/iOd3BEx.png" width="200"/>
    <img src="https://i.imgur.com/TQigV8m.png" width="210"/>
</div>
