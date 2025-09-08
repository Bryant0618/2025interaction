int x = 200, y = 250;  // 矩形初始位置
int px, py;            // 儲存之前的滑鼠位置

void setup() {
  size(500, 500);
}

void draw() {
  background(#FFFFAA);
  rect(x, y, 100, 50);
}

void mouseDragged() {
  // 只有當滑鼠在矩形內時才開始拖曳
  if (mousePressed &&
      mouseX > x && mouseX < x + 100 &&
      mouseY > y && mouseY < y + 50) {
        
    x += mouseX - pmouseX;
    y += mouseY - pmouseY;
  }
}
