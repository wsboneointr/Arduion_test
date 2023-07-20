/**
 * @example get_touched_key.ino
 * @brief 获取当前的按键值并打印
 */

// 包含头文件matrix_keyboard.h
#include "matrix_keyboard.h"

MatrixKeyboard key_board;

void setup() {
  Serial.begin(115200);
  key_board.Setup();  // 在setup函数内调用MatrixKeyboard::Setup();
  Serial.println("setup done");
}

void loop() {
  const char key = key_board.GetTouchedKey();  // 获取当前按下的按键值

  // 如果当前按键值不为'\0'则打印出按键值
  if (key != '\0') {
    //    Serial.println(key);

    // 可以对不同的按键值分别处理
    switch (key) {
      case '1':
        Serial.println(1);
        // do something
        break;
      case '2':
        Serial.println(2);
        // do something
        break;
      case '3':
        Serial.println(3);
        // do something
        break;
      case 'A':
        Serial.println("A");
        // do something
        break;
      case '4':
        Serial.println(4);
        // do something
        break;
      case '5':
        Serial.println(5);
        // do something
        break;
      case '6':
        Serial.println(6);
        // do something
        break;
      case '7':
        Serial.println(7);
        // do something
        break;
      case '8':
        Serial.println(8);
        // do something
        break;
      case '9':
        Serial.println(9);
        // do something
        break;
      case 'C':
        Serial.println("C");
        // do something
        break;
      case '*':
        Serial.println("*");
        // do something
        break;
      case '0':
        Serial.println(0);
        // do something
        break;
      case '#':
        Serial.println("#");
        // do something
        break;
      case 'B':
        Serial.println("B");
        // do something
        break;
      case 'D':
        Serial.println("D");
        // do something
        break;
      default:
        // do nothing
        break;
    }
  }
}