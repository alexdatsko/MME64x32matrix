#include <gamma.h>
#include <RGBmatrixPanel.h>
//#define CLK  8   // USE THIS ON ADAFRUIT METRO M0, etc.
//#define CLK A4 // USE THIS ON METRO M4 (not M0)
#define CLK 11 // USE THIS ON ARDUINO MEGA
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

// Define some speeds to play with in ms
#define DSLOW 120
#define DMEDIUM 80
#define DRAPID 65
#define DFAST 40
#define DQUICK 30
#define DULTRA 21
#define DPICO 5
#define DNANO 2

// mega ready 
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false, 64);

void setup() {
  Serial.begin(115200); 
  matrix.begin();
  // draw some text!
  matrix.setTextSize(1);     // size 1 == 8 pixels high
  matrix.setTextWrap(false); // Don't wrap at end of line - will do ourselves

}
// Generated by   : ImageConverter 565 Online
// Generated from : mmelogo2.jpg
// Time generated : Sun, 13 Feb 22 04:30:39 +0100  (Server timezone: CET)
// Image Size     : 58x19 pixels
// Memory usage   : 2204 bytes


#if defined(__AVR__)
    #include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
    #define PROGMEM
#elif defined(__arm__)
    #define PROGMEM
#endif

const unsigned short surface[1102] PROGMEM={
0x20E3, 0x2903, 0x20C3, 0x2104, 0x20E3, 0x20E3, 0x20C3, 0x28E4, 0x20E3, 0x20C3, 0x2924, 0x20E3, 0x20C3, 0x2904, 0x20E3, 0x2103,   // 0x0010 (16) pixels
0x20E3, 0x20C3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x2903, 0x2103, 0x20E3, 0x2903, 0x20C3, 0x20E3, 0x2103, 0x20E3, 0x2103,   // 0x0020 (32) pixels
0x2904, 0x20E3, 0x20C3, 0x2103, 0x20E3, 0x2103, 0x20E3, 0x8C30, 0x9CD2, 0x9CD2, 0x9CD3, 0x9CD2, 0x9CD2, 0x9CB2, 0x9CD3, 0x94B2,   // 0x0030 (48) pixels
0x9CD2, 0x9CF3, 0x9CD2, 0x9CB2, 0x9CF3, 0x9491, 0x9CF3, 0x9CD2, 0x9CF3, 0x52AA, 0x20E3, 0x2903, 0x20C3, 0x2104, 0x20E3, 0x18C3,   // 0x0040 (64) pixels
0x2924, 0x18A3, 0x2104, 0x2924, 0x18A2, 0x20C3, 0x20C3, 0x2104, 0x2104, 0x18A2, 0x20E3, 0x2924, 0x18C2, 0x2103, 0x20E3, 0x2103,   // 0x0050 (80) pixels
0x2104, 0x18C3, 0x20C3, 0x2904, 0x18C3, 0x2904, 0x2904, 0x18C3, 0x20E3, 0x2103, 0x18C3, 0x20E3, 0x2104, 0x20E3, 0x20E3, 0x2103,   // 0x0060 (96) pixels
0x20E3, 0xDEBA, 0xFFFF, 0xF7BE, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFDF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,   // 0x0070 (112) pixels
0xFFFF, 0xFFFF, 0xFFBE, 0x9CD3, 0x20C3, 0x20C3, 0xB575, 0xCE38, 0xCE79, 0xCE59, 0xC5F7, 0xAD55, 0x20E4, 0x18C3, 0x2904, 0x2924,   // 0x0080 (128) pixels
0x2104, 0x18C3, 0x2104, 0x6B4D, 0xC638, 0xC638, 0xCE79, 0xCE79, 0xC638, 0xCE59, 0xCE59, 0x630C, 0x2104, 0x20C3, 0x20E3, 0x20E4,   // 0x0090 (144) pixels
0x18C3, 0x2104, 0x20E4, 0xAD34, 0xCE38, 0xCE59, 0xC5F8, 0xC618, 0xA4F4, 0x18E3, 0x2945, 0xD6BA, 0xFFFF, 0xAD54, 0x9CD2, 0x9CD2,   // 0x00A0 (160) pixels
0x9CB2, 0xA513, 0x9CF3, 0x94B2, 0x9CD3, 0x9CD3, 0x94B2, 0x9CB3, 0x9CD3, 0x9CD3, 0x9CB3, 0xAD55, 0xFFFF, 0x9CD3, 0x2104, 0x2104,   // 0x00B0 (176) pixels
0xDEFB, 0xFFFF, 0xFFFF, 0xFFDF, 0xFFFF, 0xFFBE, 0x738E, 0x2104, 0x2104, 0x18A3, 0x20E4, 0x20E3, 0x2104, 0xD6BA, 0xFFDF, 0xFFFF,   // 0x00C0 (192) pixels
0xFFFF, 0xFFDF, 0xFFFF, 0xFFFF, 0xFFFF, 0xD69A, 0x2924, 0x18C3, 0x2924, 0x20E4, 0x20E3, 0x20E3, 0x738E, 0xFFDF, 0xFFFF, 0xFFDF,   // 0x00D0 (208) pixels
0xFFFF, 0xFFFF, 0xD6BA, 0x18C3, 0x2124, 0xCE79, 0xFFFF, 0x5ACB, 0x18E3, 0x2104, 0x2924, 0x18E3, 0x2104, 0x2104, 0x2104, 0x2104,   // 0x00E0 (224) pixels
0x2104, 0x2104, 0x2104, 0x20E4, 0x20E4, 0x4A29, 0xF7BE, 0x9492, 0x18A2, 0x2924, 0xD69A, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,   // 0x00F0 (240) pixels
0xD6BB, 0x2125, 0x20E4, 0x20C3, 0x20C3, 0x2104, 0x9CD3, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFDF, 0xFFFF, 0xFFDF, 0xFFFF, 0xFFDF, 0xFFFF,   // 0x0100 (256) pixels
0x8C51, 0x20E4, 0x2104, 0x18C3, 0x20C3, 0x3186, 0xDEFC, 0xFFFF, 0xFFDF, 0xFFFF, 0xFFFF, 0xFFFF, 0xD69A, 0x2104, 0x18E4, 0xE71C,   // 0x0110 (272) pixels
0xFFFF, 0x5AAB, 0x2104, 0x20E3, 0x18C3, 0x2104, 0x18C3, 0x18E3, 0x18E3, 0x2104, 0x2104, 0x20E4, 0x20E4, 0x2125, 0x2925, 0x4A49,   // 0x0120 (288) pixels
0xFFDF, 0x94B2, 0x2104, 0x20E3, 0xE71C, 0xFFFF, 0xFFFF, 0xF7BE, 0xFFFF, 0xFFFF, 0xFFFF, 0x94B2, 0x2104, 0x2104, 0x20E3, 0x4A69,   // 0x0130 (304) pixels
0xEF5D, 0xFFDF, 0xFFDF, 0xEF5D, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFDF, 0xFFFF, 0xFFFF, 0xEF5D, 0x4208, 0x10A2, 0x2924, 0x2104, 0xA514,   // 0x0140 (320) pixels
0xF7BE, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xD6BA, 0x18E3, 0x18C3, 0xD6BA, 0xFFDF, 0x52AA, 0x2104, 0x2104, 0x20E3, 0xD679,   // 0x0150 (336) pixels
0xF77E, 0xF79E, 0xF79E, 0xF7BE, 0xF77D, 0xEF7D, 0xF79E, 0xF79E, 0xEF5D, 0xF77E, 0xFFFF, 0x94B2, 0x20E3, 0x20C3, 0xE6FB, 0xFFFF,   // 0x0160 (352) pixels
0xFFFF, 0xCE9A, 0xD6BA, 0xFFFF, 0xFFFF, 0xEF5D, 0x4208, 0x2104, 0x2104, 0xBDB7, 0xFFFF, 0xFFFF, 0xFFFF, 0xAD55, 0xFFFF, 0xFFFF,   // 0x0170 (368) pixels
0xF7BE, 0xA514, 0xF7BE, 0xFFFF, 0xFFFF, 0xB596, 0x2104, 0x18C3, 0x528A, 0xF79E, 0xFFFF, 0xFFFF, 0xCE79, 0xD6DA, 0xFFFF, 0xFFFF,   // 0x0180 (384) pixels
0xD6BA, 0x2124, 0x18C3, 0xDEFB, 0xFFFF, 0x5AEB, 0x18C3, 0x2104, 0x1882, 0xC618, 0xE71C, 0xDEBA, 0xDEDB, 0xDEDB, 0xDEDB, 0xE6FC,   // 0x0190 (400) pixels
0xE6FB, 0xD6BA, 0xEF5D, 0xFFFF, 0xFFFF, 0x9492, 0x20E3, 0x20E4, 0xE71C, 0xFFDF, 0xFFFF, 0xD6BA, 0x634D, 0xFFFF, 0xFFFF, 0xFFFF,   // 0x01A0 (416) pixels
0xBDF7, 0x18A3, 0x73AE, 0xFFDF, 0xFFFF, 0xFFFF, 0xB5B6, 0x8C51, 0xFFFF, 0xFFFF, 0xFFFF, 0x7BEF, 0xC658, 0xFFFF, 0xFFFF, 0xF7BE,   // 0x01B0 (432) pixels
0x632C, 0x2104, 0xCE38, 0xFFFF, 0xFFFF, 0xF79E, 0x5ACB, 0xDEFB, 0xFFDF, 0xFFFF, 0xD69A, 0x20E4, 0x18E3, 0xDEBB, 0xFFBF, 0x62EB,   // 0x01C0 (448) pixels
0x20E3, 0x20C3, 0x2924, 0x18A3, 0x18E3, 0x2104, 0x2104, 0x18E3, 0x20E4, 0x2104, 0x18C3, 0x2104, 0x9472, 0xFFDF, 0xFFFF, 0x9492,   // 0x01D0 (464) pixels
0x18C3, 0x20E3, 0xE71C, 0xFFDF, 0xFFFF, 0xD69A, 0x20E3, 0xBDB7, 0xFFDF, 0xFFFF, 0xFFDF, 0x6B4D, 0xE73C, 0xFFFF, 0xFFFF, 0xEF5D,   // 0x01E0 (480) pixels
0x39E7, 0x8C51, 0xFFFF, 0xFFFF, 0xFFFF, 0x8410, 0x4228, 0xF79E, 0xFFFF, 0xFFFF, 0xD6BA, 0x8410, 0xFFDF, 0xFFFF, 0xFFFF, 0xAD75,   // 0x01F0 (496) pixels
0x18E3, 0xDEDB, 0xFFFF, 0xFFFF, 0xCE79, 0x2104, 0x18E3, 0xDEDB, 0xFFDF, 0x62EC, 0x20E3, 0x18C3, 0x2925, 0x18C3, 0x18E3, 0x20E4,   // 0x0200 (512) pixels
0x2104, 0x18C3, 0x18E3, 0x2124, 0x10A2, 0x2124, 0x8C51, 0xFFFF, 0xFFFF, 0x94B2, 0x20E3, 0x2924, 0xD69A, 0xFFFF, 0xFFFF, 0xC638,   // 0x0210 (528) pixels
0x2104, 0x4208, 0xF77E, 0xFFDF, 0xFFFF, 0xF7DF, 0xFFFF, 0xF7BE, 0xFFFF, 0x8C30, 0x18C3, 0x9472, 0xFFFF, 0xFFDF, 0xFFFF, 0x738E,   // 0x0220 (544) pixels
0x2924, 0x9CD3, 0xFFFF, 0xFFFF, 0xFFFF, 0xF79E, 0xFFFF, 0xFFFF, 0xE73C, 0x2965, 0x2104, 0xE71C, 0xFFFF, 0xFFFF, 0xD69A, 0x2104,   // 0x0230 (560) pixels
0x2104, 0xD69A, 0xFFFF, 0x528A, 0x2104, 0x2104, 0x18A2, 0xD69A, 0xE73C, 0xE73C, 0xE73C, 0xEF5D, 0xEF5D, 0xEF5D, 0xE73C, 0xE73C,   // 0x0240 (576) pixels
0xF79E, 0xFFDF, 0xFFFF, 0x94B2, 0x20E3, 0x18C3, 0xDEFB, 0xFFFF, 0xFFDF, 0xD6BA, 0x2104, 0x18C3, 0x9492, 0xFFBF, 0xFFFF, 0xF7BE,   // 0x0250 (592) pixels
0xFFDF, 0xFFFF, 0xCE79, 0x2104, 0x2104, 0x8C51, 0xFFDF, 0xFFDF, 0xFFFF, 0x7BCF, 0x2104, 0x3165, 0xDEBB, 0xFFFF, 0xF7BE, 0xFFFF,   // 0x0260 (608) pixels
0xFFFF, 0xFFDF, 0x7BCF, 0x2124, 0x18E3, 0xD6BA, 0xFFFF, 0xFFFF, 0xD69A, 0x18E3, 0x18E3, 0xDEFB, 0xFFFF, 0x5ACB, 0x2124, 0x2104,   // 0x0270 (624) pixels
0x18C3, 0xC638, 0xE71C, 0xEF5D, 0xE71C, 0xEF3C, 0xEF5D, 0xEF3D, 0xEF5D, 0xEF5D, 0xEF5D, 0xE73C, 0xFFFF, 0x94B2, 0x20E3, 0x20E3,   // 0x0280 (640) pixels
0xE71C, 0xFFFF, 0xFFFF, 0xD67A, 0x18E3, 0x2104, 0x2124, 0xDEDB, 0xFFFF, 0xFFFF, 0xFFFF, 0xEF7D, 0x5ACB, 0x20E4, 0x20E4, 0x8C30,   // 0x0290 (656) pixels
0xFFFF, 0xFFFF, 0xFFFF, 0x738E, 0x2104, 0x18C3, 0x7BCF, 0xFFBF, 0xFFFF, 0xFFFF, 0xFFFF, 0xCE59, 0x2104, 0x18C3, 0x2104, 0xDEDB,   // 0x02A0 (672) pixels
0xFFFF, 0xFFFF, 0xDEDB, 0x20E4, 0x18C3, 0xD6BA, 0xFFFF, 0x5ACB, 0x20E3, 0x20E3, 0x20E3, 0x2104, 0x2104, 0x2104, 0x2924, 0x20E3,   // 0x02B0 (688) pixels
0x18C3, 0x18C3, 0x20E3, 0x18C3, 0x20E3, 0x2104, 0xEF7D, 0x94B2, 0x2103, 0x2104, 0xDEDB, 0xFFFF, 0xFFFF, 0xD67A, 0x18C3, 0x2104,   // 0x02C0 (704) pixels
0x20E4, 0x6B2C, 0xFFBF, 0xFFDF, 0xFFFF, 0xAD75, 0x18E3, 0x2924, 0x2104, 0x9492, 0xFFDF, 0xFFFF, 0xFFFF, 0x73AE, 0x20E4, 0x2104,   // 0x02D0 (720) pixels
0x18C3, 0xC5F7, 0xFFDF, 0xFFFF, 0xEF7D, 0x528A, 0x2104, 0x2104, 0x18C3, 0xE71C, 0xFFDF, 0xFFDF, 0xD67A, 0x18E3, 0x2925, 0xDEBA,   // 0x02E0 (736) pixels
0xFFFF, 0x52AA, 0x20E4, 0x20E4, 0x2104, 0x20E3, 0x18E3, 0x2104, 0x20E3, 0x20E3, 0x20E3, 0x2104, 0x2104, 0x2104, 0x2104, 0x2104,   // 0x02F0 (752) pixels
0xEF5D, 0x9492, 0x2103, 0x18A2, 0xA514, 0xBDD7, 0xBDB7, 0xA4F4, 0x20E4, 0x20E4, 0x20E3, 0x2104, 0x9CB3, 0xBDD7, 0xB5B6, 0x39C7,   // 0x0300 (768) pixels
0x18E3, 0x2104, 0x18C3, 0x6B4D, 0xBDD7, 0xBDD7, 0xB5B6, 0x5ACB, 0x20E4, 0x2104, 0x2924, 0x4A29, 0xBDD7, 0xBDB7, 0x8C51, 0x2104,   // 0x0310 (784) pixels
0x20E3, 0x20E4, 0x2104, 0x9CD3, 0xC5F7, 0xBDD7, 0x9CD3, 0x2104, 0x18C3, 0xDEDB, 0xFFFF, 0xB5B6, 0xAD55, 0xAD75, 0xAD34, 0xB576,   // 0x0320 (800) pixels
0xAD75, 0xAD55, 0xAD55, 0xAD75, 0xB575, 0xAD55, 0xAD34, 0xA534, 0xAD55, 0xB575, 0xFFDF, 0x94B2, 0x2904, 0x20E3, 0x2104, 0x2104,   // 0x0330 (816) pixels
0x18C3, 0x18C3, 0x2104, 0x2104, 0x20E3, 0x2104, 0x20E4, 0x20E3, 0x18C3, 0x2104, 0x20E3, 0x20E3, 0x2904, 0x20E3, 0x20E4, 0x18E3,   // 0x0340 (832) pixels
0x2104, 0x2104, 0x2104, 0x20C3, 0x20E3, 0x2104, 0x18C3, 0x18C3, 0x2124, 0x18C3, 0x2924, 0x20E3, 0x18E3, 0x20E3, 0x2104, 0x18C3,   // 0x0350 (848) pixels
0x2124, 0x18E3, 0x2104, 0xDEBA, 0xFFDF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xF7BE, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFDF, 0xFFFF,   // 0x0360 (864) pixels
0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFDF, 0x9CD3, 0x20C2, 0x2924, 0x20E4, 0x2104, 0x2104, 0x2124, 0x2104, 0x20E4, 0x2104, 0x2104,   // 0x0370 (880) pixels
0x2104, 0x20E4, 0x2124, 0x18E3, 0x2924, 0x2104, 0x20E4, 0x2104, 0x18C3, 0x2104, 0x2104, 0x18E3, 0x2104, 0x2904, 0x2904, 0x18C3,   // 0x0380 (896) pixels
0x2924, 0x2925, 0x18E3, 0x2104, 0x2104, 0x2104, 0x20E4, 0x2945, 0x18E3, 0x2104, 0x20E4, 0x2104, 0x20E4, 0x7BCF, 0x94B2, 0x9492,   // 0x0390 (912) pixels
0x9492, 0x8C71, 0x9492, 0x9492, 0x94B2, 0x8C71, 0x8C71, 0x9492, 0x94B2, 0x9492, 0x9492, 0x9492, 0x9492, 0x8C71, 0x94B2, 0x528A,   // 0x03A0 (928) pixels
0x8410, 0xEF5D, 0xE73C, 0xE73C, 0xEF5D, 0xEF5D, 0xEF7D, 0xE73C, 0xE73C, 0xE73C, 0xE73C, 0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D,   // 0x03B0 (944) pixels
0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D, 0xE75D, 0xE75D, 0xE75D, 0xE75D, 0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D, 0xEF5D,   // 0x03C0 (960) pixels
0xEF5D, 0xE73C, 0xEF7D, 0xE75C, 0xE73D, 0xE73D, 0x9CD3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x18E3,   // 0x03D0 (976) pixels
0x18E3, 0x18E3, 0x18E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x9471, 0xF7BE, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFBE,   // 0x03E0 (992) pixels
0xFFDF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,   // 0x03F0 (1008) pixels
0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF,   // 0x0400 (1024) pixels
0xAD34, 0x2104, 0x20E3, 0x2103, 0x2103, 0x2103, 0x2103, 0x20E3, 0x20E3, 0x20E3, 0x2103, 0x2103, 0x2103, 0x2103, 0x2103, 0x2103,   // 0x0410 (1040) pixels
0x20E3, 0x20E3, 0x20E3, 0x20E3, 0x4208, 0x7BAE, 0x6B6D, 0x736D, 0x738E, 0x738E, 0x736E, 0x738E, 0x736E, 0x736E, 0x736E, 0x736E,   // 0x0420 (1056) pixels
0x736E, 0x736E, 0x736E, 0x738E, 0x736E, 0x736E, 0x736E, 0x736E, 0x736E, 0x736E, 0x738E, 0x738E, 0x736E, 0x736E, 0x736E, 0x736E,   // 0x0430 (1072) pixels
0x736E, 0x736E, 0x736E, 0x736E, 0x736D, 0x736D, 0x73AE, 0x738D, 0x6B4D, 0x736E, 0x528A, 0x20E3, 0x2903, 0x2903, 0x2903, 0x2903,   // 0x0440 (1088) pixels
};

int between=1,mcount=0;
int GX=64-58,GY=32-19; // per screen difference from image size in pixels, which is 58,19  

#define ARRAYSIZE 10

String str[ARRAYSIZE] = { "] mme [", 
                          "cleanmgr /sagerun:1", 
                          "net stop spooler; net start spooler",
                          "osql -s server checkdbcc",
                          "tasklist | findstr /i %proc%",
                          "icacls . /grant Records1:(d,wdac)",
                          "/usr/sbin/fdisk -l"
                        };
                        
String str2[ARRAYSIZE] = { "powershell -exec bypass -file a.ps1", 
                          "ufw allow ssh", 
                          "net view",
                          "ssh -l amplex ss.gpo.tools",
                          "lsusb",
                          "Serial.println(randName);",
                          "c:\\windows\\system32\\windowspowershell\\v1.0\\powershell.exe"
                        };

void loop() {
  //quick_test();
  MME_movement();
  MME_movement2();
  MME_movement3();

} 

void MME_movement3() {
  int x,y,z,times=0;
  bool xup,yup,zup=false;
  
  matrix.setTextSize(.5);     // size 1 == 8 pixels high
  matrix.setTextWrap(false); // Don't wrap at end of line - will do ourselves

  for (times=0; times<between; times++) {
    for (int x=0; x<=GX; x++) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.setCursor(1+x/2, 22+x/5); 
      matrix.setTextColor(matrix.Color333(x,x,x));
      matrix.print("[ MME ]");
      delay(DFAST);
    
      matrix.setCursor(1+x/2+.1, 22+x/5); 
      matrix.setTextColor(matrix.Color333(x-4,x-4,x-10));
      matrix.print("[ MME ]");
      delay(DQUICK);
        
      matrix.setCursor(1+x/2, 22+x/5); 
      matrix.setTextColor(matrix.Color333(0,0,0));
      matrix.print("[ MME ]");
      delay(DNANO);
    
      
    }
    for (int x=GX; x>=0; x--) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.setCursor(1+x*x, 22+x/5); 
      matrix.setTextColor(matrix.Color333(x,x,x));
      matrix.print(str[x]);
      delay(DFAST);
      matrix.setCursor(1+x*x, 22+x/5); 
      matrix.setTextColor(matrix.Color333(0,0,0));
      matrix.print(str[x]);
      delay(DNANO);
    }
  }
  for (int x=GX; x>=0; x--) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.setCursor(1+x*x, 22+x/5); 
      matrix.setTextColor(matrix.Color333(x,x,x));
      matrix.print(str2[x]);
      delay(DFAST);
      matrix.setCursor(1+x*x, 22+x/5); 
      matrix.setTextColor(matrix.Color333(0,0,0));
      matrix.print(str2[x]);
      delay(DNANO);
  }
}

void MME_movement2() {
  int x,y,z,times=0;
  bool xup,yup,zup=false;
  
  matrix.setTextSize(.5);     // size 1 == 8 pixels high
  matrix.setTextWrap(false); // Don't wrap at end of line - will do ourselves

  for (times=0; times<between; times++) {
    for (int x=0; x<=GX; x++) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.setCursor(1+x/2, 22+x/5); 
      matrix.setTextColor(matrix.Color333(x,x,x));
      matrix.print("[ MME ]");
      delay(DFAST);
      matrix.setCursor(1+x/2, 22+x/5); 
      matrix.setTextColor(matrix.Color333(0,0,0));
      matrix.print("[ MME ]");
      delay(DFAST);
    }
    for (int x=GX; x>=0; x--) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
      matrix.setCursor(1+x*x, 18+x/6); 
      matrix.setTextColor(matrix.Color333(x,x,x));
      matrix.print(" [ MME ] ");
      delay(DFAST);
      matrix.setCursor(1+x*x, 18+x/6); 
      matrix.setTextColor(matrix.Color333(0,0,0));
      matrix.print(" [ MME ] ");
      delay(DFAST);
    }
  }

  
}

void MME_movement() {
  int x,y,z,times=0;
  bool xup,yup,zup=false;
  
  for (times=0; times<between; times++) {
    for (int x=0; x<=GX; x++) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
    }
    for (int y=0; y<=GY; y++) {
      matrix.drawRGBBitmap(GX, y, (const uint16_t *)surface, 58, 19);
    }
    
    for (int x=GX; x>=0; x--) {
      matrix.drawRGBBitmap(x, GY, (const uint16_t *)surface, 58, 19);
    }
    for (int y=GY; y>=0; y--) {
      matrix.drawRGBBitmap(0, y, (const uint16_t *)surface, 58, 19);
    }
    for (int x=0; x<=GX; x++) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
    }
    
    turnaround();
    
    for (int x=GX; x>=0; x--) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
    }
    for (int y=0; y<=GY; y++) {
      matrix.drawRGBBitmap(0, y, (const uint16_t *)surface, 58, 19);
    }
    for (int x=0; x<=GX; x++) {
      matrix.drawRGBBitmap(x, GY, (const uint16_t *)surface, 58, 19);
    }
    for (int y=GY; y>=0; y--) {
      matrix.drawRGBBitmap(GX, y, (const uint16_t *)surface, 58, 19);
    }  
    for (int x=GX; x>=0; x--) {
      matrix.drawRGBBitmap(x, 0, (const uint16_t *)surface, 58, 19);
    }
    
    switch (mcount) {
      case 0:
        turnaround2();
        break;
      case 1:
        turnaround3();
        break;
    }
    if (mcount>1) mcount=0; else mcount+=1;
    
    
    
  }
}

void resetscreen() {
  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}

void turnaround() {
  int count=0;
  int x=GX,y=0;
  bool yup,xup=true;
  
  while (count<24) {
    if (xup) { x++; } else { x--; }
    if (yup) { y++; } else { y--; }
    if (x==12) { xup=false; }
    if (y==12) { yup=false; }
    if (x==0) { xup=true; }
    if (y==0) { yup=true; }
    matrix.drawRGBBitmap(x, y, (const uint16_t *)surface, 58, 19);
    count+=1;
  }
}

void turnaround2() {
  int x=0,y=0;
  int count=0;
  bool yup=true,xup=true;
  
  while (count<=GY*2) { // (the largest difference *2 to come back into place)
    if (xup) { x++; } else { x--; }
    if (yup) { y++; } else { y--; }
    if (x==GX) { xup=false; }
    if (y==GY) { yup=false; }
    if (x==0) { xup=true; }
    if (y==0) { yup=true; }
    matrix.drawRGBBitmap(x, y, (const uint16_t *)surface, 58, 19);
    count+=1;
  }
}

void turnaround3() {
  int x=0,y=0;
  int count=0;
  bool yup=true,xup=false;
  
  while (count<=GY) {
    if (xup) { x++; } else { x--; }
    if (yup) { y++; } else { y--; }
    if (x==GX) { xup=false; }
    if (y==GY) { yup=false; }
    if (x==0) { xup=true; }
    if (y==0) { yup=true; }
    matrix.drawRGBBitmap(x, y, (const uint16_t *)surface, 58, 19);
    count+=1;
  }
}

void quick_test(){
  int test=0;
  for (test=0; test<10; test++) {
    matrix.setCursor(1, 8); 
    matrix.setTextColor(matrix.Color333(10+test,10+test,10+test)); 
    matrix.print("-");
    delay(100);
  }
}

// Input a value 0 to 24 to get a color value.
// The colours are a transition r - g - b - back to r.
uint16_t Wheel(byte WheelPos) {
  if(WheelPos < 8) {
   return matrix.Color333(7 - WheelPos, WheelPos, 0);
  } else if(WheelPos < 16) {
   WheelPos -= 8;
   return matrix.Color333(0, 7-WheelPos, WheelPos);
  } else {
   WheelPos -= 16;
   return matrix.Color333(WheelPos, 0, 7 - WheelPos);
  }
}
