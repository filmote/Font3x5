#include <Arduboy2.h>
#include "src/fonts/Font3x5.h"

Arduboy2Base arduboy;
Font3x5 font3x5 = Font3x5();

void setup() {

  arduboy.boot();

}

void loop() {

  if (!(arduboy.nextFrame())) return;

  arduboy.clear();
  font3x5.setCursor(12, 12);
  font3x5.print(F("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
  font3x5.print(F("\nabcdefghijklmnopqrstuvwxyz"));
  font3x5.print(F("\n0123456789"));
  font3x5.print(F("\n!."));

  arduboy.display();

}