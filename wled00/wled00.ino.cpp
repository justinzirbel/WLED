# 1 "C:\\Users\\justin\\AppData\\Local\\Temp\\tmpqkqaurg4"
#include <Arduino.h>
# 1 "D:/WLEDGit/WLED/wled00/wled00.ino"
# 13 "D:/WLEDGit/WLED/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "D:/WLEDGit/WLED/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}