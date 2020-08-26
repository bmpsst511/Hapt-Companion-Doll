#include <Adafruit_NeoPixel.h>
#define PIN D5  //接腳
#define MAX_LED 35  //LED的數量
Adafruit_NeoPixel strip = Adafruit_NeoPixel( MAX_LED, PIN, NEO_GRB + NEO_KHZ800 );  //NEO_GRB(顯示顏色是RGB)；NEO_RGB(顯示顏色是GRB)
int white = 255;
void turnoff()
{
  strip.setPixelColor(0, strip.Color(0, 0, 0));
  strip.setPixelColor(1, strip.Color(0, 0, 0));
  strip.setPixelColor(2, strip.Color(0, 0, 0));
  strip.setPixelColor(3, strip.Color(0, 0, 0));
  strip.setPixelColor(4, strip.Color(0, 0, 0));
  strip.setPixelColor(5, strip.Color(0, 0, 0));
  strip.setPixelColor(6, strip.Color(0, 0, 0));
  strip.setPixelColor(7, strip.Color(0, 0, 0));
  strip.setPixelColor(8, strip.Color(0, 0, 0));
  strip.setPixelColor(9, strip.Color(0, 0, 0));
  strip.setPixelColor(10, strip.Color(0, 0, 0));
  strip.setPixelColor(11, strip.Color(0, 0, 0));
  strip.setPixelColor(12, strip.Color(0, 0, 0));
  strip.setPixelColor(13, strip.Color(0, 0, 0));
  strip.setPixelColor(14, strip.Color(0, 0, 0));
  strip.setPixelColor(15, strip.Color(0, 0, 0));
  strip.setPixelColor(16, strip.Color(0, 0, 0));
  strip.setPixelColor(17, strip.Color(0, 0, 0));
  strip.setPixelColor(18, strip.Color(0, 0, 0));
  strip.setPixelColor(19, strip.Color(0, 0, 0));
  strip.setPixelColor(20, strip.Color(0, 0, 0));
  strip.setPixelColor(21, strip.Color(0, 0, 0));
  strip.setPixelColor(22, strip.Color(0, 0, 0));
  strip.setPixelColor(23, strip.Color(0, 0, 0));
  strip.setPixelColor(24, strip.Color(0, 0, 0));
  strip.setPixelColor(25, strip.Color(0, 0, 0));
  strip.setPixelColor(26, strip.Color(0, 0, 0));
  strip.setPixelColor(27, strip.Color(0, 0, 0));
  strip.setPixelColor(28, strip.Color(0, 0, 0));
  strip.setPixelColor(29, strip.Color(0, 0, 0));
  strip.setPixelColor(30, strip.Color(0, 0, 0));
  strip.setPixelColor(31, strip.Color(0, 0, 0));
  strip.setPixelColor(32, strip.Color(0, 0, 0));
  strip.setPixelColor(33, strip.Color(0, 0, 0));
  strip.setPixelColor(34, strip.Color(0, 0, 0));
  strip.setPixelColor(35, strip.Color(0, 0, 0));
  strip.show();
}

void Redlight()
{
  strip.setPixelColor(0, strip.Color(0, 250, 0));
  strip.setPixelColor(1, strip.Color(0, 250, 0));
  strip.setPixelColor(2, strip.Color(0, 250, 0));
  strip.setPixelColor(3, strip.Color(0, 250, 0));
  strip.setPixelColor(4, strip.Color(0, 250, 0));
  strip.setPixelColor(5, strip.Color(0, 250, 0));
  strip.setPixelColor(6, strip.Color(0, 250, 0));
  strip.setPixelColor(7, strip.Color(0, 250, 0));
  strip.setPixelColor(8, strip.Color(0, 250, 0));
  strip.setPixelColor(9, strip.Color(0, 250, 0));
  strip.setPixelColor(10, strip.Color(0, 250, 0));
  strip.setPixelColor(11, strip.Color(0, 250, 0));
  strip.setPixelColor(12, strip.Color(0, 250, 0));
  strip.setPixelColor(13, strip.Color(0, 250, 0));
  strip.setPixelColor(14, strip.Color(0, 250, 0));
  strip.setPixelColor(15, strip.Color(0, 250, 0));
  strip.setPixelColor(16, strip.Color(0, 250, 0));
  strip.setPixelColor(17, strip.Color(0, 250, 0));
  strip.setPixelColor(18, strip.Color(0, 250, 0));
  strip.setPixelColor(19, strip.Color(0, 250, 0));
  strip.setPixelColor(20, strip.Color(0, 250, 0));
  strip.setPixelColor(21, strip.Color(0, 250, 0));
  strip.setPixelColor(22, strip.Color(0, 250, 0));
  strip.setPixelColor(23, strip.Color(0, 250, 0));
  strip.setPixelColor(24, strip.Color(0, 250, 0));
  strip.setPixelColor(25, strip.Color(0, 250, 0));
  strip.setPixelColor(26, strip.Color(0, 250, 0));
  strip.setPixelColor(27, strip.Color(0, 250, 0));
  strip.setPixelColor(28, strip.Color(0, 250, 0));
  strip.setPixelColor(29, strip.Color(0, 250, 0));
  strip.setPixelColor(30, strip.Color(0, 250, 0));
  strip.setPixelColor(31, strip.Color(0, 250, 0));
  strip.setPixelColor(32, strip.Color(0, 250, 0));
  strip.setPixelColor(33, strip.Color(0, 250, 0));
  strip.setPixelColor(34, strip.Color(0, 250, 0));
  strip.setPixelColor(35, strip.Color(0, 250, 0));
  strip.show();
  }

  void Greenlight()
{
  strip.setPixelColor(0, strip.Color(250, 0, 0));
  strip.setPixelColor(1, strip.Color(250, 0, 0));
  strip.setPixelColor(2, strip.Color(250, 0, 0));
  strip.setPixelColor(3, strip.Color(250, 0, 0));
  strip.setPixelColor(4, strip.Color(250, 0, 0));
  strip.setPixelColor(5, strip.Color(250, 0, 0));
  strip.setPixelColor(6, strip.Color(250, 0, 0));
  strip.setPixelColor(7, strip.Color(250, 0, 0));
  strip.setPixelColor(8, strip.Color(250, 0, 0));
  strip.setPixelColor(9, strip.Color(250, 0, 0));
  strip.setPixelColor(10, strip.Color(250, 0, 0));
  strip.setPixelColor(11, strip.Color(250, 0, 0));
  strip.setPixelColor(12, strip.Color(250, 0, 0));
  strip.setPixelColor(13, strip.Color(250, 0, 0));
  strip.setPixelColor(14, strip.Color(250, 0, 0));
  strip.setPixelColor(15, strip.Color(250, 0, 0));
  strip.setPixelColor(16, strip.Color(250, 0, 0));
  strip.setPixelColor(17, strip.Color(250, 0, 0));
  strip.setPixelColor(18, strip.Color(250, 0, 0));
  strip.setPixelColor(19, strip.Color(250, 0, 0));
  strip.setPixelColor(20, strip.Color(250, 0, 0));
  strip.setPixelColor(21, strip.Color(250, 0, 0));
  strip.setPixelColor(22, strip.Color(250, 0, 0));
  strip.setPixelColor(23, strip.Color(250, 0, 0));
  strip.setPixelColor(24, strip.Color(250, 0, 0));
  strip.setPixelColor(25, strip.Color(250, 0, 0));
  strip.setPixelColor(26, strip.Color(250, 0, 0));
  strip.setPixelColor(27, strip.Color(250, 0, 0));
  strip.setPixelColor(28, strip.Color(250, 0, 0));
  strip.setPixelColor(29, strip.Color(250, 0, 0));
  strip.setPixelColor(30, strip.Color(250, 0, 0));
  strip.setPixelColor(31, strip.Color(250, 0, 0));
  strip.setPixelColor(32, strip.Color(250, 0, 0));
  strip.setPixelColor(33, strip.Color(250, 0, 0));
  strip.setPixelColor(34, strip.Color(250, 0, 0));
  strip.setPixelColor(35, strip.Color(250, 0, 0));
  strip.show();
  }

  void Bluelight()
{
  strip.setPixelColor(0, strip.Color(0, 0, 250));
  strip.setPixelColor(1, strip.Color(0, 0, 250));
  strip.setPixelColor(2, strip.Color(0, 0, 250));
  strip.setPixelColor(3, strip.Color(0, 0, 250));
  strip.setPixelColor(4, strip.Color(0, 0, 250));
  strip.setPixelColor(5, strip.Color(0, 0, 250));
  strip.setPixelColor(6, strip.Color(0, 0, 250));
  strip.setPixelColor(7, strip.Color(0, 0, 250));
  strip.setPixelColor(8, strip.Color(0, 0, 250));
  strip.setPixelColor(9, strip.Color(0, 0, 250));
  strip.setPixelColor(10, strip.Color(0, 0, 250));
  strip.setPixelColor(11, strip.Color(0, 0, 250));
  strip.setPixelColor(12, strip.Color(0, 0, 250));
  strip.setPixelColor(13, strip.Color(0, 0, 250));
  strip.setPixelColor(14, strip.Color(0, 0, 250));
  strip.setPixelColor(15, strip.Color(0, 0, 250));
  strip.setPixelColor(16, strip.Color(0, 0, 250));
  strip.setPixelColor(17, strip.Color(0, 0, 250));
  strip.setPixelColor(18, strip.Color(0, 0, 250));
  strip.setPixelColor(19, strip.Color(0, 0, 250));
  strip.setPixelColor(20, strip.Color(0, 0, 250));
  strip.setPixelColor(21, strip.Color(0, 0, 250));
  strip.setPixelColor(22, strip.Color(0, 0, 250));
  strip.setPixelColor(23, strip.Color(0, 0, 250));
  strip.setPixelColor(24, strip.Color(0, 0, 250));
  strip.setPixelColor(25, strip.Color(0, 0, 250));
  strip.setPixelColor(26, strip.Color(0, 0, 250));
  strip.setPixelColor(27, strip.Color(0, 0, 250));
  strip.setPixelColor(28, strip.Color(0, 0, 250));
  strip.setPixelColor(29, strip.Color(0, 0, 250));
  strip.setPixelColor(30, strip.Color(0, 0, 250));
  strip.setPixelColor(31, strip.Color(0, 0, 250));
  strip.setPixelColor(32, strip.Color(0, 0, 250));
  strip.setPixelColor(33, strip.Color(0, 0, 250));
  strip.setPixelColor(34, strip.Color(0, 0, 250));
  strip.setPixelColor(35, strip.Color(0, 0, 250));
  strip.show();
}

  void pinklight()
{
  strip.setPixelColor(0, strip.Color(white, white, white));
  strip.setPixelColor(1, strip.Color(white, white, white));
  strip.setPixelColor(2, strip.Color(white, white, white));
  strip.setPixelColor(3, strip.Color(white, white, white));
  strip.setPixelColor(4, strip.Color(white, white, white));
  strip.setPixelColor(5, strip.Color(white, white, white));
  strip.setPixelColor(6, strip.Color(white, white, white));
  strip.setPixelColor(7, strip.Color(white, white, white));
  strip.setPixelColor(8, strip.Color(white, white, white));
  strip.setPixelColor(9, strip.Color(white, white, white));
  strip.setPixelColor(10, strip.Color(white, white, white));
  strip.setPixelColor(11, strip.Color(white, white, white));
  strip.setPixelColor(12, strip.Color(white, white, white));
  strip.setPixelColor(13, strip.Color(white, white, white));
  strip.setPixelColor(14, strip.Color(white, white, white));
  strip.setPixelColor(15, strip.Color(white, white, white));
  strip.setPixelColor(16, strip.Color(white, white, white));
  strip.setPixelColor(17, strip.Color(white, white, white));
  strip.setPixelColor(18, strip.Color(white, white, white));
  strip.setPixelColor(19, strip.Color(white, white, white));
  strip.setPixelColor(20, strip.Color(white, white, white));
  strip.setPixelColor(21, strip.Color(white, white, white));
  strip.setPixelColor(22, strip.Color(white, white, white));
  strip.setPixelColor(23, strip.Color(white, white, white));
  strip.setPixelColor(24, strip.Color(white, white, white));
  strip.setPixelColor(25, strip.Color(white, white, white));
  strip.setPixelColor(26, strip.Color(white, white, white));
  strip.setPixelColor(27, strip.Color(white, white, white));
  strip.setPixelColor(28, strip.Color(white, white, white));
  strip.setPixelColor(29, strip.Color(white, white, white));
  strip.setPixelColor(30, strip.Color(white, white, white));
  strip.setPixelColor(31, strip.Color(white, white, white));
  strip.setPixelColor(32, strip.Color(white, white, white));
  strip.setPixelColor(33, strip.Color(white, white, white));
  strip.setPixelColor(34, strip.Color(white, white, white));
  strip.setPixelColor(35, strip.Color(white, white, white));
  strip.show();
}

  void dglight()
{
  strip.setPixelColor(0, strip.Color(155, 62, 12));
  strip.setPixelColor(1, strip.Color(155, 62, 12));
  strip.setPixelColor(2, strip.Color(155, 62, 12));
  strip.setPixelColor(3, strip.Color(155, 62, 12));
  strip.setPixelColor(4, strip.Color(155, 62, 12));
  strip.setPixelColor(5, strip.Color(155, 62, 12));
  strip.setPixelColor(6, strip.Color(155, 62, 12));
  strip.setPixelColor(7, strip.Color(155, 62, 12));
  strip.setPixelColor(8, strip.Color(155, 62, 12));
  strip.setPixelColor(9, strip.Color(155, 62, 12));
  strip.setPixelColor(10, strip.Color(155, 62, 12));
  strip.setPixelColor(11, strip.Color(155, 62, 12));
  strip.setPixelColor(12, strip.Color(155, 62, 12));
  strip.setPixelColor(13, strip.Color(155, 62, 12));
  strip.setPixelColor(14, strip.Color(155, 62, 12));
  strip.setPixelColor(15, strip.Color(155, 62, 12));
  strip.setPixelColor(16, strip.Color(155, 62, 12));
  strip.setPixelColor(17, strip.Color(155, 62, 12));
  strip.setPixelColor(18, strip.Color(155, 62, 12));
  strip.setPixelColor(19, strip.Color(155, 62, 12));
  strip.setPixelColor(20, strip.Color(155, 62, 12));
  strip.setPixelColor(21, strip.Color(155, 62, 12));
  strip.setPixelColor(22, strip.Color(155, 62, 12));
  strip.setPixelColor(23, strip.Color(155, 62, 12));
  strip.setPixelColor(24, strip.Color(155, 62, 12));
  strip.setPixelColor(25, strip.Color(155, 62, 12));
  strip.setPixelColor(26, strip.Color(155, 62, 12));
  strip.setPixelColor(27, strip.Color(155, 62, 12));
  strip.setPixelColor(28, strip.Color(155, 62, 12));
  strip.setPixelColor(29, strip.Color(155, 62, 12));
  strip.setPixelColor(30, strip.Color(155, 62, 12));
  strip.setPixelColor(31, strip.Color(155, 62, 12));
  strip.setPixelColor(32, strip.Color(155, 62, 12));
  strip.setPixelColor(33, strip.Color(155, 62, 12));
  strip.setPixelColor(34, strip.Color(155, 62, 12));
  strip.setPixelColor(35, strip.Color(155, 62, 12));
  strip.show();
}

  void purlight()
{
  strip.setPixelColor(0, strip.Color(56, 231, 220));
  strip.setPixelColor(1, strip.Color(56, 231, 220));
  strip.setPixelColor(2, strip.Color(56, 231, 220));
  strip.setPixelColor(3, strip.Color(56, 231, 220));
  strip.setPixelColor(4, strip.Color(56, 231, 220));
  strip.setPixelColor(5, strip.Color(56, 231, 220));
  strip.setPixelColor(6, strip.Color(56, 231, 220));
  strip.setPixelColor(7, strip.Color(56, 231, 220));
  strip.setPixelColor(8, strip.Color(56, 231, 220));
  strip.setPixelColor(9, strip.Color(56, 231, 220));
  strip.setPixelColor(10, strip.Color(56, 231, 220));
  strip.setPixelColor(11, strip.Color(56, 231, 220));
  strip.setPixelColor(12, strip.Color(56, 231, 220));
  strip.setPixelColor(13, strip.Color(56, 231, 220));
  strip.setPixelColor(14, strip.Color(56, 231, 220));
  strip.setPixelColor(15, strip.Color(56, 231, 220));
  strip.setPixelColor(16, strip.Color(56, 231, 220));
  strip.setPixelColor(17, strip.Color(56, 231, 220));
  strip.setPixelColor(18, strip.Color(56, 231, 220));
  strip.setPixelColor(19, strip.Color(56, 231, 220));
  strip.setPixelColor(20, strip.Color(56, 231, 220));
  strip.setPixelColor(21, strip.Color(56, 231, 220));
  strip.setPixelColor(22, strip.Color(56, 231, 220));
  strip.setPixelColor(23, strip.Color(56, 231, 220));
  strip.setPixelColor(24, strip.Color(56, 231, 220));
  strip.setPixelColor(25, strip.Color(56, 231, 220));
  strip.setPixelColor(26, strip.Color(56, 231, 220));
  strip.setPixelColor(27, strip.Color(56, 231, 220));
  strip.setPixelColor(28, strip.Color(56, 231, 220));
  strip.setPixelColor(29, strip.Color(56, 231, 220));
  strip.setPixelColor(30, strip.Color(56, 231, 220));
  strip.setPixelColor(31, strip.Color(56, 231, 220));
  strip.setPixelColor(32, strip.Color(56, 231, 220));
  strip.setPixelColor(33, strip.Color(56, 231, 220));
  strip.setPixelColor(34, strip.Color(56, 231, 220));
  strip.setPixelColor(35, strip.Color(56, 231, 220));
  strip.show();
}

  void yellowlight()
{
  strip.setPixelColor(0, strip.Color(228, 248, 27));
  strip.setPixelColor(1, strip.Color(228, 248, 27));
  strip.setPixelColor(2, strip.Color(228, 248, 27));
  strip.setPixelColor(3, strip.Color(228, 248, 27));
  strip.setPixelColor(4, strip.Color(228, 248, 27));
  strip.setPixelColor(5, strip.Color(228, 248, 27));
  strip.setPixelColor(6, strip.Color(228, 248, 27));
  strip.setPixelColor(7, strip.Color(228, 248, 27));
  strip.setPixelColor(8, strip.Color(228, 248, 27));
  strip.setPixelColor(9, strip.Color(228, 248, 27));
  strip.setPixelColor(10, strip.Color(228, 248, 27));
  strip.setPixelColor(11, strip.Color(228, 248, 27));
  strip.setPixelColor(12, strip.Color(228, 248, 27));
  strip.setPixelColor(13, strip.Color(228, 248, 27));
  strip.setPixelColor(14, strip.Color(228, 248, 27));
  strip.setPixelColor(15, strip.Color(228, 248, 27));
  strip.setPixelColor(16, strip.Color(228, 248, 27));
  strip.setPixelColor(17, strip.Color(228, 248, 27));
  strip.setPixelColor(18, strip.Color(228, 248, 27));
  strip.setPixelColor(19, strip.Color(228, 248, 27));
  strip.setPixelColor(20, strip.Color(228, 248, 27));
  strip.setPixelColor(21, strip.Color(228, 248, 27));
  strip.setPixelColor(22, strip.Color(228, 248, 27));
  strip.setPixelColor(23, strip.Color(228, 248, 27));
  strip.setPixelColor(24, strip.Color(228, 248, 27));
  strip.setPixelColor(25, strip.Color(228, 248, 27));
  strip.setPixelColor(26, strip.Color(228, 248, 27));
  strip.setPixelColor(27, strip.Color(228, 248, 27));
  strip.setPixelColor(28, strip.Color(228, 248, 27));
  strip.setPixelColor(29, strip.Color(228, 248, 27));
  strip.setPixelColor(30, strip.Color(228, 248, 27));
  strip.setPixelColor(31, strip.Color(228, 248, 27));
  strip.setPixelColor(32, strip.Color(228, 248, 27));
  strip.setPixelColor(33, strip.Color(228, 248, 27));
  strip.setPixelColor(34, strip.Color(228, 248, 27));
  strip.setPixelColor(35, strip.Color(228, 248, 27));
  strip.show();
}
