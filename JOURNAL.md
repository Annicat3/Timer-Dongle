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
