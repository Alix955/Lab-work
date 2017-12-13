# Practical Session 1

##Linux commands
cat - Retrieves files and displays information about them.
mv - Move file
rm - Remove file
echo "." - Copy text into this folder
cp - copy
ls - list
cd$ - current directory 

## What is Markdown Syntax?

Markdown syntax is markup language that uses a plain text format. It is easily converted into other text types such as HTML as it has no hidden characters, unlike other text programs such as Word.

A variety of different symbols can be used in the Markdown syntax, such as (#) which can be used to create headers, as seen above. The more of the symbol in sequence, the smaller the header will be.


## What can git be used for?

Git is an online program that can be used to create repositorys to store files and documents in. It is primarily used for versioning of code, as well as allowing multiple people to work on the code simultaneously with each one being able to push / pull the code to make their changes.

It can be easily accessed and interacted with using the Linux command console, using certain commands to log into your account and to push / pull changes to documents you have stored within repositorys there.



#Practical session 2
In this practical session we are beginning to create out basic motor. We are using a cork as the foundation of the motor, with copper wiring going around it for the coils. There is also a nail in either end to support the motor, and ensure it stays in its brackets. The brackets themselves are made out of large paperclips, as well as the brackets holding the magnets. I also used copper tape on the end of one side of the cork as a commutator, with a frayed multi core wire working as the brush to supply voltage. In total we had 116 coils around the motor, with 2 cores. 

![Given parts](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171005_113211.jpg)

![Stand assembled](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171005_120906.jpg)

![Coils around motor](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171005_122520.jpg)


Overall the motor did not work very well, this was largely due to there only being two coils. THis meant that there were large gaps between the coils, resulting in the motor struggling to keep its momentum going. As well as this the motor could not really start by itself, it needed something external, such as me starting the turning motion by hand. 

![Assembled motor](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171011_134358.jpg)

To improve my motor i am planning to completely redesign it using Solidworks. The designs for each piece can be seen below. I am going to have a bracket on either side of the motor to hold it up, as well as an upside down U shape bracket for the magnets. The magnets will be split into four to have two pulling and two pushing, instead of just having one pulling and one pushing.

![Solidworks design ready to be cut](https://github.com/Alix955/Lab-work/tree/master/Roco/Roco222/Images/IMG_20171019_120219.jpg)

![Cut out motor pieces](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171023_150711.jpg)

As well as this i plan on increasing the amount of cores on the motor itself from 2 cores up to 8. The motor itself will be solid wood as well, with indents cut into it to ensure the coils stay in place. This was a slight issue on the old design as the coils were very spread, with some almost coming off the sides of the motor. 

![First pieces assembled](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171026_114842.jpg)
![Wrapping the coils around the core](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171026_122245.jpg)
![All of the coils wrapped](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171026_130502.jpg)

!Images of built motor


#Practical 3
In this practical we refined our solidworks designs, and created an area on the motor for the encoder. I designed and cut out the encoder piece along with the other sections of the motor as it took a couple weeks to get all of the pieces complete due to the laser cutter being used by other courses for their deadlines. 

![Encoder cut out](https://github.com/Alix955/Lab-work/blob/master/Roco/Roco222/Images/IMG_20171023_150711.jpg)

#! Image of final motor + encoder

#Practical 4






#Practical 5
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

#!image of micro

#Practical 6
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

!Image of the cardboard cutouts

Finally once we were happy with the designs and measurements of the pieces, we began to design them in solidworks. Each piece was designed individually, with some adjustments made to compensate for the tolerances of the 3D printer. Some of the larger pieces had to be split up into smaller sections due to restrictions with the printers, such as not being able to print lips onto pieces without some kind of support on them. We decided to just seperate the pieces instead of adding supports, as there would be a lesser chance of damaging the final product when removing the supports. 

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

