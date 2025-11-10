//week10_3_arduino_analogRead_A3
//把joystick的Y的線經由麵包板幫忙接到MakerUNO pin 3
//不能接其他的因為要接有小蟲符號的代表analog訊號
void setup() {
  pinMode(2,INPUT_PULLUP);
  //pinMode(3,INPUT);//有小蟲符號代表analog訊號
  pinMode(8,OUTPUT);//發出聲音

}

void loop() {
  int now=analogRead(3);
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
