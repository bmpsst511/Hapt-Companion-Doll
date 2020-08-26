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
Most current research methods are limited to expressing the interaction process between humans and interactive dolls in the virtual world [1, 2], ignoring the haptic feedback that is continuous or conveys a sense of reality. Even in the real environment, there are many limitations to the interactive experience when delivered by vibration only. In order to develop more specific technologies, our previous work proposed the development of tactile interactions for virtual companion dolls [3]. Therefore, as an extension of our previous work, this research provides a solution to the problem, which is that users have difficulty in obtaining an intuitive experience in a virtual environment. LeapMotion is used to track user gestures and interact with the doll. In the virtual and real world, the doll will display different tail animations and physical movements according to different user gestures to activate the doll’s emotions at the time.

Our Approach
---
Virtual reality interactive applications, using types of equipment including LeapMotion and HTC VIVE. LeapMotion is mainly for the intuitive gesture control and HTC VIVE is for the virtual reality application development. By applying the Unity game engine to integrate LeapMotion and HTCVIVE to develop virtual reality interactive applications. In order to allow the virtual companion doll to have rich content to enhance the user’s immersive experience in the virtual environment, an interactive doll with a tail mechanism was developed, as shown in Figure 3, to simulate the tactile feedback with different virtual doll emotions. This interactive doll uses WeMos D1 mini as a microcontroller and is equipped with a WIFI module. The virtual content is developed by Unity to allow users to perform interactive applications. Two servomotors are used to drive and control the tail mechanism. The outer layer of the tail mechanism is covered with cotton and cloth to become a physical doll.


<div align=center><center class="half">
    <img src="https://i.imgur.com/9CgWgH2.png" width="180"/>
    <img src="https://i.imgur.com/lxbPSQ2.jpg" width="180"/>
    <img src="https://i.imgur.com/vm73GWi.jpg" width="200"/>
</center></div>



Conclusion
---
Finally, we developed a VR application for users to experience an intuitive and immersive VR experience. We believe that this intuitive companion doll also inspired other related application services. However, to complete the limitations points of this research need to include a more detailed analysis of the psychophysiology of the user study to discover more intuitive behaviors so that the user can be deeply immersed in the virtual environment. (I don’t understand this) By using more motion generator components alongside DC motors and gears, the tail swing can be made more vivid.

<center class="half">
    <img src="https://i.imgur.com/iOd3BEx.png" width="200"/>
    <img src="https://i.imgur.com/TQigV8m.png" width="210"/>
</center>


###### tags: `Templates` `Documentation`
