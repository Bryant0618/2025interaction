//week06_3_Example_Analysis_PitchDetection
//想要把聲音中最重要的頻率找出來,使用PitchDetectior物件



import processing.sound.*;
SoundFile sound;//要把beat.mp3讀進來
PitchDetector pitchDetector;//宣告PitchDetectior物件變數
int i;

void setup() {
  size(640, 320);
  background(0);

  sound = new SoundFile(this, "beat.mp3");//把beat.mp3讀進來
  sound.loop();
  pitchDetector = new PitchDetector(this);//新增 初始化PitchDetectior物件
  // capture audio input
  pitchDetector.input(new AudioIn(this, 0));//原本程式是用Audio
}

void draw() {
  // clear column
  noStroke();
  fill(color(0));
  rect(i, 0, 1, height);

  // the array version of analyze() returns the detected pitch as well
  // as the confidence level in the correctness of that pitch
  float[] pitchAndConfidence = new float[2];
  pitchDetector.analyze(pitchAndConfidence);

  // don't draw measurements when there is absolutely 0 confidence in them
  if (pitchAndConfidence[1] > 0) {
    // draw all others: map the range of a human whistle (~40 - 2000Hz) to the height
    // of the sketch, and color the dot according to the confidence in this measurement
    fill(lerpColor(color(255, 0, 0), color(0, 255, 0), pitchAndConfidence[1]));

    circle(i, int(map(pitchAndConfidence[0], 2000, 40, 0, height)), 2);
  }

  i = (i+1) % width;
}
