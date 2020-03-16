# Arduino練習1

### Hello World

```c
void setup(){
    Serial.begin(9600); //Baud Rate
}

void loop(){
    Serial.println("Hello World!");
}

```


### Hello World

```c
int val;
void setup(){
    Serial.begin(9600);
}

void loop(){
    
    val=Serial.read();
    if(val=='R'){
        Serial.println("Hello World!")
    }

    }
```

### Blink

```c
int ledpin=13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledpin, OUTPUT);
}


void loop() {
  digitalWrite(ledpin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledpin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

```

### 溫溼度感測器

需事先安裝dht11程式庫(SimpleDHT)
```c
#include <SimpleDHT.h>
int pinDHT11 = 5;  //接在GPIO5
SimpleDHT11 dht11;
 
void setup() {
   Serial.begin(9600);
}
 
void loop() {
   byte temperature = 0;
   byte humidity = 0;
   int err = SimpleDHTErrSuccess;
   if ((err = dht11.read(pinDHT11, &temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
     Serial.print("Read DHT11 failed, err=");
     Serial.println(err);
     delay(1000);
     return;
   }
   
   Serial.print("Humidity = ");   
   Serial.print((int)humidity);   
   Serial.print("% , ");   
   Serial.print("temperature = ");   
   Serial.print((int)temperature);   
   Serial.println("C ");   
 
   delay(2000);  //每2秒顯示一次
}


```

### 空氣品質檢測
MQ-135空氣品質檢測/有害氣體感測器模組
```c
int sensorValue;
int digitalValue;

void setup()
{
  Serial.begin(9600);      // sets the serial port to 9600
  pinMode( 0, INPUT);
}

void loop()

{
  sensorValue = analogRead(0);       // read analog input pin 0
  digitalValue = digitalRead(0); 
  Serial.println(sensorValue, DEC);  // prints the value read  (DEC代表十進位表示)
  Serial.println(digitalValue, DEC);
  delay(2000);                        // wait 100ms for next reading
}
```