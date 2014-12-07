#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;

const byte Mechant[] PROGMEM = {16,16,0x0,0x1F,0x0,0x11,0x0,0x15,0x0,0x19,0x0,0xF,0x4,0x86,0x2,0x46,0x1,0x6F,0x0,0x9F,0x1,0x4F,0x0,0x3F,0x0,0xF,0x0,0xF,0x0,0x5,0x0,0x5,0x0,0x5,};
const byte Mechant1[] PROGMEM = {16,16,0x0,0x1F,0x0,0x11,0x0,0x15,0x0,0x19,0x0,0xF,0x0,0x86,0x0,0x46,0x0,0x2F,0x0,0x1F,0x0,0x4F,0x1F,0xFF,0x0,0x4F,0x0,0xF,0x0,0x5,0x0,0x5,0x0,0x5,};
const byte prince[] PROGMEM = {16,16,0x0,0x0,0x7,0x1,0x8,0x82,0x8,0x84,0x7,0x48,0x2,0x30,0x27,0x30,0x17,0x48,0xF,0x80,0x7,0x0,0x7,0x0,0x7,0x0,0x5,0x0,0x5,0x0,0x5,0x0,0xD,0x80,};
const byte prince1[] PROGMEM = {16,16,0x0,0x0,0x7,0x0,0x8,0x80,0x8,0x80,0x7,0x0,0x2,0x0,0x27,0x20,0x17,0x20,0xF,0xFF,0x7,0x20,0x7,0x20,0x7,0x0,0x5,0x0,0x5,0x0,0x5,0x0,0xD,0x80,};
const byte theWorld[] PROGMEM = {176,44,
B00000010,B10100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,
B00000011,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00111000,
B00000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,B00001100,
B00000111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000110,
B00000100,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B00000010,
B00011100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111110,
B11110010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B00000010,
B01001000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B11100010,
B00000000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010001,B00010010,
B01000010,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B00010010,
B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001000,B11100011,
B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001011,B00011011,
B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001010,B00001011,
B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11101111,B11111111,
B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001000,B00111111,B11111111,
B00000010,B10101010,B10101010,B10100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,
B00000011,B01010101,B01010101,B01100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000010,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000010,B00000000,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000010,B00100001,B00000100,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000001,B00010010,B10000011,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B10001100,B00000100,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B01000010,B00001000,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B00100001,B00001001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B00011111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B00011000,B00000110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000000,B00000000,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00011111,B00000000,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111001,B11000000,
B00000000,B00001001,B10000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000110,B00010000,B01100000,
B00000000,B00001010,B01000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00010000,B00110000,
B00000000,B00001010,B01000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00010000,B00010000,
B00000000,B00001001,B10000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00010000,B00011000,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B10101010,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000101,B11010011,B10001000,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B01010101,B01000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000101,B11011011,B10001100,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00001000,B00000100,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00001000,B00000100,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00001100,B00000010,
B00000000,B00001000,B00000100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000010,B00000000,B00100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00000100,B00000010,
B01010101,B01011000,B00000110,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101010,B10101100,B00000100,B00000010,
B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
};


const byte WorldSmall[] PROGMEM = {88,44,0x2,0xA0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0xC0,0x3,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x38,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0xC,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1C,0x6,0x4,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x2,0x1C,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1F,0xFE,0xF2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x2,0x48,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0xE2,0x0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11,0x12,0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0x12,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0xE3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xB,0x1B,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xA,0xB,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xF,0xEF,0xFF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x3F,0xFF,0x2,0xAA,0xAA,0xA0,0x0,0x0,0x0,0x0,0xC,0x0,0x0,0x3,0x55,0x55,0x60,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x2,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x2,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x2,0x21,0x4,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x1,0x12,0x83,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8C,0x4,0x40,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x42,0x8,0x80,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x21,0x9,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1F,0xFE,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x18,0x6,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x1F,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x7,0xF9,0xC0,0x0,0x9,0x84,0x0,0x0,0x0,0x0,0x0,0x6,0x10,0x60,0x0,0xA,0x44,0x0,0x0,0x0,0x0,0x0,0x4,0x10,0x30,0x0,0xA,0x44,0x0,0x0,0x0,0x0,0x0,0x4,0x10,0x10,0x0,0x9,0x84,0x0,0x0,0x0,0x0,0x0,0x4,0x10,0x18,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x5,0xD3,0x88,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x5,0xDB,0x8C,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x8,0x4,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x8,0x4,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0xC,0x2,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x4,0x2,0x55,0x58,0x6,0xAA,0xAA,0xAA,0xAA,0xAA,0xAC,0x4,0x2,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,};

int xpos = 0;
int xposMe = 0;
bool attkmechant=false;
void setup()
{
  gb.begin();
 goTitleScreen();
 gb.battery.show = false;
}

void goTitleScreen()
{
  gb.titleScreen(F("Sauve la princesse"));
  initGame();
}
void initGame()
{
  xpos = 0;
  xposMe = 16;
  attkmechant=false;
}

void loop(){
    if(gb.update())
    {
      
      if(gb.buttons.pressed(BTN_C))
      {
        goTitleScreen();
      }
      
      gb.display.drawBitmap(0,0,WorldSmall);
      //BTN_UP, BTN_RIGHT, BTN_DOWN, BTN_LEFT
       if(gb.buttons.repeat(BTN_RIGHT,1))
       {
          if(!gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))
             xpos++;
       }
       else if  (gb.buttons.repeat(BTN_LEFT,1))
       {
         xpos--;
       }
       
         if(xpos<0) xpos = 0;
         if(xpos>72) xpos = 72;
         
       if(gb.buttons.repeat(BTN_A,1))
       {
        gb.display.drawBitmap(xpos,28,prince1);
        gb.sound.playTick();
       }
       else 
       {
        gb.display.drawBitmap(xpos,28,prince);
       }
       if(gb.buttons.pressed(BTN_A) && gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))
       {
           xposMe +=4;
           gb.sound.playOK();
       }
       
       //gestion du méchant 
       if(attkmechant)
       {
          gb.display.drawBitmap(xposMe,28,Mechant1);
       }
       else 
       {
          gb.display.drawBitmap(xposMe,28,Mechant);
       }
       
       if(!gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))
       {
           xposMe--;
       }
       
       if(random(0,6)==0)
       {
         attkmechant = !attkmechant;
         if(attkmechant && gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))
         {
           if(gb.buttons.pressed(BTN_B))
           {
             xposMe +=4;
           }
           else 
           {
             xpos -=8;
             xposMe -=4;
           }
           gb.sound.playOK();
         }
       }
       
       if(xposMe<xpos)
       {
         xposMe = xpos+10;
       }
       
       if(xpos > 66 && gb.buttons.pressed(BTN_B))
       {
        victorie();
       }
    }
}

void victorie()
{
  while(true)
  {
    if(gb.update())
    {
      gb.display.println("Youhou !");
      gb.display.print("appuis sur ");
      gb.display.print("A");
      if(gb.buttons.pressed(BTN_A))
       {
         break;
       }
    }
  }
  goTitleScreen();
  
}





//101 starship function
void displayText(String s, byte x, byte y, byte t){
  gb.display.cursorX = x;
  gb.display.cursorY = y;  
  gb.display.fontSize = t;
  gb.display.print(s);
}
void displayText(String s, byte x, byte y){
  displayText(s,x,y,1);
}
void displayInt(long l, byte Tx, byte Ty, byte fig){
  gb.display.fontSize = 1;
  String sl = String(l);
  while(sl.length() < fig){
    sl = "0" + sl;  
  }
  gb.display.cursorX = Tx;
  gb.display.cursorY = Ty;  
  gb.display.print(sl);
}

void displayInt(long l, byte fig){
  gb.display.fontSize = 1;
  String sl = String(l);
  while(sl.length() < fig){
    sl = "0" + sl;  
  } 
  gb.display.print(sl);
}
