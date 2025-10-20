//week07_3_arduino_blink_blink_blink_blink
//多差兩隻LED
//有一隻接GND一隻接10
//有一隻接GND一隻接11
//有一隻接GND一隻接12
//有一隻接GND一隻接13
void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);//把第12隻腳能送出資料OUTPUT
  pinMode(13, OUTPUT);//把第13隻腳能送出資料OUTPUT
}

void loop() {
 for(int i=10;i<=13;i++){
  digitalWrite(13, LOW);
  digitalWrite(i-1, LOW);
  digitalWrute(i, HIGH);
  delay(500);
 }
}