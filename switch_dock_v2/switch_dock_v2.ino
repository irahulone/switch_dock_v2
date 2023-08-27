
// Uses Neopixel RGBW LEDs


int second, minute, hour, month, year, date;
 
const int init_hour = 29, init_min = 99, init_day = 1, init_date = 39;
int rec_hour = init_hour, rec_min = init_min, rec_day = init_day, rec_date = init_date;
int day_flag = 0;

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define BLOCK_PIN 5

//Adafruit_NeoPixel block = Adafruit_NeoPixel((64), BLOCK_PIN, NEO_GRB + NEO_KHZ800);

Adafruit_NeoPixel block(128, BLOCK_PIN, NEO_GRBW + NEO_KHZ800);

#define BRIGHTNESS 2 // Set BRIGHTNESS to about 1/5 (max = 255)


unsigned long previousMillis = 0;  
const long interval = 60*1000;

// Time parameters (color)
float cb = 1;  // Brightness (0-10)
int time_hr = cb*20; int time_hg = cb*20; int time_hb = cb*15;
int time_r = cb*0; int time_g = cb*0; int time_b = cb*0;

const int dock_prox_pin = A0;
bool switch_docked = false;
bool docked = false;

int lum = 5;



void setup()
{
  Serial.begin(1200);

  block.begin();
  block.show();
  
}



void setupLoop()
{
  for(int i=56; i<=(63); i++)
  {
     block.setPixelColor(i,40,65,80); 
     //delay(1);
  }
  //block.setPixelColor(48,40,50,65); block.setPixelColor(55,40,50,65);
}




void initialise()
{
  cb = 2;
}

void fun()
{
  for(int i=64; i<=(64+16); i++)
  {
     block.setPixelColor(i,60,0,0); 
     //delay(1);
  }
  delay(1000);
}


void showDay(int d = 1, int bright = lum)
{
  if(d < 1) d = 1;
  if(d > 7) d = 7;
  
  int begin_at = 64 + 56;
  
  float br = bright*1.5;

  for (int i = begin_at; i <= (begin_at+7); i++ )
  {
    block.setPixelColor(i, 0, br*0.8, br*2.2);
  }
  
  int i = begin_at + d - 1;
  block.setPixelColor(i,   3.5*br,br/6,0);
  block.setPixelColor(i+1, 3.5*br,br/6,0);
  
  block.show();
   
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void block_clear()
{
  for(int i = 0; i <= 64; i++)
  {
    block.setPixelColor(i, 0, 0, 0);
  }
  block.show();
}


void dock_monitor()
{
  switch_docked = false;
  int prox_val = analogRead(dock_prox_pin);
  if (prox_val < 400) switch_docked = true;
}


int br = 10;


void switch_tablet(int pix_location, int bright = 5)
{
  int pos = pix_location;
  int br = bright*1;
/*
  block.setPixelColor(pos+0+0, br, br, br/2);
  block.setPixelColor(pos+8+0, br, br, br/2);
  block.setPixelColor(pos+0+1, br, br, br/2);
  block.setPixelColor(pos+8+1, br, br, br/2);
  block.setPixelColor(pos+0+2, br, br, br/2);
  block.setPixelColor(pos+8+2, br, br, br/2);
*/
  block.setPixelColor(pos+0+0, 0, 0, 0, 1.2*br);
  block.setPixelColor(pos+8+0, 0, 0, 0, 1.2*br);
  block.setPixelColor(pos+0+1, 0, 0, 0, 1.2*br);
  block.setPixelColor(pos+8+1, 0, 0, 0, 1.2*br);
  block.setPixelColor(pos+0+2, 0, 0, 0, 1.2*br);
  block.setPixelColor(pos+8+2, 0, 0, 0, 1.2*br);
  
  block.show();
}

void neon_joycon(int pix_location, int bright = 5)
{
  int pos = pix_location;
  int b = bright*1;
  block.setPixelColor(pos,   3.5*b,b/6,0);
  block.setPixelColor(pos+8, 3.5*b,b/6,0);
  block.show();
}

void blue_joycon(int pix_location, int bright = 5)
{
  int pos = pix_location;
  int br = bright*1;
  block.setPixelColor(pos,   0, br*1.0, br*2.5);
  block.setPixelColor(pos+8, 0, br*1.0, br*2.5);
  block.show();
}

void switch_icon(int location = 2, int intensity = 5)
{
  int pos = location;
  blue_joycon(pos+0, intensity);
  switch_tablet(pos+1, intensity);
  neon_joycon(pos+4, intensity);

}

void switch_docking_animation()
{
  /*
  if (switch_docked == true)
  switch_icon();
  else
  block_clear();
  */
  if (switch_docked == true && docked != true)
  {
    block_clear();  delay(400);
    
    switch_icon(0*8 + 2); delay(40); block_clear();
    switch_icon(1*8 + 2); delay(60); block_clear();
    switch_icon(2*8 + 2); delay(120); block_clear();
    switch_icon(3*8 + 2); delay(1400); block_clear();
    
    switch_icon(5*8 + 2); delay(2000); block_clear();

    blue_joycon(5*8 + 2); neon_joycon(5*8 + 5);   delay(20); block_clear();
    blue_joycon(5*8 + 1); neon_joycon(5*8 + 6);   delay(60); block_clear();
    blue_joycon(5*8 + 0); neon_joycon(5*8 + 7);   delay(120); block_clear();
    
    docked = true;
    delay(1000);
  }

  if (switch_docked == false && docked != false)
  {
    block_clear();  delay(400);
    
    blue_joycon(5*8 + 0); neon_joycon(5*8 + 7);   delay(120); block_clear();
    blue_joycon(5*8 + 1); neon_joycon(5*8 + 6);   delay(60); block_clear();
    blue_joycon(5*8 + 2); neon_joycon(5*8 + 5);   delay(20); block_clear();
    
    switch_icon(5*8 + 2); delay(800); block_clear();
    
    switch_icon(3*8 + 2); delay(400); block_clear();
    switch_icon(2*8 + 2); delay(120); block_clear();
    switch_icon(1*8 + 2); delay(60); block_clear();
    switch_icon(0*8 + 2); delay(40); block_clear();
    
    docked = false;
    delay(1000);
  }
  
  
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


 
void loop()
{

  
  if(Serial.available())
  {
    if (Serial.read() != '$') ;
    
    int inByte1 = Serial.parseInt();
    int inByte2 = Serial.parseInt();
    int inByte3 = Serial.parseInt();
    int inByte4 = Serial.parseInt();
    
    rec_hour = inByte1;
    rec_min  = inByte2;
    rec_day  = inByte3;
    rec_date = inByte4;
    
    Serial.print(rec_hour); Serial.print(" "); Serial.print(rec_min); Serial.print(" "); Serial.print(rec_day); Serial.print(" "); Serial.print(rec_date); 
    Serial.println();
    

  } 
  

  initialise();

  dock_monitor();

  
  
  switch_docking_animation();
  
  showClock(rec_hour, rec_min);

  date_block(rec_date);
  day_array(rec_day);  

/*
  if (rec_hour == init_hour || day_flag == 0)
  {
    date_block(rec_date);
    day_array(rec_day);  
    day_flag = 1;
  }
  else
  {
    if(rec_hour == 0)
    {
      if (rec_min > 0 && rec_min < 5)
      {
        date_block(rec_date);
        day_array(rec_day);
      }
    }
  }
  */

  //Serial.print(switch_docked); Serial.print("\t"); Serial.print(docked);  Serial.print("\t");
  //Serial.println(cb); 
  //Serial.print(rec_hour); Serial.print("\t"); Serial.print(rec_min);  Serial.print("\t");
  //Serial.println(rec_day); 
 
  //delay(1);
}
