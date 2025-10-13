//File-Preference字形改大
//Sketch-Library-ManageLibraries,找Sound安裝
//File-Example-Libraries核心函式庫-Sound-soundfile-SimplePlayback

import processing.sound.*;//使用聲音的外掛模組
SoundFile sound;//宣告SoundFile物件變數
void setup() {
  size(500, 400);//視窗大小
  sound = new SoundFile(this, "beat.mp3");
  //把music.mp3拉進程式裡
  sound.play();
}
void draw(){

}
