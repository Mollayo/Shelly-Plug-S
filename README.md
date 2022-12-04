# Shelly-Plug-S

Custome firmware for the Shelly Plug S

This is a firmware for the Shelly Dimmer 2 (see https://kb.shelly.cloud/knowledge-base/shelly-plug-s/). This firmware has been developped with the following libraries:
- ESP8266TimerInterrupt 1.6.0: https://github.com/khoih-prog/ESP8266TimerInterrupt
- WifiManager
- pubsubclient: https://github.com/arendst/Tasmota/tree/development/lib/default/pubsubclient-2.8.13
- Arduino IDE 1.8.16

The board "Generic ESP8266 Module" should be selected when generating the compiled binary.

This firmware can be installed by connecting the Shelly device to a PC with an USB-to-UART adapter and flashing the firmware with the esptools. The firmware can be also flashed through the OTA (Over The Air) programming. This is done by first installing Tasmota on the device using the mgos-to-tasmota software (https://github.com/yaourdt/mgos-to-tasmota). Once Tasmota has been installed to the Shelly device, the firmware can be uploaded using the following gzip file https://github.com/Mollayo/Shelly-Plug-S/blob/main/shellyPlugS.ino.generic.bin.gz.



