#define led_vermelho 8
#define led_amarelo 9 
#define led_verde 10


int main(){

void setup()
{
    pinMode(led_vermelho, OUTPUT);
    pinMode(led_amarelo, OUTPUT);
    pinMode(led_verde, OUTPUT);
}

void vermelho(int tmp)
{
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, LOW);
    delay(tmp);
}

void verde(int tmp)
{
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, HIGH);
    delay(tmp);
}

void amarelo(int tmp)
{
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, HIGH);
    digitalWrite(led_verde, LOW);
    delay(tmp);
}

void loop()
{
    vermelho(7000);
    amarelo(7000);
    verde(7000);
}
}