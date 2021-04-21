#include <JoatsyJashoSegment.h>

JoatsyJashoSegment segment(MODUL_1DOT5_INCHI, 8, 7, 24, 0.1);

void setup() {
  // put your setup code here, to run once:
  segment.clear();
  delay(1000);

  show();
  segment.displaydata();
  delay(3000);
  next();
  segment.displaydata();
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void show() {
  byte j = 0;
  for(byte i=0; i < 24; i++) {
    segment.build(i, j);
    j++;
    if(j >= 10) {
      j = 0;
    }
  }
}

void next() {
  int j = 3;
  for(int i=0; i < 24; i++) {
    segment.build(i, j);
    j++;
    if(j >= 10) {
      j = 0;
    }
  }
}
