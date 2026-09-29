#include "MAX6675.h"
#include <TFT_eSPI.h>

int thermoCS  = 26;
int thermoSO  = 27;
int thermoSCK = 25;

MAX6675 thermocouple(thermoCS, thermoSO, thermoSCK);
TFT_eSPI tft = TFT_eSPI();

void setup()
{
    Serial.begin(115200);

    thermocouple.begin();

    tft.init();
    tft.setRotation(1);

    pinMode(4, OUTPUT);
    digitalWrite(4, HIGH);

    tft.fillScreen(TFT_BLACK);

    tft.setTextColor(TFT_WHITE);
    tft.setTextSize(3);
}

void loop()
{
    uint8_t status = thermocouple.read();

    if (status == 0)
    {
        float temperatureC = thermocouple.getCelsius();
        // float temperatureF = thermocouple.getFahrenheit();

        Serial.print("Temperature: ");
        Serial.print(temperatureC, 1);
        Serial.println(" C");
        // Serial.print(temperatureF, 1);
        // Serial.println(" F");

        tft.fillRect(0, 40, 240, 50, TFT_BLACK);

        tft.setCursor(30, 50);

        tft.print(temperatureC, 1);
        tft.print(" C");
        // tft.print(temperatureF, 1);
        // tft.print(" F");
    }

    delay(1000);
}
