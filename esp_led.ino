

#include <Adafruit_NeoPixel.h>
 
#define LED_Pin 19 //use 33,32,27,26,25,19,18,14
#define Audio_Pin 35 // use 34 or 35
#define Pot_Pin 34 // use 34 or 35
#define LED_COUNT 50
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(LED_COUNT, LED_Pin, NEO_GRB + NEO_KHZ800);
 
const int sampleWindow = 50; // Sample window width in mS (50 mS = 20Hz)
unsigned int sample;
const int num_pixels = pixels.numPixels();
void setup() 
{
   Serial.begin(115200);
   pixels.begin(); // This initializes the NeoPixel library.
randomSeed(analogRead(0));
}


void loop() 
{
   unsigned long startMillis= millis();  // Start of sample window
   unsigned int peakToPeak = 0;   // peak-to-peak level

   unsigned int signalMax = 0;
   unsigned int signalMin = 4095;

   // collect data for 50 mS
   while (millis() - startMillis < sampleWindow)
   {
      sample = analogRead(Audio_Pin);
      if (sample < 4095)  // toss out spurious readings
      {
         if (sample > signalMax)
         {
            signalMax = sample;  // save just the max levels
         }
         else if (sample < signalMin)
         {
            signalMin = sample;  // save just the min levels
         }
      }
   }
   peakToPeak = signalMax - signalMin;  // max - min = peak-peak amplitude
   double volts = (peakToPeak * 3.3) / 4095;  // convert to volts

   Serial.println(volts);
   if(volts>2){
   colorSweep(pixels.Color(random(255),   random(255),   random(255)), 10);}
   
}




void colorSweep(uint32_t color, int wait) {
  for(int i=0; i<pixels.numPixels(); i++) { // For each pixel in strip...
   // pixels.setPixelColor(i, color);         //  Set pixel's color (in RAM)

   pixels.setPixelColor(i, random(255),random(255),random(255));
   if (i ==0){}
   else{
   pixels.setPixelColor(i-1,0,0,0);}
    pixels.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
  } 
  pixels.setPixelColor(num_pixels-1,0,0,0);
    pixels.show();
                  
}

























//  
//uint32_t chipId = 0;
//int x =0;
//void setup() {
//  Serial.begin(115200);
//}
//
//void loop() {
//  for(int i=0; i<17; i=i+8) {
//    chipId |= ((ESP.getEfuseMac() >> (40 - i)) & 0xff) << i;
//  }
//
//  Serial.printf("ESP32 Chip model = %s Rev %d\n", ESP.getChipModel(), ESP.getChipRevision());
//  Serial.printf("This chip has %d cores\n", ESP.getChipCores());
//  Serial.print("Chip ID: "); Serial.println(chipId);
//    Serial.print(x);
//  x++;
//  delay(3000);
//
//}
