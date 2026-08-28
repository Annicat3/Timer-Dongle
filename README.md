# Timer-Dongle
<img width="1600" height="900" alt="3D-Viewer" src="https://github.com/user-attachments/assets/198aa865-ad6b-4abd-abc2-192e2c5db38f" />  

## What is it?
This project is a small USB timer based on the CH552G microcontroller. It has 6 LEDs, a piezo buzzer and 2 buttons.  
The time can be selected in 10-minute steps, from 10 to 60 minutes. The LEDs show the selected time ans later show the progress of the timer. 
When the Timer finishes, the LEDs blink and the buzzer makes a sound.  

## Why did I make it?
I wanted to make something useful that I could actually use while working or studying. I also thought it would be fun to turn a simple electronic project into something with personality.  
Instead of using a normal rectangular PCB, I designed mine in the shape of a cat. I also added a small cat face and other details to the silkscreen.  

## How does it work?
1. Plug the timer into a USB port.
2. Press the time button to choose a time from 10 to 60 minutes.
3. Press the start button to start the timer.
4. The six LEDs slowly turn off as the timer runs.
5. When the timer reaches zero, the LEDs blink and the buzzer sounds.
6. Press the time button to stop the alarm and choose a new time.

## PCB  
I designed the schematic and PCB in KiCad.  

<img width="1254" height="928" alt="PCB" src="https://github.com/user-attachments/assets/e4781889-97f3-4d45-b299-6722d6c87a09" />   

### Schematic
<img width="1544" height="916" alt="Schematics" src="https://github.com/user-attachments/assets/ed7efaac-c5b3-4719-9e10-4f87a40d11d6" />  

### 3D View
<img width="1671" height="993" alt="3D-Viewer" src="https://github.com/user-attachments/assets/c35cde60-c479-46e0-b886-8d26e9d85ec0" />

## Firmware
The Firmware is written for the CH552G using CH55xduino. 

## CAD
I also experimented with designing a simple case for the PCB in Onshape.  
[Onshape link](https://cad.onshape.com/documents/177762d436c217a9aff06dc5/w/83f6144ef2d4be5b708dd7f0/e/6c6f59c3ce17ec4403d9fee3?renderMode=0&uiState=6a90b07a0fc47dc81437df1d)  

<img width="1163" height="810" alt="CAD-assembly" src="https://github.com/user-attachments/assets/21993e34-09c2-492b-8232-f7ca34f3e504" />


## Bill of Materials (BOM)
|Item    |  Qty | Cost | Link |
|--------|------|------|------|
|PCB |  | $22.02 | | |
|WCH CH552G Microcontroller | 1 | $ 0.75 | [LCSC C111292](https://www.lcsc.com/product-detail/Microcontrollers-MCU-MPU-SOC_WCH-Jiangsu-Qin-Heng-CH552G_C111292.html)|
| Murata GRM188R72A104KA35D, 100nF, 0603 | 2 | $ 0.18 | [LCSC C77058](https://www.lcsc.com/product-detail/C77058.html) |
| 470Ω resistor, 0603 | 6 | $ 0.60 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC0603FR-07470RL/727256)|
| 10kΩ resistor, 0603 | 3 | $ 0.30 | [DigiKey](https://www.digikey.de/en/products/detail/yageo/RC0603FR-0710KL/729827?utm.com) |
| XUNPU TS-1088-AC02016 tactile switch | 3 | $ 0.21 | [JLCPCB C720475](https://jlcpcb.com/partdetail/XUNPU-TS_1088AC02016/C720475) |
| Murata PKMCS0909E4000-R1 Piezo Buzzer | 1 | $ 1.02 | [LCSC C910763](https://lcsc.com/product-detail/Buzzers_Murata-Electronics-PKMCS0909E4000-R1_C910763.html) | 
| 0805 SMD LEDs | 6 | $ 2.43 | [LCSC C5879058](https://www.lcsc.com/product-detail/C5879058.html) |
| Shipping |  | ~ $ 35.00 | |
| Total |     | ~ §62.51 | |

## Hack Club Dongle YSWS
This Project was createdvas part of Hack Club's YSWS programm, [Dongle](https://dongle.hackclub.com). It was my first time designing a PCB and I learned a lot about schematics, PCB design, routing, and choosing components along the way.
