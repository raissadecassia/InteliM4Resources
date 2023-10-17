void setup()
{
  pinMode(13, OUTPUT); //configura o pino digital 13 como saída
  pinMode(12, OUTPUT); //configura o pino digital 12 como saída
  pinMode(11, OUTPUT); //configura o pino digital 11 como saída
  pinMode(10, OUTPUT); //configura o pino digital 10 como saída
}

void loop()
{
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, LOW); //apaga LED amarelo
  digitalWrite(11, HIGH); //acende LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1000);//tempo de espera
  
  digitalWrite(13, LOW); //apaga LED vermelho
  digitalWrite(12, HIGH); //acende LED amarelo
  digitalWrite(11, LOW); //apaga LED azul
  digitalWrite(10, HIGH); //acende LED verde
  delay(1500); //tempo de espera
  
  
  //acendendo um LED de cada vez até todos ficarem acesos
  
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, LOW); //apaga LED amarelo
  digitalWrite(11, LOW); //apaga LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1050); //tempo de espera
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, HIGH); //acende LED amarelo
  digitalWrite(11, LOW); //apaga LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1050); //tempo de espera
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, HIGH); //acende LED amarelo
  digitalWrite(11, HIGH); //acende LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1050); //tempo de espera
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, HIGH); //acende LED amarelo
  digitalWrite(11, HIGH); //acende LED azul
  digitalWrite(10, HIGH); //acende LED verde
  delay(1500);//tempo de espera
  
  
  //apaga um LED de cada vez até todos ficarem apagados
  
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, HIGH); //acende LED amarelo
  digitalWrite(11, HIGH); //acende LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1000); //tempo de espera
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, HIGH); //acende LED amarelo
  digitalWrite(11, LOW); //apaga LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1050); //tempo de espera
  digitalWrite(13, HIGH); //acende LED vermelho
  digitalWrite(12, LOW); //apaga LED amarelo
  digitalWrite(11, LOW); //apaga LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1050); //tempo de espera
  digitalWrite(13, LOW); //apaga LED vermelho
  digitalWrite(12, LOW); //apaga LED amarelo
  digitalWrite(11, LOW); //apaga LED azul
  digitalWrite(10, LOW); //apaga LED verde
  delay(1500); //tempo de espera
    
}
