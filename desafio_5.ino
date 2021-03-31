const int pinoA = A0;
const int ledG = 2;
const int ledY = 4;
const int ledO = 7;
const int ledR = 8;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledO, OUTPUT);
  pinMode(ledR, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    Serial.println("-------");
    int leitura = analogRead(pinoA);
    Serial.println(leitura);
  
    if (leitura >= 0 && leitura <= 225) {
        digitalWrite(ledG, HIGH);
        delay(200);
    
    } else {
        digitalWrite(ledG, LOW);
    }
    
    if (leitura >= 256 && leitura <= 511) {
        digitalWrite(ledY, HIGH);
        delay(200);
    
    } else {
        digitalWrite(ledY, LOW);
    }
  
    if (leitura  >= 512 && leitura <= 800) {
        digitalWrite(ledO, HIGH);
        delay(200);
    
    } else {
        digitalWrite(ledO, LOW);
    }

    if (leitura >=800) {
        digitalWrite(ledR, HIGH);
        delay(200);
    } else {
        digitalWrite(ledR, LOW);
    }
}