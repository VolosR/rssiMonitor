#include <LilyGo_AMOLED.h>
#include <LV_Helper.h>
#include <WiFi.h>
#include "ui.h"

LilyGo_Class amoled;
String ssid = "IGK20";
String password = "18072019";

void setup()
{
    Serial.begin(115200);
   

    //  * @note      Examples only apply to AMOLED 1.91 Plus
  //  bool rslt = amoled.beginAMOLED_191_SPI();
  bool rslt = amoled.begin();

    if (!rslt) {
        while (1) {
            Serial.println("The board model cannot be detected, please raise the Core Debug Level to an error");
            delay(1000);
        }
    }

   WiFi.mode(WIFI_MODE_STA); 
  Serial.println("Connecting to WIFI");
  WiFi.begin(ssid, password);  
   while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("CONNECTED :)");

    beginLvglHelper(amoled);
    amoled.setBrightness(160);
    ui_init();


   

}
int r=245;

int getSignalQuality(int rssi) {
    if (rssi >= -50) {
        return 0; // Excellent
    } else if (rssi >= -67) {
        return 1; // Good
    } else if (rssi >= -70) {
        return 2; // Fair
    } else if (rssi >= -80) {
        return 3; // Weak
    } else if (rssi >= -90) {
        return 4; // Poor
    } else {
        return 5; // Very Poor
    }
}

bool isWiFiConnected() {
    return WiFi.status() == WL_CONNECTED;
}

void loop()
{
  
      
       lv_label_set_text(ui_batVoltage, String(WiFi.RSSI()).c_str());
       lv_label_set_text(ui_iplbl, WiFi.localIP().toString().c_str());
       lv_label_set_text(ui_gatewaylbl, WiFi.gatewayIP().toString().c_str());
       lv_label_set_text(ui_maclbl, String(WiFi.macAddress()).c_str());
       lv_label_set_text(ui_subnetlbl, WiFi.subnetMask().toString().c_str());
       
      lv_obj_set_pos(ui_Panel4, -36, -23+(getSignalQuality(WiFi.RSSI())*24));

          if (isWiFiConnected()) {
            lv_label_set_text(ui_statusLBL, "CONNECTED");
          } else {
            lv_label_set_text(ui_statusLBL, "DISCONNECTED");
           }

    lv_task_handler();
    delay(600);
}
