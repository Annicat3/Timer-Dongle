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
