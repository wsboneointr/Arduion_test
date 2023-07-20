# TM1637时钟数码管显示模块V2.0

## 概述

4位7段数码管由一个12管脚的4位7段共阳极数码管和一个控制芯片TM1637构成。该模块采用沉金工艺，外观更加美观，同时采用防插反接口，操作更加安全，插口一边有大写字母I表示该模块采用IIC协议通信，另一边是数码管的图标标志。此产品可以应用在时间显示，跑表显示以及其他需要显示数字的设备上。

## 模块图

(./doc/picture/ZH/)

## 原理图

(./doc/picture/ZH/)

## 模块参数

- 1.供电电压:5V
- 2.连接方式:4PIN防反接杜邦线
- 3.模块尺寸:4*2.1cm
- 4.安装方式:M3螺钉兼容乐高插孔固定

| G      | GND地线|
| :----- | :-------: |
| V    | 5V电源引脚|
| DIO   | 数据引脚|
| CLK   | 时钟引脚|

## 模块尺寸

(./doc/picture/ZH/)

## Arduino应用场景

[Arduino库和示例程序下载链接](https://github.com/emakefun-arduino-library/emakefun_digit_display/archive/refs/tags/release.zip)

### Arduino 库使用文档

[说明文档](https://github.com/emakefun-arduino-library/emakefun_digit_display)

### Arduino 库示例程序

[显示整数](https://emakefun-arduino-library.github.io/emakefun_digit_display/show_integer_number_8ino-example.html)

[显示小数](https://emakefun-arduino-library.github.io/emakefun_digit_display/show_decimal_number_8ino-example.html)

[按位置显示数字](https://emakefun-arduino-library.github.io/emakefun_digit_display/show_digit_number_8ino-example.html)

[显示/隐藏冒号](https://emakefun-arduino-library.github.io/emakefun_digit_display/show_colon_8ino-example.html)

[设置闪烁频率](https://emakefun-arduino-library.github.io/emakefun_digit_display/set_blink_rate_8ino-example.html)