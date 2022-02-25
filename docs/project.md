---
layout: default
---

# Final Project

After almost 2 terms of learning various skills ranging from lasercutting to embedded programming, we were tasked to take on a final project. In this final project, we are to integrate 3D printing, CAD software skills and lasercutting with electronics to create a simple project. This project requires a certain level of planning and fabrication too. We are only given 3 weeks thus I went on for a simple idea. Read to find out more about my final project!

## My Sisyphean Machine
![](images/fp61.png){: width="60%"}

## More about it!
[![project](https://res.cloudinary.com/marcomontalbano/image/upload/v1645796786/video_to_markdown/images/youtube--RdYttOksUaA-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=RdYttOksUaA "project")

### What does it mean?
Well the word Sisyphean is just a synonym for the word useless. I chose this because I'm going to be making a useless machine! More importantly, it relates to a task not being completed.

### What does it do?
As mentioned earlier on, I will be making a useless machine. The machine comes with a switch for the user to toggle with. However, when the user turns on/ flicks the switch, an arm within the box will pop up and will flick the switch to its original position. The machines’ main purpose is to make the user’s input futile.

### What are it's features?
The Sisyphean machine uses a servo to open the lid and turn off the switch using an arm. The machine also has certain randomized behaviors to make it interesting. It behaves by turning off the switch with emotions like anger and curiosity. This is enabled by programming a randomized movement on Arduino.

### What will I make?
<!-- CSS Code: Place this code in the document's head (between the 'head' tags) -->
<style>
table.GeneratedTable {
  width: 100%;
  background-color: #ffffff;
  border-collapse: collapse;
  border-width: 2px;
  border-color: #736576;
  border-style: solid;
  color: #000000;
}

table.GeneratedTable td, table.GeneratedTable th {
  border-width: 2px;
  border-color: #736576;
  border-style: solid;
  padding: 3px;
}

table.GeneratedTable thead {
  background-color: #ae49bc;
}
</style>

<!-- HTML Code: Place this code in the document's body (between the 'body' tags) where the table should appear -->
<table class="GeneratedTable">
  <thead>
    <tr>
      <th>Process</th>
      <th>Features</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>CAD Design, Graphics</td>
      <td>I will be designing the housing to hold the components and the arm. I will also design the lid and arm to flick the switch.</td>
    </tr>
    <tr>
      <td>Laser cutting</td>
      <td>I will be laser cutting the walls, lid and base of the machine.</td>
    </tr>
    <tr>
      <td>3D Printing</td>
      <td>I will be 3D printing the arm to flick the switch. ( I might 3D print the case/housing for the battery and servos)</td>
    </tr>
    <tr>
      <td>Micro-controller</td>
      <td>Arduino Nano</td>
    </tr>
    <tr>
      <td>Input devices</td>
      <td>Switch and USB port</td>
    </tr>
    <tr>
      <td>Output devices</td>
      <td>Servos</td>
    </tr>
  </tbody>
</table>
<!-- Codes by Quackit.com -->

### Bill of materials
<!-- CSS Code: Place this code in the document's head (between the 'head' tags) -->
<style>
table.GeneratedTable {
  width: 100%;
  background-color: #ffffff;
  border-collapse: collapse;
  border-width: 2px;
  border-color: #494e32;
  border-style: solid;
  color: #000000;
}

table.GeneratedTable td, table.GeneratedTable th {
  border-width: 2px;
  border-color: #494e32;
  border-style: solid;
  padding: 3px;
}

table.GeneratedTable thead {
  background-color: #ade774;
}
</style>

<!-- HTML Code: Place this code in the document's body (between the 'body' tags) where the table should appear -->
<table class="GeneratedTable">
  <thead>
    <tr>
      <th>Sn.</th>
      <th>Qty</th>
      <th>Item Description</th>
      <th>Approx Cost</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>1</td>
      <td>2</td>
      <td>Micro-Servo( 180 degrees)</td>
      <td>$5.92/pc</td>
    </tr>
    <tr>
      <td>2</td>
      <td>1</td>
      <td>Arduino Nano</td>
      <td>Fablab</td>
    </tr>
    <tr>
      <td>3</td>
      <td>1</td>
      <td>SPDT Switch</td>
      <td>$0.90/pc</td>
    </tr>
    <tr>
      <td>4</td>
      <td>1</td>
      <td>On/Off( SPST ) Rocker switch</td>
      <td>$2.06</td>
    </tr>
  </tbody>
</table>
<!-- Codes by Quackit.com -->
#### Links to Parts
* [Micro-Servo( 180 degrees)](https://sg.element14.com/mcm/83-17987/micro-servo-180-degree-for-arduinoraspberry/dp/2801406?st=micro%20servo)
* [SPDT Switch](https://robot-r-us.com.sg/p/toggle-switch-3-pin-spdt-2a-250vac)
* [On/Off( SPST ) Rocker switch](https://sg.element14.com/alcoswitch-te-connectivity/prasa1-16f-bb0bw/switch-spst-16a-125vac-black/dp/4710368?st=spst%20switch)

#### References
* [Useless Machine](https://www.instructables.com/Arduino-Most-Useless-Machine-Ever-project/)

## Design sketches
* I made a rough design of how the machine will work.
* Below are the isometric and sectional views of the sketches.

### Isometric views
![](images/section.jpeg){: width="30%"}
* The isometric view shows how the box looks like in 3D view.
* You can see the appendix on the image provided to see the relevant parts associated.
* I want the box to be about 25 * 15 * 10 (in cm)
### Sectional view
![](images/iso.jpeg){: width="30%"}
* In this sectional view, you can notice how the parts are aligned
* Do note that the second servo will be place horizontally using a mount on the vertical edge of the wall.
* Arduino Uno along with its mini breadboard will be placed on the base of the box and requires no mounts as it lays down flat.

## 3D CAD. How to do?

### Full sized model
![](images/fp1.png){: width="50%"}
* This is how the 3D model looks like. I have made some changes from my sketch after some research and consideration
* The dimensions have been altered to 200 * 120 * 80 ( in mm )

### Parameters
![](images/fp2.png){: width="50%"}
* We will be using parametric modelling which is what we learned in our lasercutting section.
* Just a recap- parametric modelling refers to making a model on existing parameters that makes changes easier in the future( my simple explanantion).
* I have changed parameters to the above mentioned dimensions.
* We have length, width, thickness and height. Somethign new is the nseg. It refers to the number of teeth wer prefer to have on all sides of the box. ( remember it has to be a odd number )

### Designing the body
![](images/fp3.png){: width="45%"}
* We start off by creating the base. Use fixed parameters by clicking tab and instead of 200mm just type length. This is how parametric modelling is done.
* Once you are done with the sketch, exit and extrude to 3mm as the wood we are lasercutting with is 3mm.

![](images/fp4.png){: width="45%"}
* Next up we can go on to the walls. Create a wall with fixed paramaters according to the length and height mentioned in parameters.
* Remember to design your teeth on the bottom end of the 3mm of the lenght base.
* Create it using the nseg by creating 11 equidistant rectangles in the length. Used nseg for this ( nseg/length)- hint ( for distance )
* Extrude the wall and do not forget to extrude the teeth.

![](images/fp56.png){: width="55%"}
* You can now use the combine function using tool and object settings to attach the wall with teeth onto the base
* We have learnt this before, you can head onto the lasercutting site to get a recap.
* Use the copy function to copy the wall from one point to another.
* Remember to combine the wall to the base again.

![](images/fp78.png){: width="55%"}
* Now we can sketch the side wall along the width of the box
* Design the teeth on the box using nseg
* Extrude the box with the 11 teeth you have made to distance of 3mm or thk for parametric modelling purposes.
* Use combine function to combine it to the 2 wall as the tool and combine it to the base.
* Use the copy function to make a copy of it to the other side of the box and repeat the combine function again!

![](images/fp910.png){: width="55%"}
* Now we can design the lid. I have design the lid in such a way that its only 1/3 of the lenght
* You can use parametric modelling at adjust the length of the lid to third of the length
* Make the teeth now all on 3 sides of the 1st lid so that it can fit Well
* Extrude the lid with its teeth and combine it to the 3 walls.

![](images/fp1112.png){: width="55%"}
* Now make the movable part of the lid, the door.
* As we have mentioned earlier on , the first part is 1/3 so this will be 2/3 of 200mm. Dimension it using parametric modelling
* This doesnt require any teeth as it will be a moving part
* You have to make 2 pivots on the ends of the lid so that it can pivot on it without falling!
* Extrude it 3mm down depending on the plane you have chosen to start your sketch.

![](images/fp1314.png){: width="55%"}
* We have created 2 pivots earlier on but there is no mount/ something to house the pivots
* We shall make a slightly larger hole so that the square pivot can move about freely
* Extrude the mount and make a hole to house the pivots
* Copy the design over to the other side and join it or repeat the same sketch.

![](images/fp1516.png){: width="55%"}
* We have to mount the toggle switch so lets a make a hole for it
* I found some dimeensions from the datasheet provided for the toggle switch i am using.
* I made a point in the centre of the box about more tha halfway from the length of the lid.
* Use the hole function to make a 7mm hole that is 3mm deep to make it a through hole

![](images/fp171819.png){: width="55%"}
* Now we make 2 holes. They are both identical
* We need 2 holes for the rocker switch to turn off and on the power supply. Another hole for power supply by the barrel jack to arduino uno.
* From my measurements both the hole for the rocker switch and the hole for the arduino uno dc power supply is the same
* I initially designed a rectangle for the rocker switch but decided to use a circular rocker switch because that it what Mr Rodney provided me with.
* Thus the hole of same diameter is made in the centre of the rectangle and another point is made beneath it.
* Extrude the first hole using cut function and use the hole function to make a flat hole through the 3mm for the second point.

### Final 3D model
![](images/fp1.png){: width="50%"}
* You should have this by the end of the 3d modelling. You cant tweak it to whatever shape or size you want as we have now used Parametric modelling.
* You can download the fusion360 file of this CAD model through this [link](https://a360.co/3uTnZHk). Alternatively, you can check out the 3D view below.
* We now head onto the 3d printed parts.
<iframe src="https://a360.co/3uTnZHk" width="700" height="800" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## 3D Printed Parts
* I had to design the servo arm, servo arm for door and 2 servo mounts.
* Below i will show you how it was done!

### Servo arm lid
![](images/fp31.jpg){: width="40%"}
* I used a online CAD model for the [servo horn](https://grabcad.com/library/micro-servo-arm-1) so I can directly attach it to the servo motor.
* I created a rectangular feature around it and extruded it.
* Later on i extended it by another 20mm to fit according to my box.
* Lastly, I made a L shaped extrusion up the arm and made a rectangular feature to push the button on toggle switch.

![](images/fp30.png){: width="25%"}
* You should have this servo arm if you followed the steps above :)
* We will slice it for 3d printing later :)
* You can download the 3D model from [here](https://a360.co/3gTjAvB)

### Servo arm
![](images/fp32.png){: width="25%"}
* This servo arm is similar to the servo arm lid.
* I referenced it from a [cad model](https://grabcad.com/library/micro-servo-arm-1) of the servo horn
* I adjusted the height to 12mm instead and the length to 85mm.
* Last adjustment was the height of the arm to push button- 45mm from origin( from 0 point base )
* You can download the 3D model from [here](https://a360.co/3gYDTbf).

### Servo mount 1
![](images/fp25.jpg){: width="50%"}
* I have dimensioned the mount according to the SG90 9g servo.
* Dimensions can be found online on [google images](https://image.dfrobot.com/image/data/SER0043/84.jpg)
* We first make a rectangle with a rectangular hole to mount the servo.
* Extrude it by 3mm and make another rectangle to extrude so that we can make it longer than the servo to let it lay flat.
* We make another rectangle on the end of the length and extrude it up to form a L bracket.
* Include holes of 2mm on the rectangular hole to mount the servos
* Iclude 3.2mm hole to screw in the mount to the wood of 3mm.

![](images/fp20.png){: width="30%"}
* You should have this servo mount for 1 servo, servo door.
* We can slice it later on to print it.
* You can download the 3D model from [here](https://a360.co/3LIpb6k).

### Servo mount 2
![](images/fp26.png){: width="30%"}
* This is the .stl file view of the mount in fusion.
* This servo mount is similiar to the first. It just doesnt have a L bracket to mount on walls
* We will instead put 2 3.2mm holes on the base so that we can screw it flat onto the base of the box.
* Follow the steps in servo mount 1 and design in a way that suits your design the best.

### Settings
![](images/fp51.gif){: width="45%"}
* Go to export of your CAD model required to 3D print> Export as STL ( for 3d printing )
* I have used the [Ultimaker Cura](https://ultimaker.com/software/ultimaker-cura) to slice my STL files generated from our 3D CAD model.
* Creality CR 10-s is used as preset for the 3D printers on the software.
* Use Custom in Printer Settings and set Quality: 0.28mm.
* These are the settings used for printing the mounts and the arm.
* I used a print speed of 60 with 60% infill density.
* Support was required for the mount but the rest did not require and thus I used skirt instead.
* Other values were set to default.

### Slicing the Parts
![](images/fp34.png){: width="50%"}
* The parts have been sliced and I have used similar settings as the one I used in the Knight Chess piece.
* Place the parts flat on the bed of the software using the move and rotate features found on the left drop-down menu bar.
* Make sure you give enough space between parts, but not too much space as your printer will have travel more on the different axis to eject filament.
* Total time can be generated by slicing the parts but for me, it took about almost 3 hours as I printed this on 2 separate occasions.

### Booking 3D printer
![](images/fp35.png){: width="40%"}
* I then booked a 3D printer on T14 and printed it given in the stipulated time.
* Print quality was good and parts came out well after waiting for the heating bed to cool down.

### Final outcome
![](images/fp33.jpg){: width="60%"}
* From the above 3D model CAD and Cura settings, I printed these 3 essential parts for my project.
* Mounts printed with support to prevent overhang. NO support required for the arm as its a flat and straight object.
* These parts that were printed at 0.28mm quality came out good.
* No troubles encountered prior to printing or after( when removing the parts from heating bed )

## Laser cutting

### Export your sketches
![](images/fp54.png){: width="40%"}
* First create a sketch on each of the side by clicking on it and create sketch in fusion.
* Right click on the empty sketch you have just created and export to dxf.
* It should take a while but now its done and you can import in your CorelDraw and start cutting.

### Booking laser cutter
![](images/fp38.png){: width="40%"}
* I booked a lasercutter to cut out all the dxf files I have exported from fusion.
* All the parts were cut in T1442 lasercutter on a 3mm wood.
* Time took about 30min from setting up to inmporting files and cutting it.
* I missed out 1 piece which was the lid and thus took an extra 5min to cut.

### Settings
![](images/fp53.png){: width="50%"}
* The above settings are callibrated for the Lasercutter used in T1442
* After importing your file, we have to change the outlines to red hairline for cut. All the lines of the parts are changed to RGB 255,0,0 (Red) for cutting and hairline thickness.
* Once done, Ctrl+P is used to bring up the printer settings and print is selected to send the drawings to the lasercutting software.
* Choose the 3mm plywood board ( for my box anyways ). Click on the green engrave.las file
* Place your part and adjust the pointer to a free space on the wooden board.
* You can then move your parts on the software to the pointer using " move to pointer".
* Make sure the board isn't wobbly. If all is set, you are ready to cut. Just click the start button!

### Parts
![](images/fp37.png){: width="40%"}
* The parts were cut and I decided to superglue the sides as a short term solutions.
* I decided to use wood glue once I headed home to join the parts with a stronger bonding agent. You can use any of the 2, they both work fine.

![](images/fp52.jpeg){: width="40%"}
* Above are the parts I have cut.
* We Have a total of 7 pieces with 1 of it being a movable one.
* The pieces are as follows; 2 walls, 2 short walls, base, movable lid and stationery lid.
* The 2 circular pieces were obtained from making holes in the wall for the switch. I intend to use this as my stopper for both ends of the lid so that they dont fall right through.

### Laser cutter in action!
![](images/fp36.gif){: width="40%"}
* I used the Laser cutter in T1442 to cut the pieces shown above.
* You can callibrate your cutter to similar settings or to whichever best suits your situation.
* Close the lid and click enter to initiate cutting sequence. No engraving required as no designs were involved.
* Remember to be safe around the laser cutting machine and once your piece is cut, open the lid and shake your piece out.
* Do not forget to place your leftover wood in the pile of used pieces for others to salvage from!

<a href="Downloads.7z" download="dxf">
  <img src="images/fp1.png" alt="model" width="200" height="200">
</a>
* You can  download the .dxf files required for this project from the link above by clicking on the image. Its a zip file so unzip it !

## Electronics

### Components required
![](images/fp42.jpeg){: width="40%"}
1. SG90 9G servo x2
2. 1 toggle switch ( SPDT)
3. 1 Rocker switch ( on/off)
4. Resistor
5. Jumper wires :)
6. Mini Breadboard
7. External Power Supply( If needed )
8. Superglue/Woodglue

### Schematic and simulation
![](images/fp41.png){: width="50%"}
* On your servo, there are 3 wires. The brown wire goes to Ground and the wire next to it goes to Vcc/5v. The last wire goes to your digitalpin to recieve signals.
* I have connect 5v and Ground to the respective rails on the breadboard.
* Connect your servo that controls the door to pin 9 and the other 2 wires to 5v and Ground.
* Same goes for your servo to turn off switch. But connect the 3rd wire to pin 10.
* We only need 2 states in this SPDT switch. The middle pin goes to 5V.
* Connect a resistor across the 3rd pin of the switch. The other end of the resistor is connected to Ground.
* The resistor end that it connected to the 3rd pin must also have a connection to pin2. That should be it!

![](images/fp40.gif){: width="50%"}
* This is the simulation of the servos. Do note that tinkercad uses 180 degree servos instead continous rotation 360.
* The door is callibrated to move to it test position whenever the program starts.
* When the switch is pressed, it makes the servo door turn from a specified degree to another position. ( we will talk about this in the coding portion )
* AFter the door servo does its rotation, the arm servo turns to a certain degree( TWEAK according to your box, everyones positions varies ).
* There are different cases in this useless machine where it "behaves" differently.
* You can download or tinker with the tinkercad file through [here](https://www.tinkercad.com/things/h3ESu6dquIS)

## Coding
* There are few different cases/moves that I have tweaked to my liking. This code is referenced from a fellow [instructable user](https://www.instructables.com/How-to-build-another-useless-machine-easy-to-make-/)
* I used the code to figure out the exact positions of the servos when they are hiding and when they are in action.
* Please try out the code and test the exact positions to get the right ones for yourself.

### Transferring to Arduino Nano
![](images/fp72.png){: width="30%"}
* If you intend to use a Nano instead, please change the board used in Arduino so that you can compile and upload.
* Head onto tools > board > change from Arduino Uno to Arduino Nano.
* If this isn't done, the software cannot compile and send to the nano as it not is recognised in the device( laptop/computer ).

### Initialization
![](images/fp44.png){: width="50%"}
* We will be using the servo.h libary for this code.
* Start off by initialising the library and the 2 different servos we are using. Give them names.
* Assign int pin to pin 2 as per our connection
* Set the int pos to 0 and selectedmove to 0 for count in if else statement.
* Lastly set testmove to 0 as this will intitialise the start of our code when it runs.

### Void setup
![](images/fp45.png){: width="50%"}
* By using pinmode function, set the switch to an input to recieve inputs.
* The next following lines are fron the servo.h libary.
* Servo.attach() is used to assign the pins that the servos are connected.
* We have named at the start to intialise the servos. Use these names and servo.attach.
* Servo.write is used to assign their intitial positions. Change them according to your box avia test and trial.

### Void loop
![](images/fp46.png){: width="50%"}
* The loop uses if else statements to toggle between different states.
* By using a count system, whenever switch is pressed, different moves are toggled between
* The total moves have been capped at 10 but you can alter it to whatever you want.
* I have 4 different moves that i tweaked to my preferences. Each has its own void.
* Assign each void move to a count for if else statement.

### Move 1 Logic
![](images/fp47.png){: width="50%"}
* I found out that the hiding position for the door is at 10 and I want to move it up to 60 degrees.
* We use a for loop to increase the degrees in increments of 3.
* In the loop, the first part is start position; second is final position; lastly the increment count.
* You can use the Servo.write function to simplify your code and make the servo turn according to the pos you have set in the for loop.
* Do the same for the arm servo.
* You can use the for loop again to make it go back to its original position as you can see above. Remember to change the increment to a negative instead of positive or it wont work.
* Lastly, do not forget delay in between each rotation of servo.

### Example of move 2
![](images/fp48.png){: width="50%"}
* The previous move was just a normal move where it turns on and off
* I want to give it a little bit of a "behavior". Lets make things slow!
* You can employ the same logic from the previous example.
* However, remember to decrease the increment. This makes thing move slow ( degrees increase slowly =  servo rotate slowly )
* Tweak and test out and see what you like. Make sure the useless machine works the way you like it to

### How it works in real life
![](images/fp39.jpg){: width="40%"}
* This is how it looks like in real life.
* I decided to use a normal slide switch for testing purposes as it is small and serves the same purpose in the breadbaord.
* All the 5v and ground for servos and switch have been connected to their respective rails in the front of the breadboard.
* I used my own Arduino Uno as the given Uno is unrecognisable in the computer ports.

![](images/fp43.gif){: width="25%"}
* This is how it works in real life.
* You can notice the different cases it goes through.
* Whenever I slide the slide switch, the door servo is actuated then the arm servo is actuated.
* Once the switch is closed, it returns back to its original position.
* The different cases are seen where it after a certain number of times pressing the switch, it behaves fast and slow and etc.

### Working Code test
![](images/fp49.gif){: width="30%"}
* This is the code test in real life without the switch.
* We observe how the arm interacts with the box.
* This was the prototyping stage where I was testing the servo positions and the moves I like.
* Do not mount your servos yet, you might face problems on where it is positioned and you dont want to pull it off and cause damage to your box.
* Use this as an opportunity to tweak the code to position you servo and make it good!

### My code
<a href="puvie-code.zip" download="code-zip">
  <img src="images/fp63.png" alt="model" width="200" height="200">
</a>
* This is my code that I have used for My Sisyphean Machine. Click on the arduino image to download the file.
* I have explained the code above and refer to that if you have any problems!
* Remember to tweak the servo positions to however you like.
* The above code I have provided consists of 4 different moves.
* You can add any move ontop of this code. Just include the name of this move as a void in the Initialisation.
* Include it as a count in our if else statement as one of the moves to display when a certain count in reached.
* Create a void and include the move with the positions for your servo in your useless box.
* Happy coding!

## Assembly

### Main Housing
![](images/fp59.gif){: width=45%"}
* This is the assembly video of all the laser cut components.
* As you can see I used superglue as I didnt have woodglue for the wooden corners.
* I also didnt have a hot glue gun which I believe would be an alternative to superglue for joints.
* I first installed the walls to the base and lastly the not movable lid. I let the lid be the last to put as I needed space to put the components in first.
* It is sped up so you wont be wasting your time!

### Adding the switch
![](images/fp66.png){: width="30%"}
* After assembling the main housing, we can add in the switch and hook it up to our breadboard.
* I screwed the switch onto the hole. This is using the updated slide switch instead of toggle switch based on problems faced in the next sections.
* I used jumper wires to hook up the 2/3 terminals of the switch to the breadboard. 1 to 5v and 1 to pin2
* It is better to solder then hooking the jumper wires like the way I did.

### Mounting the servos.
![](images/fp68.png){: width="30%"}
* I first superglued the door servo mount onto the far top right of the box( close to the pivot of the lid )
* This was the best spot for my door servo to move and it was right for the 0 degree position of the servo.
* I later proceeded to mount the main servo mount in the left of the box.
* I couldn't mount on the right( logical as mounting on right will not intefere the door servo).
* This was because the servo horn was already fixed onto the servo. Swapping to right would mean change of direcction which the practically is impossible once position is fixed.
* Please give some space between the door servo and main servo or they might clash when they both return back( if your move does that )

### UNO, breadboard & wiring
![](images/fp70.jpeg){: width="30%"}
* I lastly added the breadboard underneath the lid that holds the switch.
* Since there was space constraint, the UNO had to placed vertically as if it was placed horizontally it hits the servo arm and prevents it from moving.
* The wires were all scattered all over the place > so I used double-sided tape to position the wires to the wall.
* However, the tape gave away. Thus i resorted to a **temporary** solution which was to use normal clear scotch-tape.
* I first bundled the wires seperately using tape. Then, taped the wire bundled together to the wall.

## Problems faced

### 1.Not enough surface area
* The servo arm was long enough but the feature that helps push the switch was extruded up.
* Since it extruded up, it couldn't cover any area below which might also be a reason for not turning off the switch.
* Even after changing to a slide switch from a toggle switch, the torque was sufficient but surface area covered wasn't enough.

### 2.Insufficient torque
![](images/fp50.gif){: width="25%"}
* Not enough torque was produced by the micro servo.
* The arm length was a bit too long to produce enough moment and torque to turn off the switch.
* Even with increased speed or change in micro servo, there was no difference.
* Furthermore, because of this stoppage, it caused the servo to heat up as it coudln't handle it.

### 3.Weak mount
![](images/fp57.jpeg){: width="20%"}
* The mount for the door servo was wobbly.
* It didn't have enough support and it gave away at times.
* Since it was weak, the servo tend to droop down affecting the position of the arm and the degree it turns. Which has to be changed via code.
* A better way to design this would be to use 90 degrees down extrude or a Rib/web.

## Troubleshooting

### 1. Torque fixed
![](images/fp58.gif){: width="20%"}
* The toggle switch was tight.
* Even after oiling it, it wasn't smooth.
* I switched to a slide switch. It is much smoother and easier to push.
* Did not have to make much changes. I only had design 1 part and laser cut it. Instead of a hole, I changed it to a 11mm by 6mm rectangle to screw the switch.

### 2. Stronger mount
![](images/fp55.jpeg){: width="25%"}
* I extruded the L bracket down to create even more support.
* Only issue that I faced was requiring more support than the previous mount.
* Luckily, support came off easily and the mount is much stronger and can support high torque and force from servo to door.

### 3. Arm Feature
![](images/fp56.jpeg){: width="25%"}
* I had a rectangular extrude 3D printed to add onto the existing arm.
* Instead of wasting filament, I used an attachment which helped to push the switch further.
* However, when removing the rectangular piece, the edges were still hot and got stuck to some other component
* Thus when forced to remove the edges got roughed up. ( Please dont do this mistake)
* Did not waste parts and time :)

### 4. Arduino Uno support
![](images/fp65.jpeg){: width="30%"}
* The UNO is positioned upright due to space constraint. However, this results in a problem where this can potentially topple over.
* If the UNO were to topple over, it can hit the arm and might affect the positioning of the servo arm.
* Thus, a rectangular piece was extruded to act as a wall in between the UNO and the arm.
* This furthermore acts as a support for the UNO and prevents it from toppling over.
* Please note that this is a **temporary** solution. This was implemented due to the short time frame. I would advice to position the UNO laying flat or create a housing.

## Working model
![](images/fp60.gif){: width="20%"}

## Improvements
* Even though I am quite satisfied with the outcome of my project, there are still some improvements that could be made to the project:

### 1. Arduino to be mounted on a more practical way.
* The UNO has been supported using a "makeshift" wall that has been 3D printed.
* This does not provide full support.
* The uno should be layed down flat on the board with a proper mount.
* I believe with a good UNO casing 3D CAD design, this problem can be fixed easily and will not cause much harm to the servo arms movement.

### 2. Housing could be made much smaller. Alot of wasted space.
![](images/fp67.jpeg){: width="30%"}
* As you can see from the above picture, there is alot of space wasted.
* I believe the box can be cut down by 1/3 in length.
* This will not only help keep everything compact but also help with the torque issue with the servo arm( if u reduce the length to compensate )
* There is no electronics or wirings that are fully stashed behind, so this wasted space is really of no use.
* I would rather reduce the length or try to reposition the components to fill up the space.

### 3. Servo arms with better support to servo horn.
![](images/fp69.jpeg){: width="30%"}
* Since I did this project whilst sustaining an injury, I couldn't find appropriate materials and screws for the horn.
* The included screws could fit through the arm but couldn't be screwed onto the horn.
* Since the servo horn could not be screwed to the servo, I had to superglue the servo arm to the horn.
* This makes the arm feature loose in a sense.
* I would prefer to use the appropriate screw to screw the arm and horn together securely.

### 4. Soldering instead of jumper wires here and there.
![](images/fp71.jpeg){: width="30%"}
* I did not have a soldering iron at home nor the solder or the flux.
* Since this project was done fully at home, I couldnt solder the wires to the switches.
* This results in loose wiring and whenever the box moves a little bit too much, the wires can pop off.
* I believe, soldering the wires to relevant components will make life much easier as it reduces the risk of wires popping out.
