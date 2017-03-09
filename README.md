#IoT Project 1 - Deliverables

Student Name: William McLaughlin, Jack Gilmartin, David Brennan
Course: Games Development Level 7 Group A
Student ID Number: S00168764, S00171013, S00172994
Project Title:  Kinect Sensor XYZ

##Background / Introduction

Our research will be based on Microsoft’s Kinect device, we are hoping to use its image recognition technology to calculate the area of a room. The idea is to use the device to calculate the area of the room that the device is situated in. The Kinect Camera sends out IR (InfraRed) light, once this light hits an object,  it will be sent back to the Kinect Camera. This light is then read by the Kinect Sensor (The Sensor is in the same place as the Camera.). 
Our goal is to have the Arduino calculate the time taken for the IR light to return to the Camera (Our Arduino will divide each time value by 2 to account for the light’s return trip.).  We place the device in five different directions, four of those directions will face a wall each, the fifth will face the ceiling. We will also measure the device’s width with the IR Sensor and take this into account. Once the Arduino has taken the different times taken into account, the Arduino will calculate the distance of each direction by multiplying the speed of light by the time taken. 
The Arduino will then add the distances that follow the same direction, three values should remain after this stage. These three values will be multiplied together to calculate the room’s area (length x width x height). We feel that this device would be useful for construction work or architecture, for example if a house was for sale, this device could measure the area of each of the house’s rooms.  

##Requirements

The hardware requirements for this project will include an Xbox 360 and a Kinect Sensor, (perhaps a smartphone). A variety of software will be used in the project such as Microsoft Visual Studio, Arduino IDE and web services including Google Drive, Google Docs, Trello and Github. An object of any kind to be scanned may also be optional.

##Methodology

We will be tracking our progress with Trello. We have assigned different boards and goals to our moodboard based on the goals we hope to meet throughout the project. There will also be a repository set up on Github to quickly access and modify the code the Arduino and Kinect will be using.

Building Creativity Muscles
Brainstorm & Research
Design
Development
Testing & Evaluation
Presentation

With these headings, we will be able to keep track of the progress we have made throughout the project.

##Screenshots of working application and Pictures of Physical / Hardware Setup

###Success Criteria for Project Completion

(When the calculations and code for the project are correct with the physical hardware setup finalized.)

##References

https://www.intorobotics.com/7-tutorials-start-working-kinect-arduino/
https://sites.google.com/site/2007arduino/example-code/controller-tutorials/kinect

##Source Code


#Project Milestones

##Project Plan:
For this project, we intend to be able to read the layout of a room using an Xbox Kinect and use that data in an application to calculate the available room space. In order to achieve this, we will be learning how to program a Windows Form Application to read in data from a Kinect and send this data to an arduino to be wrote into an Excel spreadsheet.

We will first need to learn how to use the Kinect Development Kit (SDK) in order to utilise the Kinect’s built in IR sensor. Once we know how to operate the Kinect, we will learn how to read information from the Kinect and send it to a Windows Form Application using C#. This program will have to be able to read in the data from the Kinect and convert it into real world measurements if necessary. The data collected will then have to be sent to the arduino via USB where it can be sent to a Google spreadsheet. From there the user can take the data as is or read it into another program for a variety of purposes.

###Step 1: Research
The bulk of our research will be on how the Kinect works and how we can program it to communicate to the Arduino, this is the primary challenge of our project. We will be searching the web, reading articles and watching tutorials to help our project come into fruition. We will 

###Step 2: Implementation

###Step 3: Testing
