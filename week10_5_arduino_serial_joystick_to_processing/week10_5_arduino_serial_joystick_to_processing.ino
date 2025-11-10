//week10_5_arduino_serial_joystick_to_processing
//修改自week10_4_arduino_serial_monitor_joystick_to_processing
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);//發出聲音

}

void loop() {
  delay(30);//改慢一點才不會太粗糙 1000Hz/Processing每秒60次
  int now = analogRead(A3)/4;//要除以4才能順利由Serial.write()送出
  Serial.write(now);//把0-255的數值送出去
  if(now>200)tone(8,784,100);
  if(now<50)tone(8,523,100);

}
