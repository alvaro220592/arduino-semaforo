int vermelho = 13;
int amarelo = 12;
int verde = 11;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  digitalWrite(verde, HIGH);
  delay(5000); // verde aceso por 5 segundos
  digitalWrite(verde, LOW);
  
  digitalWrite(amarelo, HIGH);
  delay(3000); // amarelo aceso por 3 segundos
  digitalWrite(amarelo, LOW);
  
  digitalWrite(vermelho, HIGH);
  delay(5000); // vermelho aceso por 5 segundos
  digitalWrite(vermelho, LOW);
}

  /*Não foi necessário definir um tempo
  específico para cada led ficar apagado*/