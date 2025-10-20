//week07_5_arduino_analigoWrite_rgb_led
void setup() {
  //RGB LED 最長那根是接地 GND
  pinMode(6, OUTPUT);//藍色(GND旁邊那個)
  pinMode(5, OUTPUT);//綠色(最外面)
  //有PWM功能可0-255輸出
}

void loop(){
  analogWrite(6,0);//藍色關掉
  analogWrite(3,255);
  delay(500);
  analogWrite(3,0);
  analogWrite(5,255);
  delay(500);
  analogWrite(5,0);
  analogWrite(6,255);
  delay(500);
}
