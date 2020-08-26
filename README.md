---
title: 'The Development of an Interactive Device for Tactile Sensation with Haptic Companion Doll'
disqus: hackmd
---

HaptDoll: An Interactive Device for Tactile Sensation with Virtual Companion Doll 
===
![](https://i.imgur.com/gAA3u9R.jpg)



## Table of Contents

[TOC]

## Abstract

The main purpose of virtual reality is to immerse a user in a virtual environment, the existing haptic control systems have been provided primarily with handheld tactile experiences or vibration-based designs. However, most of the systems are ignoring the interaction between both haptic device and upper-body as combined system for rich interaction. We extend the potential for immersion along these dimensions with the HaptDoll, which focuses on combining and developing a wireless wearable device that provides precisely directed angle variation of the physical-arms into virtual-arms, and a companion doll with rich expressive animations and a servo-motor driven rotations for haptic feedback. 



Introduction
---
The distinguishing feature of immersive virtual and augmented realities depends on engaging intuitive control experience and all of the senses. As the extension of our previous work [1], this research proposes a wearable device and a companion doll as shown in Figure 1. The wearable device can track human activities for arms and upper-body that interact with virtual objects. In the virtual companion doll, we designed six facial expressions such as joy, angry, sad, surprise, fear, disgust, and different motions of motor rotation which are changed by the force sensor value activated by the users while they interacting with physical companion doll.

![](https://i.imgur.com/R9IC5uj.png)

System Overview
---
Figure 2 shows the system structure for the combination of the wearable device and companion doll as the HaptDoll. In the software part, we use Unity2017 and SteamVR plugin to develop the interactions, which has an interaction story activity in virtual scenario. We use the HTC VIVE pro as the head-mounted display; we also use WiFi to connect the haptic companion doll and wearable device, which is setup on the user arms. The device has the force sensors was setup on the bottom of the companion doll which can generate the data when user pressing the sensors and haptic feedback of ear rotations driven by servo motor. In the hardware configuration, the processor is Intel(R) Core i7- i7-8750H CPU up to 4.10 GHz, and the memory is 32GB memory. In order to provide a better visual experience and interactive effects, we use NVIDIA GeForce GTX 1070 8GB as the graphics card.
![](https://i.imgur.com/pWpDqv0.png)

Intuitive Wearable Device Design 
---
The wearable device consists of control box and six motion sensor units. On the right side of the Figure 3, there is the control box which is consisted with the NodeMcu, a development board based on ESP8266 and the multiplexer for I2C protocol to communicate multi-IMU sensors to detect the upper body activities. The other one is the motion sensor unit which is consisted with the IMU sensor to acquisition of angular variations and slider switch to change the I2C channel. 
![](https://i.imgur.com/ju7yZJr.jpg)

Haptic Companion Doll Design
---
The doll making is inspired by a fruit, wax apple and printed with a 3D printer as shown in Figure 4. The ear part can rotate driven by servo motor. Upper part and bottom part was connected by magnet. Inside the core space, custom fabricated PCB and servo motor was placed. The ring part was printed with transparent material attach with a led strip, the colorful light can penetrate the ring. Based on Robert Plutchik’s wheel of emotions [2], we select six different LED colors such as the yellow color for joy, red color for angry, blue color for sad, dark green for surprise, light green for fear and purple color for disgust. The different light shows according to the force sensor data of user feedback as shown in Figure 5.
![](https://i.imgur.com/7OnAyQL.jpg)

![](https://i.imgur.com/Zle28yj.jpg)


Conclusion
---
This paper has performed and combined both an intuitive wearable device and companion doll into the HaptDoll, that can provide the user with real-time interacting and controlling virtual objects with sensors. This system approaches the unique capability of delivering the human arm movement and haptic sensations with wireless transmission, as compared to conventional techniques.



###### tags:`GITHUB`
