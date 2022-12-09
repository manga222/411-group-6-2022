


#include <Adafruit_NeoPixel.h>
 
#define LED_Pin1 19 //use 33,32,27,26,25,19,18,14
#define LED_Pin2 18 //use 33,32,27,26,25,19,18,14
#define LED_Pin3 32 //use 33,32,27,26,25,19,18,14
#define LED_Pin4 33 //use 33,32,27,26,25,19,18,14
#define LED_Pin5 25 //use 33,32,27,26,25,19,18,14
#define LED_Pin6 26 //use 33,32,27,26,25,19,18,14
#define LED_Pin7 27 //use 33,32,27,26,25,19,18,14
#define Audio_Pin 36 // use 34 or 35
#define Pot_Pin 34 // use 34 or 35
#define LED_COUNT 76
//#define brightness 200
#define loopy 14
#define pause 40


Adafruit_NeoPixel pixels1 = Adafruit_NeoPixel(LED_COUNT, LED_Pin1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2 = Adafruit_NeoPixel(LED_COUNT, LED_Pin2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels3 = Adafruit_NeoPixel(LED_COUNT, LED_Pin3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels4 = Adafruit_NeoPixel(LED_COUNT, LED_Pin4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels5 = Adafruit_NeoPixel(LED_COUNT, LED_Pin5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels6 = Adafruit_NeoPixel(LED_COUNT, LED_Pin6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels7 = Adafruit_NeoPixel(LED_COUNT, LED_Pin7, NEO_GRB + NEO_KHZ800);

const int num_pixels = pixels7.numPixels();
 int a=0;
 int b=10;
 int c=20;
 int d=30;
 int e=40;
 int f=50;


#define Pot_Pin 34 // use 34 or 35



const int sampleWindow = 50; // Sample window width in mS (50 mS = 20Hz)

int volume = 0;

int loopLED = 0;
int direct = 0;
int brightness = 255;

int colors = 0;
//uint32_t violet = [148,0,211];






void colorSweep(uint32_t color, int wait) {
  for(int i=0; i<pixels7.numPixels(); i++) { // For each pixel in strip...
   // pixels.setPixelColor(i, color);         //  Set pixel's color (in RAM)

  // pixels1.setPixelColor(i, random(brightness),random(brightness),random(brightness));
  // pixels2.setPixelColor(i, random(brightness),random(brightness),random(brightness));
  // pixels3.setPixelColor(i, random(brightness),random(brightness),random(brightness));
  // pixels4.setPixelColor(i, random(brightness),random(brightness),random(brightness));
  // pixels5.setPixelColor(i, random(brightness),random(brightness),random(brightness));
  // pixels6.setPixelColor(i, random(brightness),random(brightness),random(brightness));
   pixels7.setPixelColor(i, random(brightness),random(brightness),random(brightness));
   if (i ==0){}
   else{
  // pixels1.setPixelColor(i-1,0,0,0);
  // pixels2.setPixelColor(i-1,0,0,0);
  // pixels3.setPixelColor(i-1,0,0,0);
  // pixels4.setPixelColor(i-1,0,0,0);
  // pixels5.setPixelColor(i-1,0,0,0);
  // pixels6.setPixelColor(i-1,0,0,0);
   pixels7.setPixelColor(i-1,0,0,0);}
   //pixels1.show();                         //  Update strip to match
   //pixels2.show();
   //pixels3.show();
   //pixels4.show();
   //pixels5.show();
   //pixels6.show();
   pixels7.show();
    delay(wait);                           //  Pause for a moment
  } 
  //pixels1.setPixelColor(num_pixels-1,0,0,0);
  //pixels1.show();
  //pixels2.setPixelColor(num_pixels-1,0,0,0);
 // pixels2.show();
  //pixels3.setPixelColor(num_pixels-1,0,0,0);
  //pixels3.show();
  //pixels4.setPixelColor(num_pixels-1,0,0,0);
  //pixels4.show();
  //pixels5.setPixelColor(num_pixels-1,0,0,0);
  //pixels5.show();
 // pixels6.setPixelColor(num_pixels-1,0,0,0);
  //pixels6.show();
  pixels7.setPixelColor(num_pixels-1,0,0,0);
  pixels7.show();
  
                  
}



void colorSweep2(uint32_t color, int wait, int i) {
   // For each pixel in strip...
   // pixels.setPixelColor(i, color);         //  Set pixel's color (in RAM)

//   pixels1.setPixelColor(i, random(brightness),random(brightness),random(brightness));
//   pixels2.setPixelColor(i, random(brightness),random(brightness),random(brightness));
//   pixels3.setPixelColor(i, random(brightness),random(brightness),random(brightness));
//   pixels4.setPixelColor(i, random(brightness),random(brightness),random(brightness));
//   pixels5.setPixelColor(i, random(brightness),random(brightness),random(brightness));
//   pixels6.setPixelColor(i, random(brightness),random(brightness),random(brightness));
   pixels7.setPixelColor(i, random(brightness),random(brightness),random(brightness));
   if (i ==0){}
   else{
//   pixels1.setPixelColor(i-1,0,0,0);
//   pixels2.setPixelColor(i-1,0,0,0);
//   pixels3.setPixelColor(i-1,0,0,0);
//   pixels4.setPixelColor(i-1,0,0,0);
//   pixels5.setPixelColor(i-1,0,0,0);
//   pixels6.setPixelColor(i-1,0,0,0);
   pixels7.setPixelColor(i-1,0,0,0);}
   //pixels1.show();                         //  Update strip to match
   //pixels2.show();
   //pixels3.show();
   //pixels4.show();
   //pixels5.show();
   //pixels6.show();
   pixels7.show();
    //delay(wait);                           //  Pause for a moment
  
  
                 
}

int colorme = 0;
int loopady = 0;

void colorSweep3(uint32_t color, int wait) {

colorme = colors;
  
  for(int i=0; i<pixels7.numPixels()-loopy; i++) { // For each pixel in strip...
   // pixels.setPixelColor(i, color);         //  Set pixel's color (in RAM)
   
  
   if (i<volume){
  
   //pixels7.setPixelColor(i, random(brightness),random(brightness),random(brightness));}
   if (colorme == 0){

   pixels7.setPixelColor(i, 148,0,211);} //violet
   if (colorme == 1){

   pixels7.setPixelColor(i, 75,0,130);} //Purple
   if (colorme == 2){

   pixels7.setPixelColor(i, 0,0,255);} //Blue
   if (colorme == 3){

   pixels7.setPixelColor(i, 0,255,0);} //Green
   if (colorme == 4){

   pixels7.setPixelColor(i, 255,255,0);} //Yellow
   if (colorme == 5){

   pixels7.setPixelColor(i, 255,127,0);} //Orange
   if (colorme == 6){
    colorme = -1;
   pixels7.setPixelColor(i, 255,0,0);}} //Red

   else{
   pixels7.setPixelColor(i,0,0,0);}


 colorme++;
                          //  Pause for a moment
  } 

//
// if (direct==0){
//   pixels7.setPixelColor(pixels7.numPixels()+ loopLED++, random(brightness),random(brightness),random(brightness));
// }
// else{
// pixels7.setPixelColor(pixels7.numPixels()+ loopLED--, random(brightness),random(brightness),random(brightness));
// }
//if (loopLED>loopy){
//  direct=1;
//}
//if (loopLED<0){
//  direct=0;
//}

 for (int i=0; i<loopy;i++){
   pixels7.setPixelColor(pixels7.numPixels()-i, 0,0,0);
  
 }


if (direct ==0){
if (loopady<loopy){
pixels7.setPixelColor(pixels7.numPixels()-loopady, 148,0,255);}
loopady++;
if (loopady == loopy){
  direct = 1;
}
}


if (direct ==1){
if (loopady<loopy){
pixels7.setPixelColor(pixels7.numPixels()+loopady, random(brightness),random(brightness),random(brightness));}
loopady--;
if (loopady == 0){
  direct = 0;
}
}



// for (int i=0; i<loopy;i++){
//   pixels7.setPixelColor(pixels7.numPixels()-i, random(brightness),random(brightness),random(brightness));
//  
// }

   pixels7.show();
   delay(wait); 
 colors++;
 if (colors==7){
  colors = 0;
 }
                  
}


/////////////////////////////////////////////////////////////////////////////////////////////
int common = 0;
int sample = 0;
int audio = 0;



void codeForTask1( void * parameter ) {
   for (;;) {

   unsigned long startMillis= millis();  // Start of sample window
   unsigned int peakToPeak = 0;   // peak-to-peak level

   unsigned int signalMax = 0;
   unsigned int signalMin = 4095;

   // collect data for 50 mS
   while (millis() - startMillis < sampleWindow)
   {
      sample = analogRead(Audio_Pin);
      //Serial.println(sample);
      if (sample < 4095)  // toss out spurious readings
      {
         if (sample > signalMax)
         {
            signalMax = sample;  // save just the max levels
            //Serial.println(signalMax);
         }
         else if (sample < signalMin)
         {
            signalMin = sample;  // save just the min levels
            //Serial.println(signalMin);
         } }}
   peakToPeak = signalMax - signalMin;  // max - min = peak-peak amplitude
   Serial.println("PeaktoPeak");
   Serial.println(peakToPeak);
   double volts = (peakToPeak * 3.3) / 4095;  // convert to volts
   double volumeDouble = (peakToPeak * LED_COUNT) / 4095;  // convert to volts
   volume = round(volumeDouble);
   Serial.println(volts);
   if(volts>2){
   
      if (a>=10){a=0;}
      if (b>=20){b=10;}
      if (c>=30){c=20;}
      if (d>=40){d=30;}
      if (e>=50){e=40;}
      if (f>=60){f=50;}
 
   }
sample = analogRead(Pot_Pin);
Serial.println(sample);

sample = 4095;

double brightnessDouble = 255 * sample / 4095;
brightness = round(brightnessDouble);

   }}




void codeForTask2( void * parameter ) {
   for (;;) {
      Serial.print("                     Code is running on Core: ");Serial.println( xPortGetCoreID());
      //sum_numbers();
      Serial.print("Global var");
      Serial.print(common);
      common=common+1;
      for(int i=0; i<pixels7.numPixels(); i++) {
      colorSweep3(pixels7.Color(random(brightness),   random(brightness),   random(brightness)), pause); 
      //colorSweep2(pixels7.Color(random(brightness),   random(brightness),   random(brightness)), pause,b++); 
      //colorSweep2(pixels7.Color(random(brightness),   random(brightness),   random(brightness)), pause,c++); 
      //colorSweep2(pixels7.Color(random(brightness),   random(brightness),   random(brightness)),pause,d++); 
      //colorSweep2(pixels7.Color(random(brightness),   random(brightness),   random(brightness)), pause,e++); 
      //colorSweep2(pixels7.Color(random(brightness),   random(brightness),   random(brightness)), pause,f++); 
//      if (a==pixels1.numPixels()){a=0;}
//      if (b==pixels1.numPixels()){b=0;}
//      if (c==pixels1.numPixels()){c=0;}
//      if (d==pixels1.numPixels()){d=0;}
//      if (e==pixels1.numPixels()){e=0;}
//      if (f==pixels1.numPixels()){f=0;}}
      }

            sample = analogRead(Pot_Pin);
      Serial.println(sample);
      //delay(1000);

   }
}




TaskHandle_t Task1, Task2;




void setup() {
   Serial.begin(115200);


   //pixels1.begin(); // This initializes the NeoPixel library.
   //pixels2.begin();
   //pixels3.begin();
   //pixels4.begin();
   //pixels5.begin();
   //pixels6.begin();
   pixels7.begin();
randomSeed(analogRead(0));


   
   /*Syntax for assigning task to a core:
   xTaskCreatePinnedToCore(
                    coreTask,   // Function to implement the task
                    "coreTask", // Name of the task 
                    10000,      // Stack size in words 
                    NULL,       // Task input parameter 
                    0,          // Priority of the task 
                    NULL,       // Task handle. 
                    taskCore);  // Core where the task should run 
   */
   xTaskCreatePinnedToCore(    codeForTask1,    "FibonacciTask",    5000,      NULL,    2,    &Task1,    0);
   //delay(500);  // needed to start-up task1
   xTaskCreatePinnedToCore(    codeForTask2,    "SumTask",    5000,    NULL,    2,    &Task2,    1);
}





void loop() {
  
  
  }
