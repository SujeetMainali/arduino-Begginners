
int redPin = 3;
int greenPin = 5;
int bluePin = 6;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
 setColor(255, 0, 0); // Red Color
  delay(50);
  setColor(0, 255, 0); // Green Color
  delay(50);
  setColor(0, 0, 255); // Blue Color
  delay(50);
  setColor(255, 255, 255); // White Color
  delay(50);
  setColor(255,20,147);
  delay(50);
  setColor(170, 0, 255); // Purple Color
  delay(50);
//  setColor(51, 255, 255); 
//  delay(50);
//  setColor(1, 1, 1); 
//  delay(50);
//  setColor(128, 0, 0);
//delay(50);
//setColor(139, 0, 0);
//delay(50);
//setColor(165, 42, 42);
//delay(50);
//// firebrick  #B22222
//setColor(178, 34, 34);
//delay(50);
//// crimson  #DC143C 
//setColor(220, 20, 60);
//delay(50);
//// red  #FF0000 
//setColor(255, 0, 0);
//delay(50);
//// tomato #FF6347 
//setColor(255, 99, 71);
//delay(50);
//// coral  #FF7F50 
//setColor(255, 127, 80);
//delay(50);
//// indian red #CD5C5C 
//setColor(205, 92, 92);
//delay(50);
//// light coral  #F08080 
//setColor(240, 128, 128);
//delay(50);
//// dark salmon  #E9967A 
//setColor(233, 150, 122);
//delay(50);
//// salmon #FA8072 
//setColor(250, 128, 114);
//delay(50);
//// light salmon #FFA07A 
//setColor(255, 160, 122);
//delay(50);
//// orange red #FF4500 
//setColor(255, 69, 0);
//delay(50);
//// dark orange  #FF8C00 
//setColor(255, 140, 0);
//delay(50);
//// orange #FFA500 
//setColor(255, 165, 0);
//delay(50);
//// gold #FFD700 
//setColor(255, 215, 0);
//delay(50);
//// dark golden rod  #B8860B 
//setColor(184, 134, 11);
//    ; delay(50);
//// golden rod #DAA520 
//setColor(218, 165, 32);
//    ; delay(50);
//// pale golden rod  #EEE8AA 
//setColor(238, 232, 170);
//delay(50);
//// dark khaki #BDB76B 
//setColor(189, 183, 107);
//delay(50);
//// khaki  #F0E68C 
//setColor(240, 230, 140);
//delay(50);
//// olive  #808000 
//setColor(128, 128, 0);
//    ; delay(50);
//// yellow #FFFF00 
//setColor(255, 255, 0);
//    ; delay(50);
//// yellow green #9ACD32 
//setColor(154, 205, 50);
//    ; delay(50);
//// dark olive green #556B2F 
//setColor(85, 107, 47);
//    ; delay(50);
//// olive drab #6B8E23 
//setColor(107, 142, 35);
//    ; delay(50);
//// lawn green #7CFC00 
//setColor(124, 252, 0);
//    ; delay(50);
//// chart reuse  #7FFF00 
//setColor(127, 255, 0);
//    ; delay(50);
//// green yellow #ADFF2F
//setColor(173, 255, 47);
//    ; delay(50);
//// dark green #006400 
//setColor(0, 100, 0);
//delay(50);
//// green  #008000 
//setColor(0, 128, 0);
//delay(50);
//// forest green #228B22 
//   setColor (34, 139, 34);
//   delay(50);
//    // lime #00FF00 
//   setColor (0, 255, 0);
//   delay(50);
//    // lime green #32CD32 
//  setColor  (50, 205, 50);
//  delay(50);
//    // light green  #90EE90 
//  setColor  (144, 238, 144);
//  delay(50);
//    // pale green #98FB98 
//  setColor  (152, 251, 152);
//  delay(50);
//    // dark sea green #8FBC8F 
//   setColor (143, 188, 143);
//   delay(50);
//    // medium spring green  #00FA9A 
//   setColor (0, 250, 154);
//   delay(50);
//   setColor(0,255,127);
//   delay(50);
//    // sea green  #2E8B57 
//    setColor(46, 139, 87);
//    delay(50);
//    // medium aqua marine #66CDAA 
//    setColor(102, 205, 170);
//    delay(50);
//    // medium sea green #3CB371 
//   setColor (60, 179, 113);
//   delay(50);
//    // light sea green  #20B2AA 
//    setColor(32, 178, 170);
//    delay(50);
//    // dark slate gray  #2F4F4F 
//   setColor (47, 79, 79);
//   delay(50);
//    // teal #008080 
//   setColor (0, 128, 128);
//   delay(50);
//    // dark cyan  #008B8B 
//   setColor (0, 139, 139);
//   delay(50);
//    // aqua #00FFFF 
//  setColor  (0, 255, 255);
//  delay(50);
//    // cyan #00FFFF 
//   setColor (0, 255, 255);
//   delay(50);
//    // light cyan #E0FFFF 
//   setColor (224, 255, 255);
//   delay(50);
//    // dark turquoise #00CED1
//   setColor (0, 206, 209);
//   delay(50);
//    // turquoise  #40E0D0
//  setColor  (64, 224, 208);
//  delay(50);
//    // medium turquoise #48D1CC 
//  setColor  (72, 209, 204);
//  delay(50);
//    // pale turquoise #AFEEEE 
//   setColor (175, 238, 238);
//   delay(50);
//    // aqua marine  #7FFFD4 
//  setColor  (127, 255, 212);
//  delay(50);
//    // powder blue  #B0E0E6 
//   setColor (176, 224, 230);
//   delay(50);
//    // cadet blue #5F9EA0 
//   setColor (95, 158, 160);
//   delay(50);
//    // steel blue #4682B4 
//  setColor  (70, 130, 180);
//  delay(50);
//    // corn flower blue #6495ED 
//   setColor (100, 149, 237);
//   delay(50);
//    // deep sky blue  #00BFFF 
//  setColor  (0, 191, 255);
//  delay(50);
//    // dodger blue  #1E90FF 
//  setColor  (30, 144, 255);
//  delay(50);
//    // light blue #ADD8E6 
//  setColor  (173, 216, 230);
//  delay(50);
//    // sky blue #87CEEB (135,206,235)
//    // light sky blue #87CEFA
//  setColor  (135, 206, 250);
//  delay(50);
//    // midnight blue  #191970 
//  setColor  (25, 25, 112);
//  delay(50);
//    // navy #000080
//  setColor  (0, 0, 128);
//  delay(50);
//    // dark blue  #00008B 
//   setColor (0, 0, 139);
//   delay(50);
//    // medium blue  #0000CD 
// setColor  (0, 0, 205);
// delay(50);
//    // blue #0000FF 
//  setColor  (0, 0, 255);
//  delay(50);
//    // royal blue #4169E1
//  setColor  (65, 105, 225);
//  delay(50);
//    // blue violet  #8A2BE2
// setColor   (138, 43, 226);
// delay(50);
//    // indigo #4B0082 
// setColor   (75, 0, 130);
// delay(50);
//    // dark slate blue  #483D8B 
// setColor   (72, 61, 139);
// delay(50);
//    // slate blue #6A5ACD 
//  setColor  (106, 90, 205);
//  delay(50);
//    // medium slate blue  #7B68EE 
//  setColor  (123, 104, 238);
//  delay(50);
//    // medium purple  #9370DB 
//  setColor  (147, 112, 219);
//  delay(50);
//    // dark magenta #8B008B 
//  setColor  (139, 0, 139);
//  delay(50);
//    // dark violet  #9400D3 
//  setColor  (148, 0, 211);
//  delay(50);
//    // dark orchid  #9932CC
//  setColor  (153, 50, 204);
//  delay(50);
//    // medium orchid  #BA55D3
//  setColor  (186, 85, 211);
//  delay(50);
//    // purple #800080 
//    setColor(230, 230, 250);
//    delay(50);
//    setColor(255, 250, 240);
//    delay(50);
//    setColor(240, 248, 255);
//    delay(50);
//    setColor(248, 248, 255);
//    delay(50);
//    setColor(240, 255, 240);
//    delay(50);
//    setColor(255, 255, 240);
//    delay(50);
//    setColor(240, 255, 255);
//    delay(50);
//    setColor(255, 250, 250);
//    delay(50);
//  setColor  (0, 0, 0);
//    delay(50);
//    setColor(105, 105, 105);
//    delay(50);
//    setColor(128, 128, 128);
//    delay(50);
//    setColor(169, 169, 169);
//    delay(50);
//    setColor(192, 192, 192);
//    delay(50);
//    setColor(211, 211, 211);
//    delay(50);
//    setColor(220, 220, 220);
//    delay(50);
//    setColor(245, 245, 245);
//    delay(50);
//    setColor(255, 255, 255);
//    delay(50);

}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
