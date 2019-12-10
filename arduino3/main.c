int e = 13;
void setup() {
    // put your setup code here, to run once:
    u(e,OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    for(int i=0;i<3;i++){
        digitalWrite(e,HIGH);
        delay(200);
        digitalWrite(e,LOW);
        delay(200);
    }
    for(int i=0;i<3;i++){
        digitalWrite(e,HIGH);
        delay(2000);
        digitalWrite(e,LOW);
        delay(2000);
    }
}
