## Timer-Dongle
My first PCB project idk  
[Total Hours]  


### August 26: Started the Timer-Dongle
*Time spent: 1.5 hours*  
Since I had never used KiCad or designed a PCB befor, I began by following the Dongle guide to learn the basics.
So far, I have started creating the schematic.
When I added the CH552G symbol library, I somehow deleted KiCad's built in symbol libraries. Suddenly, symbols like GND were missing, and the CH552G was basically the only thing that appeared when I seached for symbols. 
It took me a while to figure out what had happened, but I eventually restored the libraries and added the CH552G again.

Next, I want to add all the components I need for my own dongle to the schematic.
My current idea is to make a timer dongle with 6 LEDs and 2 buttons. One button will be used to select the timer lenght in 10-minute steps, from 10 to 60 minutes. 
The LEDs will show the selected time: for example, three LEDs could mean 30 minutes.When the timer is running, the LEDs will instead show roughly how much time is left.
The second button will start or pause the timer. I also want to add a piezo buzzer that makes a sound when the timer is finished. 
I think I have just enough free pins on the CH552G for all these components, but still need to plan exactly which pins to use.

 
### August 26: Finishing the schematic
*Time spent: 2 hours*  
I added the other components to the schematic. For the LEDs, I might have to check the resistor values again later, depending on which LEDs I end up choosing.
I also started looking for a piezo buzzer and found one that isn't too big. It's actually square, which surprised me because I had only seen round buzzers before!
I still have one free pin on the microcontroller in case I decided to add something else, like a small display. For now, though, I'm leaving it unused.  
After that I assigned the footprints. It took me a while to understand how the footprint assignment window works and where I was supposed to enter everything. i mostly used the footprints suggested in the guide, except for the buzzer. I might change some of the other components and footprints later once i choose the exact parts.  

<img src="https://github.com/user-attachments/assets/58e5e19e-f344-40d2-8b8e-42faf2d30571" />

Next, I'm going to start designing the actual PCB! I still have to decide on a shape for the board.

### August 27: PCB Design
*Time spent: 4 hours*  
I finally got to the exciting part: designing the actual PCB! I started by arranging all the components and experimenting with different shapes. 
After trying out a few ideas, I decided to make the PCB shaped like a cat! I think it looks really cute.

<img src="https://github.com/user-attachments/assets/4bd83e20-2e4c-420c-aa89-aa4b9ef2d278" />

Routing everything was definitely challenging, especially around the microcontroller wher there are lots of connections close together. 
I also drawed a cute, simple cat face to the empty space on the pcb and added a tiny HackClub flag.

Next, I have to write the BOM (I really don't know how to do that) and design a 3D Case.

### August 27: BOM and Onshape
*Time spent: 2 hours*
I worked on the Bill of Materials. This was a little more complicated than I excepted because I had to make sure that the parts actually matched my footprint, were available and could be ordered in the quantities I needed. I had to look at several different options for some components, especially the buttons and leds.

I also tried making a simple case for the PCB in Onshape. I had never really used Onshape before, so I had to experiment a bit. My original idea was to create a wall around the PCB and add a small overhang at the top to hold the PCB in place when the case was turned upside down. Unfortunately, I couldn't get the overhang to work the way I wanted.
It didn't turned out how I originally imagined it, but I still like it.
