/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: iGPSArduino_fakeinput.ino

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 18 Jul 2018

* MODIFIED: Thu 19 Jul 2018 01:04:33 PM EDT

* CREATED BY: Isaac Perper 

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

int led = 13;
unsigned int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  String out = "$ 1 | 2 | 3 |" + String(counter++) + "\n";
  Serial.print(out);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
}
