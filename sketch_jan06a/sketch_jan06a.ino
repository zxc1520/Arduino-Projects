#include ‹joatsyjashosegment.h›
 
JoatsyJashoSegment segment(MODUL_1DOT5_INCHI, 8, 7, 4, 0.1);
 
void setup() {
  segment.clear();
  delay(1000);
  segment.displaytest(100);
  delay(1000);
  segment.displaytest_number(1);
  delay(2000);
  segment.build(0,8);
  segment.build(1,7);
  segment.build(2,6);
  segment.build(3,5);
  segment.displaydata();
}
 
void loop() {
 
}
