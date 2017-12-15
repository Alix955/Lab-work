
#include <ros.h>
#include <sensor_msgs/JointState.h>
#include <Servo.h>

using namespace ros;

NodeHandle nh;
Servo servoLower;  //lower half servo
Servo servoUpper;  //upper half servo

void cb(const sensor_msgs::JointState& states){
    int angle = (states.position[2] * 180 / 3.14) + 90; //converts angle from radians into degrees
    int angle2 = (states.position[1] * 180 / 3.14); //converts angle from radians into degrees
    servoUpper.write(angle);                         //writes angle onto the upper servo depending on its joint_state position
    servoLower.write(angle2);                        //writes angle onto the lower servo depending on its joint_state position
  }

Subscriber<sensor_msgs::JointState> sub("joint_states", cb);

void setup(){
  nh.initNode();
  nh.subscribe(sub);
  
  servoUpper.attach(9); //attach the upper servo to pin 9
  servoLower.attach(8); //attach the lower servo to pin 8
}

void loop(){
  nh.spinOnce();
  delay(1);
}
