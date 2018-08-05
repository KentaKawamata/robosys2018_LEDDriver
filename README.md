# robosys2018 LED課題

[ロボットシステム学2018第8回](https://github.com/ryuichiueda/robosys2018/blob/master/06.md)の内容より

### 動作環境

|||
|:--:|:--:|
|Raspberry Pi|Raspberry Pi Model 3B+|
|OS| Ubuntu16.04|
|kernel|Linux ubuntu 4.14.58-v7+|

Raspberry Piのimageは[齋藤篤志さんのブログ](https://www.asrobot.me/entry/2018/07/11/001603/)の「アップグレード & ROS Kinetic & カーネルコンパイル済み」を利用


## 動作手順

### デバイスドライバのインストール

デバイスドライバのコンパイルからインストールまで一括して行うbashファイル：`installDriver.sh`

```
$ bash installDriver.sh
```

コマンドで行う場合
```
$ make -j1
$ sudo insmod myled.ko
$ sudo chmod  666 /dev/myled0
```

### ログの確認
```
$ sudo tail /var/log/syslog
```

### デバイスドライバのアンインストール
```
$ sudo rmmod myled
```
