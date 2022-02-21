# Fire Monitoring System
The below block diagram has the major parts for Fire Monitoring System

![Block diagram (2)](https://user-images.githubusercontent.com/98872208/154792550-8c96514c-1270-48e9-8bfe-cb12403a482a.png)

# Component

## PowerSupply:

   * power supply is used to provide voltage to components.

## Sensors:

  * Sensor used to convert the physical quantity(like smoke,temprature) to voltage and current.

  * Smoke sensor MQ2-It can detect flammable gas.It's most common use is domestic gas leakage alarms and detectors with a high sensitivity to propane and smoke.
  * If smoke is detected, then smoke sensor give signal to the ADC.
 
  * Temperature Sensor LM35 -The LM35 is one kind of commonly used temperature sensor that can be used to measure temperature with an electrical o/p comparative to the               temperature (in °C). It can measure temperature more correctly compare with a thermistor.
  * The temp sensor LM35 sense the temprature if it exceeds the max temp level then it sends the signal to the ADC. If fire is detected, then fire sensor          gives signal       to the microcontroller.

## Analog to digital converter(ADC)

   * Analog to Digita Comparator is used to convert analog signal into digital form. We use ADC0808. ADC receive signal from temp sensor & smoke sensor & convert it into digital     form & this digital signal sends to the microcontroller.

## Microcontroller(8051):
  
  * Microcontroller-It are used in automatically controlled products and devices, such as automobile engine control systems, implantable medical devices, remote       controls,     office machines, appliances, power tools, toys and other embedded systems.
  * Microcontroller is the main control unit of project. Once microcontroller gets signal from sensors (via ADC), if fire is detected then it will immediately turn on the buzzer     &   send the signal to the GSM modem.

## Global system for mobile communication(GSM)modem:

   * GSMmodem:A GSM modem or GSM module is a hardware device that uses GSM mobile telephone technology to provide a data link to a remote network.GSM modems typically provide         TTL-   level serial interfaces to their host. They are usually used as part of an embedded system.
   * We used GSM modem for message sending. When microcontroller detects fire then it sends information to the GSM modem, then GSM modem sends this information via SMS. GSM          modem  is used to send the message to the fire stations well as to the responsible person.

## Liquid crystal display (LCD):

   * Display is used to display the system status.

## Buzzer:

  *  Buzzer is used for notification regarding fire detection. If fire is detecting, then microcontroller sends signal to the buzzer.
     Buzzer is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers include alarm devices.
     
     
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

 # Applications of Air Conditioning
 
* Used in offices, hotels, buses, cars.,etc

* Used in industries having tool room
machines.

* Used in textile industries to control
 moisture.
 
* Used in printing press.

* Used in Food industries, Chemical plants.



