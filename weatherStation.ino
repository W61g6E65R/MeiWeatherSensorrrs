
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_BME280.h>
#include <Adafruit_Sensor.h>
#include <time.h>

float temperature = 0;
float humidity = 0;
float pressure = 0;

Adafruit_BME280 bme;

void setup() {
  Serial.begin(9600);
  Wire.begin(32,33);
  if (!bme.begin(0x76)) {
    Serial.println("Problem mit dem BME280");
  }
  
}

void loop() {


  temperature = bme.readTemperature();
  humidity = bme.readHumidity();
  pressure = bme.readPressure() / 100;
  

  delay(3000);


}
