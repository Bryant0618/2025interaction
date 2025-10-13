//week06_4_arduino_slow_jogging
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8,780,100);//自己決定Hz pin8,780Hz,60ms
  delay(333);//等0.33秒換下個音
  tone(8,320,100);//自己決定Hz pin8,320Hz,60ms
  delay(333);//等0.33秒換下個音
}//每秒會叫3聲 60秒會叫180聲 180bpm
