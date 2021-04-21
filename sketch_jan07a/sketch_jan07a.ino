#include <JoatsyJashoSegment.h>

JoatsyJashoSegment segment(MODUL_1DOT5_INCHI, 8, 7, 4, 0.1);

void setup() {
  // put your setup code here, to run once:
  segment.clear();
  delay(1000);
  //segment.displaytest(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  segment.displaytest_number(1);
}
