## Note
For all of these practical sessions i worked together with Samuel Page.

# Practical Session 1

## Linux commands
cat - Retrieves files and displays information about them.

mv - Move file.

rm - Remove file.

echo "." - Copy text into this folder.

cp - copy.

ls - list.

cd$ - current directory.

## What is Markdown Syntax?

Markdown syntax is markup language that uses a plain text format. It is easily converted into other text types such as HTML as it has no hidden characters, unlike other text programs such as Word.

A variety of different symbols can be used in the Markdown syntax, such as (#) which can be used to create headers, as seen above. The more of the symbol in sequence, the smaller the header will be.


## What can git be used for?

Git is an online program that can be used to create repositorys to store files and documents in. It is primarily used for versioning of code, as well as allowing multiple people to work on the code simultaneously with each one being able to push / pull the code to make their changes.

It can be easily accessed and interacted with using the Linux command console, using certain commands to log into your account and to push / pull changes to documents you have stored within repositorys there.










# Practical session 2
In this practical session we are beginning to create out basic motor. We are using a cork as the foundation of the motor, with copper wiring going around it for the coils. There is also a nail in either end to support the motor, and ensure it stays in its brackets. The brackets themselves are made out of large paperclips, as well as the brackets holding the magnets. I also used copper tape on the end of one side of the cork as a commutator, with a frayed multi core wire working as the brush to supply voltage. In total we had 116 coils around the motor, with 2 cores. 

![Given parts](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171005_113211.jpg)

![Stand assembled](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171005_120906.jpg)

![Coils around motor](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171005_122520.jpg)


Overall the motor did not work very well, this was largely due to there only being two coils. This meant that there were large gaps between the coils, resulting in the motor struggling to keep its momentum going. As well as this the motor could not really start by itself, it needed something external, such as me starting the turning motion by hand. 

![Assembled motor](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171011_134358.jpg)

To improve the motor i am planning to completely redesign it using Solidworks. The designs for each piece can be seen below. There will be e a bracket on either side of the motor to hold it up, as well as an upside down U shape bracket for the magnets. The magnets will be split into four to have two pulling and two pushing, instead of just having one pulling and one pushing.

![Solidworks design ready to be cut](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171019_120219.jpg)

![Cut out motor pieces](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171023_150711.jpg)

As well as this i plan on increasing the amount of cores on the motor itself from 2 cores up to 8. The motor itself will be solid wood as well, with indents cut into it to ensure the coils stay in place. This was a slight issue on the old design as the coils were very spread, with some almost coming off the sides of the motor. 

![First pieces assembled](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171026_114842.jpg)

![Wrapping the coils around the core](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171026_122245.jpg)

![All of the coils wrapped](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171026_130502.jpg)

![Built motor](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171215_094900.jpg)

![Built motor](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171215_094903.jpg)












# Practical 3
In this practical we refined our solidworks designs, and created an area on the motor for the encoder. I designed and cut out the encoder piece along with the other sections of the motor as it took a couple weeks to get all of the pieces complete due to the laser cutter being used by other courses for their deadlines. 

![Encoder cut out](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171023_150711.jpg)

Due to time restrictions we were unable to get our enconder functioning. This was primarily due to how long it took to cut out each of the pieces in the laser cutter. Due to this we moved onto the stepper motor control and coding, as this was going to be a important part of the final arm project, along with the servos. 












# Practical 5
In this practical we learned the basics of controlling stepper motors.

We had to wire up the stepper motor to the ardunio board using a motor shield, which had special pins for the motor wires to go into and be screwed down. It was important that the wires were set up the correct way around, otherwise the motor would turn the opposite way expected, or not function at all. As well as this the yellow wires of the stepper motor were left loose as we were using the motor as a bipolar motor instead of a unipolar motor. 

![Arduino board and motor shield](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171213_193953.jpg)

![Stepper motor setup](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Screenshot%20from%202017-12-13%2019-29-20.png)

![Stepper motor plugged into the arduino board](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171102_112210.jpg)


After this we had to write arduino code to control the motors at half step, double step, full step, and micro stepping. 

The full stepping mode means that the stepper motor turns a full 90 degrees each time it turns, swapping between the two sets of N/S pole magnets. 

![Full step code](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Full_step.JPG)

The double stepping mode has the same total steps as the full stepping mode, with the steps being between two of the magnets at a time. This method is used to provide the most torque from the motor, but it does not allow for very precise movements, similarly to the full step. 

![Double step code](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Double_Step.JPG)

The half stepping mode is a combination of the full stepping and double stepping modes. It has a total of eight steps, with it stopping at each pole, as well as in between poles. This provides a lower torque, but allows for double the angular control of the motor. 

![Half step code](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Half-Step.JPG)

The microstepping mode allows for the most control of the motor possible, although with far less torque than the previous modes. The strength of the magnets are controlled using sine wave inputs, which allows the motor to move at roughly 1.8 degrees for each movement, allowing for a total of 200 steps per revolution. 

![Microstep code](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Microstep1.PNG)

![Microstep2 code](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Microstep2.PNG)












# Practical 6
This practical marks the start of the Robotic Arm mini-project that lasts until after the Christmas holidays. 

For this project we are going to be using micro servos instead of the previous stepper motor for the joints of the arm, although a stepper motor can still be used. 

The arm needs to have at least two degrees of freedom in it, although more are allowed if you get more servo motors. Once this is done the arm will be programmed using ROS and a 3d visualisation will be built for it. 

The first step of the project is to control the servo motors themselves. This is done again using ardunio coding. The first version of our servo code read the value of the A0 pin on the board which the potentiometer was attached to, and used this value like a switch. Depending on the direction the potentiometer was turned, the servo would turn 180 degrees in that direction.

![First version](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Screenshot%20from%202017-12-13%2020-01-09.png)

Finally we changed the code completely to utilise the map feature that ardunio as inbuilt. This allowed us to scale the input values in the analog pin to the desired degrees of motion on the servo, which could then be directly inputted into the motor.

![Map code](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Screenshot%20from%202017-12-13%2019-55-51.png)

It was found during this version of the code that two of the analog pins (A0,A1) do not function correctly, so the code was adjusted to use the other analog pins. This should not have too much of an impact as we are not using the potentiometers on the final project, so we shouldnt need many, if any, of the analog pins. 

Once the testing was done we began work on the design of the arm for the project. This started off with paper designs, as seen below. 

![Paper designs of the arm](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171121_220211.jpg)

![Paper designs of the arm](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171121_220229.jpg)

![Paper designs of the arm](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171121_220233.jpg)

![Paper designs of the arm](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171121_220250.jpg)

After the measurements for the designs were decided, we cut them out using the provided cardboard to ensure that the motors actually fit, and to ensure that none of the pieces were going to be too large or flimsy to use. 

![Cardboard cutouts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171213_222651.jpg)

![Cardboard cutouts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171213_222730.jpg)

![Cardboard cutouts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171213_222738.jpg)

![Cardboard cutouts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171213_222743.jpg)

![Cardboard cutouts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171213_222749.jpg)

![Cardboard cutouts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171213_222756.jpg)

Most of the pieces fit well, and were good sizes compared to the servo motors. Only the base of the arm needed to be adjusted to be able to fit the stepper motor inside of it.

Once we were happy with the designs and measurements of the pieces, we began to design them in solidworks. Each piece was designed individually, with some adjustments made to compensate for the tolerances of the 3D printer. Some of the larger pieces had to be split up into smaller sections due to restrictions with the printers, such as not being able to print lips onto pieces without some kind of support on them. We decided to just seperate the pieces instead of adding supports, as there would be a lesser chance of damaging the final product when removing the supports. 

![Arm support](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171123_123053.jpg)
!more solidworks images

Once the solidworks designs were complete, they were converted into STL format so that the 3D printer could read the print the files. 

![Printed off pieces](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171130_122052.jpg)

![Printed off pieces](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171130_122112.jpg)

Printing the final pieces only took a couple days, and all of the pieces came out exactly as planned. The motor supports on the base were measured slightly wrong originally, as we forgot to adjust the holes they go in aswell. This was resolved by filing down the pieces very slightly, so that they snugly fit inside of the holes in the base. None of the other pieces required much adjustment, aside from removing stray pieces of plastic attached to them. 

Once all of the pieces were checked to ensure they fit, the final assembly process began. This started with gluing the base pieces together. We realised during the assembly of the base that there was no proper support for the stepper motor at the bottom to be attached to, so we had another piece printed off for the shaft of the motor to be placed into. 

![Base pieces assembled](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171212_150914.jpg)

The two pieces sticking out of the top are for the servo motor to slot into. The lower part of the arm will then be attached onto this servo. The red piece that can be seen in the middle is attached to the top of the stepper motor and will allow the whole arm to rotate. 

![Servo attached to base](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171212_182512.jpg)

We used elastic bands to hold the servo in place on the base of the arm. The servo fit very well in the hole, but had some stability problems once anything was actually put onto it, so the elastic bands gave it more support to prevfent movement and it becoming dislodged mid movement. 

The next piece we assembled was the actual arm itself, which would be attached to the above piece later on. One of the servos was slotted into the gap on the lower arm, which was then attached to the upper half of the arm also using elastic bands. The elastic bands meant that it was very easy to dismantle and move the arm, whilst still giving plenty of support to hold the arm together. 

![Arm pieces attached together](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171212_182522.jpg)

![Elastic bands on arm](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171212_182529.jpg)

We had some difficulty attaching the lower half of the arm to the base, due to the circular shape making the elastic bands roll off the sides. In order to counter this we cut some slight grooves into the circular part for the bands to be wrapped tightly around.

!Image of bands holding onto the lower half of arm

Finally once this was done the main arm part and the lower base were assembled together to create a full arm. The stepper motor was also placed into the base of the arm. 

![Full arm](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171214_163000.jpg)

In the above image the arm was also plugged into a breadbord (from another project)  so that 5V could be easily supplied to both of the servos. With this setup the arm was able to support its self and move around easily. 

We realised that the wires from the stepper motor caused the arm to tilt slightly, but due to time restrictions we were unable to alter our design. In the future we would have cut a gap into the side of the base to allow the wires to come out easily. As well as this we would have also lowered the height of the base, as the stepper motor needed to be supported so that it could actually reach the base of the arm to spin it.

Once the arm was assembled we began to design it onto rviz using urdf files. To do this we had to 'describe' each of the components of our arm, using measurements, and giving origin points for the joints to move on. This took some time to do as we did not realise that the 'origin' in the link section reffered to the origin point of the object itself, which was where the joints would be connected to. We originally assumed that this origin was where the part would be located on the rviz map in respect to the 0 0 0 origin point in the centre. 

![parts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Screenshot%20from%202017-12-13%2020-41-05.png)
![parts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Screenshot%20from%202017-12-13%2020-41-23.png)
![parts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Screenshot%20from%202017-12-13%2020-41-42.png)
![parts](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Screenshot%20from%202017-12-13%2020-41-52.png)

After the components were all described, we had to create joints between them starting from the base part. All of the components need to be linked up in some way to ensure that there is only one 'origin' piece that they are all connected to, otherwise an error will be created when you try to load the file.

![joint](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Joint1.png)
![joint](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Joint2.png)
![joint](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/joint3.png)

Once all of the parts and the joints had been described in the urdf file, they could be loaded onto rviz's 'robot description' feature, along side the robot_state_publisher and joint_state_publishers to allow the model and joints to be mapped correctly, and to also give slider bars so that the joints could be controlled. 

![rviz](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/rviz.png)

After some adjustments the model looked and behaved how we hoped it would, with the correct three degrees of freedom allowing the arm to rotate, and allowing the two sections of the arm to bend correctly. 

Once this model was created in rviz we moved onto using the joint_state_publisher along side the arduino program to move the real arm.

![Arduino code](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/Code.png)

The top part of the code defines the servos that are going to be used in the arm. Since there are only going to be two and a stepper motor, there are only two defined. This version of the code currently does not run the stepper motor. 

The void cb code checks the "joint_states" within the JointState program that it is subscribed to. It reads the second and third parts of the joint_states array to read the values being outputted by the joints_states gui, which is then converted from radiaans into degrees, and then written onto each of the servos. 

The setup portion of the code is just initilising the nodes and subscriber functions, as well as attaching the two servo motors to their respective pins. 

Once this code was programmed onto the arm, we were able to move the servos using the joint_states gui sliders. The movement of the servos wasnt as smooth as we were expecting, but the servos in the arms had plenty of torque to be able to lift and move the arms easily. 

![Arm Moving](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Videos/Arm_Moving.gif)

