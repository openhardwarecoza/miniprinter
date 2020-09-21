#define KNOWN_BOARD
#define CPU_ARCH ARCH_AVR
/*****************************************************************
* MiniPrinterv3 Pinout
******************************************************************/


#define SCK_PIN 52
#define MISO_PIN 50
#define MOSI_PIN 51


#define ORIG_X_STEP_PIN     62
#define ORIG_X_DIR_PIN      63
#define ORIG_X_MIN_PIN      -1
#define ORIG_X_MAX_PIN      -1
#define ORIG_X_ENABLE_PIN   61

#define ORIG_Y_STEP_PIN     59 
#define ORIG_Y_DIR_PIN      60
#define ORIG_Y_MIN_PIN      -1
#define ORIG_Y_MAX_PIN      -1
#define ORIG_Y_ENABLE_PIN   58

#define ORIG_Z_STEP_PIN     56
#define ORIG_Z_DIR_PIN      57
#define ORIG_Z_MIN_PIN      -1
#define ORIG_Z_MAX_PIN      -1
#define ORIG_Z_ENABLE_PIN   55

#define HEATER_0_PIN     65
#define TEMP_0_PIN       15 

#define HEATER_1_PIN     64 
#define TEMP_1_PIN       14 


#define ORIG_E0_STEP_PIN    5
#define ORIG_E0_DIR_PIN     4
#define ORIG_E0_ENABLE_PIN  2

//#define EXTENSION_BOARD_MS1 67
//#define EXTENSION_BOARD_MS2 68
//#define EXTENSION_BOARD_MS3 69
// 66 -> not connected
// 25 -> not connected
// To set microstepping on startup set START_GCODE to e.g.
// "M42 P67 S255\nM42 P68 S255\nM42 P69 S255"
#define SDSUPPORT      1
#define SDPOWER      -1
// 4,10,52 if using HW SPI.
#define SDSS        53
#define ORIG_SDCARDDETECT       -1
#define SDCARDDETECTINVERTED 0
#define LED_PIN      13
#define ORIG_FAN_PIN     67 
#define ORIG_FAN2_PIN           66 
#define ORIG_PS_ON_PIN          -1
#define KILL_PIN     -1
#define SUICIDE_PIN    -1  //PIN that has to be turned on right after start, to keep power flowing.
// 20 or 70
#define SDA_PIN         20    
// 21 or 71
#define SCL_PIN         21    
// Servo pins: 5,6 und 39
#define E0_PINS ORIG_E0_STEP_PIN,ORIG_E0_DIR_PIN,ORIG_E0_ENABLE_PIN,
//#define E1_PINS ORIG_E1_STEP_PIN,ORIG_E1_DIR_PIN,ORIG_E1_ENABLE_PIN,
//#define E2_PINS ORIG_E2_STEP_PIN,ORIG_E2_DIR_PIN,ORIG_E2_ENABLE_PIN,
//#define E3_PINS ORIG_E3_STEP_PIN,ORIG_E3_DIR_PIN,ORIG_E3_ENABLE_PIN,
//#define E4_PINS ORIG_E4_STEP_PIN,ORIG_E4_DIR_PIN,ORIG_E4_ENABLE_PIN,
//#define E5_PINS ORIG_E5_STEP_PIN,ORIG_E5_DIR_PIN,ORIG_E5_ENABLE_PIN,
#define TWI_CLOCK_FREQ          400000
// see eeprom device data sheet for the following values these are for 24xx256
#define EEPROM_SERIAL_ADDR      0x50   // 7 bit i2c address (without R/W bit)
#define EEPROM_PAGE_SIZE        64     // page write buffer size
#define EEPROM_PAGE_WRITE_TIME  7      // page write time in milliseconds (docs say 5ms but that is too short)
// specify size of eeprom address register
// TWI_MMR_IADRSZ_1_BYTE for 1 byte, or TWI_MMR_IADRSZ_2_BYTE for 2 byte
#define EEPROM_ADDRSZ_BYTES     TWI_MMR_IADRSZ_2_BYTE
#define EEPROM_AVAILABLE 1
