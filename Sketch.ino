const int button=2, led=8;
void setup(){ pinMode(button,INPUT_PULLUP); pinMode(led,OUTPUT); }
void loop(){
 if(digitalRead(button)==lowByte(LOW)) digitalWrite(led,LOW);
 else digitalWrite(led,HIGH);
}
