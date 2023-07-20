# 矩阵键盘模块V2.0

## 概述

触摸键盘模块是通过 TTP229芯片驱动，共16个触摸键， TTP229芯片是一款使用电容感应式原理设计的触摸芯片。此芯片内建稳压电路供触摸传感器使用，稳定的触摸效果可以应用在各种不同应用上,人体触摸面板可以通过非导电性绝缘材料连接，主要应用是以取代机械开关或按钮,此芯片可以独立支持8个触摸键或16个触摸键. 模块使用IIC通讯。

## 模块图

(./doc/picture/ZH/)

## 原理图

(./doc/picture/ZH/)

## 模块参数

- 供电电压:5V
- 两线串行接口
- 连接方式：PH2.0 4PIN防反接线
- 模块尺寸:56*70mm
- 安装方式:M4螺钉兼容乐高插孔固定

| G      | GND地线|
| :----- | :-------: |
| V    | VCC|
| SCL   | 时钟引脚|
| SDA   | 数据引脚|

## 模块尺寸

(./doc/picture/ZH/)

## Arduino应用场景

### Arduino 示例程序

[下载Arduino库](https://github.com/emakefun-arduino-library/emakefun_matrix_keyboard/archive/refs/tags/latest.zip),包含Arduino库文件和示例代码

### Arduino 库使用文档

[说明文档](https://github.com/emakefun-arduino-library/emakefun_matrix_keyboard)

### Arduino 库示例程序

[示例程序](https://emakefun-arduino-library.github.io/emakefun_matrix_keyboard/get_touched_key_8ino-example.html)
