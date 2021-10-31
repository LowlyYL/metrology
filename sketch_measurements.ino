#include <OneWire.h>// библиотека для работы с протоколом 1-Wire
#include <DallasTemperature.h>// библиотека для работы с датчиком ds18b20

DeviceAddress Term01 = {0x28, 0x48, 0x14, 0xC0, 0x0B, 0x00, 0x00, 0x51};//присваиваем переменной адрес датчика
DeviceAddress Term02 = {0x28, 0xE5, 0x95, 0xBF, 0x0B, 0x00, 0x00, 0x73};
DeviceAddress Term03 = {0x28, 0x4E, 0xC5, 0xC2, 0x0B, 0x00, 0x00, 0x77};
DeviceAddress Term04 = {0x28, 0x58, 0xC5, 0xBF, 0x0B, 0x00, 0x00, 0xAB};

OneWire oneWire(4);// создаём объект для работы с библиотекой OneWire
DallasTemperature sensors(&oneWire);// создадим объект для работы с библиотекой DallasTemperature

 void setup(){
Serial.begin(9600);// инициализируем работу Serial-порта
sensors.begin(); // начинаем работу с датчиком
for (int index=1; index<=10; index++)// цикл для вывода 10 запросов
{
Serial.println("New loop");//вывод надписи о новом ряду температур
sensors.requestTemperatures();// отправляем запрос на измерение температуры
Serial.print("Term01: ");// выводим температуру в Serial-порт
Serial.println(sensors.getTempC(Term01));
Serial.print("Term02: ");
Serial.println(sensors.getTempC(Term02));
Serial.print("Term03: ");
Serial.println(sensors.getTempC(Term03));
Serial.print("Term04: ");
Serial.println(sensors.getTempC(Term04));
delay(5000);// 5-и секундный интервал
}
}

void loop(){

}
#include <OneWire.h>// библиотека для работы с протоколом 1-Wire
#include <DallasTemperature.h>// библиотека для работы с датчиком ds18b20
DeviceAddress Term01 = {0x28, 0x48, 0x14, 0xC0, 0x0B, 0x00, 0x00, 0x51};//присваиваем переменной адрес датчика

DeviceAddress Term02 = {0x28, 0xE5, 0x95, 0xBF, 0x0B, 0x00, 0x00, 0x73};
DeviceAddress Term03 = {0x28, 0x4E, 0xC5, 0xC2, 0x0B, 0x00, 0x00, 0x77};
DeviceAddress Term04 = {0x28, 0x58, 0xC5, 0xBF, 0x0B, 0x00, 0x00, 0xAB};
OneWire oneWire(4);// создаём объект для работы с библиотекой OneWire
DallasTemperature sensors(&oneWire);// создадим объект для работы с библиотекой DallasTemperature

 void setup(){
Serial.begin(9600);// инициализируем работу Serial-порта
sensors.begin(); // начинаем работу с датчиком
for (int index=1; index<=10; index++)// цикл для вывода 10 запросов
{
Serial.println("New loop");//вывод надписи о новом ряду температур
sensors.requestTemperatures();// отправляем запрос на измерение температуры
Serial.print("Term01: ");// выводим температуру в Serial-порт
Serial.println(sensors.getTempC(Term01));
Serial.print("Term02: ");
Serial.println(sensors.getTempC(Term02));
Serial.print("Term03: ");
Serial.println(sensors.getTempC(Term03));
Serial.print("Term04: ");
Serial.println(sensors.getTempC(Term04));
delay(5000);// 5-и секундный интервал
}
}

void loop(){

}
