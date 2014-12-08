#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;

const byte Mechant[] PROGMEM = {16,16,0x0,0x1F,0x0,0x11,0x0,0x15,0x0,0x19,0x0,0xF,0x4,0x86,0x2,0x46,0x1,0x6F,0x0,0x9F,0x1,0x4F,0x0,0x3F,0x0,0xF,0x0,0xF,0x0,0x5,0x0,0x5,0x0,0x5,};
const byte Mechant1[] PROGMEM = {16,16,0x0,0x1F,0x0,0x11,0x0,0x15,0x0,0x19,0x0,0xF,0x0,0x86,0x0,0x46,0x0,0x2F,0x0,0x1F,0x0,0x4F,0x1F,0xFF,0x0,0x4F,0x0,0xF,0x0,0x5,0x0,0x5,0x0,0x5,};
const byte prince[] PROGMEM = {16,16,0x0,0x0,0x7,0x1,0x8,0x82,0x8,0x84,0x7,0x48,0x2,0x30,0x27,0x30,0x17,0x48,0xF,0x80,0x7,0x0,0x7,0x0,0x7,0x0,0x5,0x0,0x5,0x0,0x5,0x0,0xD,0x80,};
const byte prince1[] PROGMEM = {16,16,0x0,0x0,0x7,0x0,0x8,0x80,0x8,0x80,0x7,0x0,0x2,0x0,0x27,0x20,0x17,0x20,0xF,0xFF,0x7,0x20,0x7,0x20,0x7,0x0,0x5,0x0,0x5,0x0,0x5,0x0,0xD,0x80,};


const byte WorldSmall[] PROGMEM = {88,44,0x2,0xA0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0xC0,0x3,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x38,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x6,0xC,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1C,0x6,0x4,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x2,0x1C,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1F,0xFE,0xF2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0x2,0x48,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,0xE2,0x0,0x80,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x11,0x12,0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0x12,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0xE3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xB,0x1B,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xA,0xB,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xF,0xEF,0xFF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x3F,0xFF,0x2,0xAA,0xAA,0xA0,0x0,0x0,0x0,0x0,0xC,0x0,0x0,0x3,0x55,0x55,0x60,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x2,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x2,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x2,0x21,0x4,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x1,0x12,0x83,0x20,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8C,0x4,0x40,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x42,0x8,0x80,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x21,0x9,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x1F,0xFE,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x18,0x6,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x1F,0x0,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x7,0xF9,0xC0,0x0,0x9,0x84,0x0,0x0,0x0,0x0,0x0,0x6,0x10,0x60,0x0,0xA,0x44,0x0,0x0,0x0,0x0,0x0,0x4,0x10,0x30,0x0,0xA,0x44,0x0,0x0,0x0,0x0,0x0,0x4,0x10,0x10,0x0,0x9,0x84,0x0,0x0,0x0,0x0,0x0,0x4,0x10,0x18,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x5,0xD3,0x88,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x5,0xDB,0x8C,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x8,0x4,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x8,0x4,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0xC,0x2,0x0,0x8,0x4,0x0,0x0,0x0,0x0,0x0,0x4,0x4,0x2,0x55,0x58,0x6,0xAA,0xAA,0xAA,0xAA,0xAA,0xAC,0x4,0x2,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,};
//Position en X du chevalier
int xpos = 0;
//position en X du mechant
int xposMe = 0;
//si true le mechant a l'épee en mode attaque
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
  //on met tout le monde en position initiale
  xpos = 0;
  xposMe = 16;
  attkmechant=false;
}

void loop(){
    if(gb.update())
    {
      
      if(gb.buttons.pressed(BTN_C))
      {
        //si on appuis sur C on retourne au menu principal
        goTitleScreen();
      }
      //on dessine le monde en position 0,0. le monde fait exatement la taille de l'ecran
      gb.display.drawBitmap(0,0,WorldSmall);
      //BTN_UP, BTN_RIGHT, BTN_DOWN, BTN_LEFT
       if(gb.buttons.repeat(BTN_RIGHT,1))
       {
         //si on appuis sur droite le chevalier va avancer de 1 px : xpos++
          if(!gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))//si je suis pas en collision avec le mechant
             xpos++;
       }
       else if  (gb.buttons.repeat(BTN_LEFT,1))
       {
         //je peut aussi reculer :0
         xpos--;
       }
       // on ne doit pas sortir de l'ecran
         if(xpos<0) xpos = 0;
         if(xpos>72) xpos = 72; // = 88 px de l'ecran de large - 16 px du chevalier
         
       if(gb.buttons.repeat(BTN_A,1))
       {
         //le chevalier donne un coup d'epee
        gb.display.drawBitmap(xpos,28,prince1);
        gb.sound.playTick();
       }
       else 
       {
         //le chevalier ne donne pas de coup d'epee
        gb.display.drawBitmap(xpos,28,prince);
       }
       if(gb.buttons.pressed(BTN_A) && gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))
       {
           //je touche le mechant recule de 4 px
           xposMe +=4;
           gb.sound.playOK();
       }
       
       //gestion du méchant 
       if(attkmechant)
       {
         //le mechant attaque 
          gb.display.drawBitmap(xposMe,28,Mechant1);
       }
       else 
       {
         //le mechant n'attaque pas
          gb.display.drawBitmap(xposMe,28,Mechant);
       }
       
       if(!gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))
       {
         //si le mechant le peux il avance vers le joueur
           xposMe--;
       }
       
       if(random(0,6)==0)//une chance sur 6 a chaque frame (20/ seconde de base)
       {
         // on change d'etat le mechant
         attkmechant = !attkmechant;
         if(attkmechant && gb.collideBitmapBitmap(xpos, 28, prince1, xposMe, 28, Mechant1))
         {
           //si il attaque et qu'il me touche ça fait mal je recule

           xpos -=4;//je recule de 4
           xposMe -=1;//le mechant avance de 1
           
           gb.sound.playOK();
         }
       }
       //SECURITE : le mechant ne peut pas aller derriere moi .
       if(xposMe<xpos)
       {
         xposMe = xpos+10;
       }
       
       //j'arrive au porte du chateau (pos>66) j'entre BTN_B
       if(xpos > 66 && gb.buttons.pressed(BTN_B))
       {
        victorie();//Et c'est gagner !
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
