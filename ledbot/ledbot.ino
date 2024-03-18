int botao = 2; // declara o push button na porta 2
int led = 13; // declara led na porta 13
bool estadobotao = 0; // variavel de controle

void setup()
{
  pinMode(botao, INPUT); // define o pino do botao como entrada
  pinMode(led, OUTPUT);// define LED como saida
}

void loop()
{
  digitalWrite(led, estadobotao);//verificando o estado do led 
  
  if (digitalRead(botao) == LOW) // Se o botão for pressionado
  {
    estadobotao = !estadobotao; // troca o estado do LED   
    while (digitalRead(botao) == HIGH); //se nao precionado apagará
  }
}
