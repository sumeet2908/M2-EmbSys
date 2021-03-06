# Air conditioner

   The below block diagram has the major parts of air conditioner
   
  ![complex block diagram (3)](https://user-images.githubusercontent.com/98872208/154829472-c216efa3-4761-418e-a658-96841b676607.png)

   
# Component

## Power supply
   * power supply is used to provide voltage to components.

## Analog to digital(ADC)
   * Analog to Digital Comparator is used to convert analog signal into digital form.ADC receive signal & convert it into digital form & this digital signal sends to the              microcontroller.
## Relay
   * An air conditioner uses relays to switch the system's high-voltage parts on and off.
   
## Backlight
   * A backlight is a form of illumination used in liquid crystal displays (LCDs). Backlights are used in small displays to increase readability in low light conditions such         as in air conditioner display.
## LCD
   * A liquid-crystal display is a flat-panel display or other electronically modulated optical device that uses the light-modulating properties of liquid crystals combined with      polarizers.
## Buzzer
   * Buzzer is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short).
## Mechanical keypad   
   * To give input instruction to air conditioner.
     (i.e-lowering temprature,increasing temprature)  
## Temperature sensor
   * it is used to measure the temprature of system.
## IR reciever
   * It is hardware that sends information from an infrared remote control to another device by receiving and decoding signals. This code is then used in order to convert            signals from the remote control into a format that can be understood by the air conditioner.
## Buffer
   * A buffer tank is a storage tank used on the cold user side of an air-conditioning system.
## Comparator
   * A comparator is an electronic circuit, which compares the two inputs that are applied to it and produces an output.
## Gate driver
   * A gate driver is a power amplifier that accepts a low power input from a controller and produces the appropriate high current gate drive for a power device.
## Fan control
   * Fan control is the management of the rotational speed of an electric fan.


# Complex Embedded System

## High Level Requirements
|ID	 | Description                                            |
|:--:|:------------------------------------------------------:|
|HR01|It can be control using remote.                    | 
|HR02|It should always give fresh air                      | 
|HR03|It should always maintain proper room temperature      | 
|HR04|It should not make  noise.                              | 
|HR05|It should be easy to use by user            | 


## Low Level Requirements
|ID	 | Description                                            |	
|:--:|:------------------------------------------------------:|
|LR01|  Micro-controller controll speed of fan  According to the values
|LR02|	Micro-controller should give signal to  activate buzzer circuit            | 
|LR03|  Gate driven should control system.      
|LR04|  IR reciever should sense signal properly coming from remote signal.    
|LR05|	Display should show temperature when Micro-controller give signal.    


 # Applications of Air Conditioning
 
* Used in offices, hotels, buses, cars.,etc

* Used in industries having tool room
machines.

* Used in textile industries to control
 moisture.
 
* Used in printing press.

* Used in Food industries, Chemical plants.

