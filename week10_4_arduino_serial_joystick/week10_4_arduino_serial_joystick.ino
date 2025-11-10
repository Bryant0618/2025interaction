//week10_4_arduino_serial_monitor_joystick_to_processing
//修改自week10_3_arduino_analogRead_A3
//把joystick的Y的線經由麵包板幫忙接到MakerUNO另一邊的A3
//不能接其他的因為要接有小蟲符號的代表analog訊號
void setup() {
  Serial.begin(9600);//開啟USB傳輸
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);//發出聲音

}

void loop() {//一秒鐘會跑1000Hz太快了要慢一點點才行
  delay(100);//慢一點避免Processing來不及處理眼睛看不到
  int now=analogRead(3);
  Serial.println(now);
//想利用Serial Monitor來看看會送出什麼訊號

  if(now>800){
    tone(8,523,100);//發出523的Do
    delay(100);//變高
    tone(8,784,100);//發出784的So
    delay(200);//等久一點
  }
  else if(now<200){ //變低
    tone(8,784,100);//發出784的So
    delay(100);
    tone(8,523,100);//發出784的So
    delay(100);
  }
}
