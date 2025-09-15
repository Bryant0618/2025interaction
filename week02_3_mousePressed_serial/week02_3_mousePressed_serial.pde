import processing.serial.*;//用USB的Serial
Serial myPort;//宣告USB的Serial變數myPort
void mousePressed(){
  myPort.write(' ');//mouse按下去就送''出去
}
void setup(){
  size(400,400);
  myPort=new Serial(this, "COM4",9600);
}//剛剛設定多少就多少
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
