// Emulate Keys
uint8_t amcKey0[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x00 }; // Key 0 on Automower
uint8_t amcKey1[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x01 }; // Key 1 on Automower
uint8_t amcKey2[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x02 }; // Key 2 on Automower
uint8_t amcKey3[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x03 }; // Key 3 on Automower
uint8_t amcKey4[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x04 }; // Key 4 on Automower
uint8_t amcKey5[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x05 }; // Key 5 on Automower
uint8_t amcKey6[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x06 }; // Key 6 on Automower
uint8_t amcKey7[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x07 }; // Key 7 on Automower
uint8_t amcKey8[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x08 }; // Key 8 on Automower
uint8_t amcKey9[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x09 }; // Key 9 on Automower
uint8_t amcKeyProgA[5]                          = { 0x0F, 0x80, 0x5F, 0x00, 0x0A }; // Key Program A on Automower
uint8_t amcKeyProgB[5]                          = { 0x0F, 0x80, 0x5F, 0x00, 0x0B }; // Key Program B on Automower
uint8_t amcKeyProgC[5]                          = { 0x0F, 0x80, 0x5F, 0x00, 0x0C }; // Key Program C on Automower
uint8_t amcKeyHome[5]                           = { 0x0F, 0x80, 0x5F, 0x00, 0x0D }; // Key Home on Automower
uint8_t amcKeyManAuto[5]                        = { 0x0F, 0x80, 0x5F, 0x00, 0x0E }; // Key Man/Auto on Automower
uint8_t amcKeyC[5]                              = { 0x0F, 0x80, 0x5F, 0x00, 0x0F }; // Key C on Automower
uint8_t amcKeyUp[5]                             = { 0x0F, 0x80, 0x5F, 0x00, 0x10 }; // Key Up on Automower
uint8_t amcKeyDown[5]                           = { 0x0F, 0x80, 0x5F, 0x00, 0x11 }; // Key Down on Automower
uint8_t amcKeyYes[5]                            = { 0x0F, 0x80, 0x5F, 0x00, 0x12 }; // Key YES on Automower

// Set Modes
uint8_t amcModeManual[5]                        = { 0x0F, 0x81, 0x2C, 0x00, 0x00 }; // Activate Manual Mode
uint8_t amcModeAuto[5]                          = { 0x0F, 0x81, 0x2C, 0x00, 0x01 }; // Activate Auto Mode
uint8_t amcModeHome[5]                          = { 0x0F, 0x81, 0x2C, 0x00, 0x03 }; // Activate Home Mode
uint8_t amcModeDemo[5]                          = { 0x0F, 0x81, 0x2C, 0x00, 0x04 }; // Activate Demo Mode

// Activate or Deactivate Timer
uint8_t amcTimerActivate[5]                     = { 0x0F, 0xCA, 0x4E, 0x00, 0x00 }; // Activate timer
uint8_t amcTimerDeactivate[5]                   = { 0x0F, 0xCA, 0x4E, 0x00, 0x01 }; // Deactivate timer

// Get information from Automower
uint8_t amcGetMowingTime[5]                     = { 0x0F, 0x00, 0x38, 0x00, 0x00 }; // Request Mowing Time from Automower
uint8_t amcGetMowingStrength[5]                 = { 0x0F, 0x00, 0x4D, 0x00, 0x00 }; // Request Mowing strength, in rpm
uint8_t amcGetSquareModeProcent[5]              = { 0x0F, 0x01, 0x34, 0x00, 0x00 }; // Request Square Mode Procent from Automower
uint8_t amcGetSquareModeReference[5]            = { 0x0F, 0x01, 0x37, 0x00, 0x00 }; // Request Square Mode Reference from Automower
uint8_t amcGetSquareModeStatus[5]               = { 0x0F, 0x01, 0x38, 0x00, 0x00 }; // Request Square Mode Status from Automower
uint8_t amcGetBatteryCapacity[5]                = { 0x0F, 0x01, 0xEB, 0x00, 0x00 }; // Request Battery Capacity (mA) from Automower
uint8_t amcGetBatteryChargingTime[5]            = { 0x0F, 0x01, 0xEC, 0x00, 0x00 }; // Request Battery Charging Time (minutes) from Automower
uint8_t amcGetBatteryCapacitymAh[5]             = { 0x0F, 0x01, 0xEF, 0x00, 0x00 }; // Request Battery Capacity (mAh) from Automower
uint8_t amcGetBatterySeekStartCapacity[5]       = { 0x0F, 0x01, 0xF0, 0x00, 0x00 }; // Request Battery seek start Capacity (mAh) from Automower
uint8_t amcGetStatus[5]                         = { 0x0F, 0x01, 0xF1, 0x00, 0x00 }; // Request Status from Automower
uint8_t amcGetBatteryTemperature[5]             = { 0x0F, 0x02, 0x33, 0x00, 0x00 }; // Request Battery Temperature from Automower
uint8_t amcGetBatteryLastChargingTime[5]        = { 0x0F, 0x02, 0x34, 0x00, 0x00 }; // Request Battery Last Charging Time from Automower
uint8_t amcGetBatteryChargingTemperature[5]     = { 0x0F, 0x02, 0x35, 0x00, 0x00 }; // Request Battery Charging Temperature from Automower
uint8_t amcGetBatteryNextTemperatureReading[5]  = { 0x0F, 0x02, 0x36, 0x00, 0x00 }; // Request Battery Next Temperature Reading (in seconds) from Automower
uint8_t amcGetSpeedRight[5]                     = { 0x0F, 0x24, 0xBF, 0x00, 0x00 }; // Request Speed on Right wheel from Automower
uint8_t amcGetSpeedLeft[5]                      = { 0x0F, 0x24, 0xC0, 0x00, 0x00 }; // Request Speed on Left wheel from Automower
uint8_t amcGetBatteryCapacityUsed[5]            = { 0x0F, 0x2E, 0xE0, 0x00, 0x00 }; // Request Battery Capacity Used (mAh) from Automower
uint8_t amcGetSpeedKnife[5]                     = { 0x0F, 0x2E, 0xEA, 0x00, 0x00 }; // Request Speed of Knife engine from Automower
uint8_t amcGetBatteryVoltage[5]                 = { 0x0F, 0x2E, 0xF4, 0x00, 0x00 }; // Request Battery Voltage from Automower
uint8_t amcGetFirmwareVersion[5]                = { 0x0F, 0x33, 0x90, 0x00, 0x00 }; // Request Firmware Verson from Automower
uint8_t amcGetTimeSecond[5]                     = { 0x0F, 0x36, 0xB1, 0x00, 0x00 }; // Request current Second from Automower
uint8_t amcGetTimeMinute[5]                     = { 0x0F, 0x36, 0xB3, 0x00, 0x00 }; // Request current Minute from Automower
uint8_t amcGetTimeHour[5]                       = { 0x0F, 0x36, 0xB5, 0x00, 0x00 }; // Request current Hour from Automower
uint8_t amcGetDateDay[5]                        = { 0x0F, 0x36, 0xB7, 0x00, 0x00 }; // Request current Day from Automower
uint8_t amcGetDateMonth[5]                      = { 0x0F, 0x36, 0xB9, 0x00, 0x00 }; // Request current Month from Automower
uint8_t amcGetDateYear[5]                       = { 0x0F, 0x36, 0xBD, 0x00, 0x00 }; // Request current Year from Automower
uint8_t amcGetVoiceVersion[5]                   = { 0x0F, 0x3A, 0xC0, 0x00, 0x00 }; // Request Voice Verson from Automower
uint8_t amcGetWeekTimer1StartHour[5]            = { 0x0F, 0x4A, 0x38, 0x00, 0x00 }; // Request Week Timer1 Start Hour from Automower
uint8_t amcGetWeekTimer1StartMinute[5]          = { 0x0F, 0x4A, 0x39, 0x00, 0x00 }; // Request Week Timer1 Start Minute from Automower
uint8_t amcGetWeekTimer1StopHour[5]             = { 0x0F, 0x4A, 0x3A, 0x00, 0x00 }; // Request Week Timer1 Stop Hour from Automower
uint8_t amcGetWeekTimer1StopMinute[5]           = { 0x0F, 0x4A, 0x3B, 0x00, 0x00 }; // Request Week Timer1 Stop Minute from Automower
uint8_t amcGetWeekendTimer1StartHour[5]         = { 0x0F, 0x4A, 0x3C, 0x00, 0x00 }; // Request Weekend Timer1 Start Hour from Automower
uint8_t amcGetWeekendTimer1StartMinute[5]       = { 0x0F, 0x4A, 0x3D, 0x00, 0x00 }; // Request Weekend Timer1 Start Minute from Automower
uint8_t amcGetWeekendTimer1StopHour[5]          = { 0x0F, 0x4A, 0x3E, 0x00, 0x00 }; // Request Weekend Timer1 Stop Hour from Automower
uint8_t amcGetWeekendTimer1StopMinute[5]        = { 0x0F, 0x4A, 0x3F, 0x00, 0x00 }; // Request Weekend Timer1 Stop Minute from Automower
uint8_t amcGetWeekTimer2StartHour[5]            = { 0x0F, 0x4A, 0x40, 0x00, 0x00 }; // Request Week Timer2 Start Hour from Automower
uint8_t amcGetWeekTimer2StartMinute[5]          = { 0x0F, 0x4A, 0x41, 0x00, 0x00 }; // Request Week Timer2 Start Minute from Automower
uint8_t amcGetWeekTimer2StopHour[5]             = { 0x0F, 0x4A, 0x42, 0x00, 0x00 }; // Request Week Timer2 Stop Hour from Automower
uint8_t amcGetWeekTimer2StopMinute[5]           = { 0x0F, 0x4A, 0x43, 0x00, 0x00 }; // Request Week Timer2 Stop Minute from Automower
uint8_t amcGetWeekendTimer2StartHour[5]         = { 0x0F, 0x4A, 0x44, 0x00, 0x00 }; // Request Weekend Timer2 Start House from Automower
uint8_t amcGetWeekendTimer2StartMinute[5]       = { 0x0F, 0x4A, 0x45, 0x00, 0x00 }; // Request Weekend Timer2 Start Minute from Automower
uint8_t amcGetWeekendTimer2StopHour[5]          = { 0x0F, 0x4A, 0x46, 0x00, 0x00 }; // Request Weekend Timer2 Stop Hour from Automower
uint8_t amcGetWeekendTimer2StopMinute[5]        = { 0x0F, 0x4A, 0x47, 0x00, 0x00 }; // Request Weekend Timer2 Stop Minute from Automower
uint8_t amcGetTimerStatus[5]                    = { 0x0F, 0x4A, 0x4E, 0x00, 0x00 }; // Request Timer Status from Automower
uint8_t amcGetTimerDay[5]                       = { 0x0F, 0x4A, 0x50, 0x00, 0x00 }; // Request Timer Day from Automower
