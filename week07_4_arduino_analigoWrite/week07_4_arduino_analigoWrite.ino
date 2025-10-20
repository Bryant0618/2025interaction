//week07_4_arduino_analigoWrite
void setup() {
  pinMode(11, OUTPUT);//第11隻腳有PWM功能可0-255輸出
}//這些特別的腳分別是3,5,6,9,10,11都可以控制亮暗程度
int a=0;
void loop() {
 analogWrite(11,a);
 a=(a+1) % 256;//會再亮一點點
 delay(10);//每0.01秒
}
