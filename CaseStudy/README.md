# Fire Monitoring System
The below block diagram has the major parts for Fire Monitoring System

![Block diagram (2)](https://user-images.githubusercontent.com/98872208/154792550-8c96514c-1270-48e9-8bfe-cb12403a482a.png)

## Component

## PowerSupply:

   * power supply is used to provide voltage to components.

## Sensors:

  * Sensor used to convert the physical quantity(like smoke,temprature) to voltage and current.

  * Smoke sensor MQ2-It can detect flammable gas.It's most common use is domestic gas leakage alarms and detectors with a high sensitivity to propane and smoke.
  * If smoke is detected, then smoke sensor give signal to the ADC.
 
  * Temprature Sensor LM35 -The LM35 is one kind of commonly used temperature sensor that can be used to measure temperature with an electrical o/p comparative to the               temperature (in °C). It can measure temperature more correctly compare with a thermistor.
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
