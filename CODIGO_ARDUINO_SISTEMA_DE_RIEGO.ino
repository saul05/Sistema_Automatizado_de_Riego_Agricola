/*
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
||  SISTEMA DE AUTOMATIZACION DE RIEGO EN CULTIVO DE AGUACATE  ||
||                                                             ||
||    @@@@@  @@@@@  @   @  @        @      @  @    @  @@@@@    ||     
||    @      @   @  @   @  @        @      @  @ @@ @  @   @    ||
||    @@@@@  @@@@@  @   @  @        @      @  @    @  @@@@@    ||
||        @  @   @  @   @  @        @      @  @    @  @   @    ||
||    @@@@@  @   @  @@@@@  @@@@@    @@@@@  @  @    @  @   @    ||
|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

*/

int SensorPin = A0; //se identifican los pines para el sensor de humedad
int SensorPin2 = A1;//se identifican los pines para el sensor de humedad
int SensorPin3 = A2; //se identifican los pines para el sensor de humedad
int SensorPin4 = A3;//se identifican los pines para el sensor de humedad
int SensorPin5 = A4; //se identifican los pines para el sensor de humedad
int SensorPin6 = A5;//se identifican los pines para el sensor de humedad
int SensorPin7 = A6; //se identifican los pines para el sensor de humedad
int SensorPin8 = A7;//se identifican los pines para el sensor de humedad
int SensorPin9 = A8; //se identifican los pines para el sensor de humedad
int SensorPin10 = A9;//se identifican los pines para el sensor de humedad


const int Valvula1 = 2; //se identifican las variables de salida
const int Valvula2 = 3;//se identifican las variables de salida
const int Valvula3 = 4; //se identifican las variables de salida
const int Valvula4 = 5;//se identifican las variables de salida
const int Valvula5 = 6; //se identifican las variables de salida
const int Valvula6 = 7;//se identifican las variables de salida
const int Valvula7 = 8; //se identifican las variables de salida
const int Valvula8 = 9;//se identifican las variables de salida
const int Valvula9 = 10; //se identifican las variables de salida
const int Valvula10 = 11;//se identifican las variables de salida


void setup()
{
 Serial.begin(9600);
 pinMode(SensorPin, INPUT); //se avtiva la entrada de la lectura del sensor 1
 pinMode(SensorPin2, INPUT); //se avtiva la entrada de la lectura del sensor 2
 pinMode(SensorPin3, INPUT);  //se avtiva la entrada de la lectura del sensor 3
 pinMode(SensorPin4, INPUT); //se avtiva la entrada de la lectura del sensor 4
 pinMode(SensorPin5, INPUT); //se avtiva la entrada de la lectura del sensor 5
 pinMode(SensorPin6, INPUT); //se avtiva la entrada de la lectura del sensor 6
 pinMode(SensorPin7, INPUT);  //se avtiva la entrada de la lectura del sensor 7
 pinMode(SensorPin8, INPUT); //se avtiva la entrada de la lectura del sensor 8
 pinMode(SensorPin9, INPUT); //se avtiva la entrada de la lectura del sensor 9
 pinMode(SensorPin10, INPUT); //se avtiva la entrada de la lectura del sensor 10
 
 pinMode(Valvula1, OUTPUT); //se activa la salida de la señal de la valvula 1
 pinMode(Valvula2, OUTPUT);//se activa la salida de la señal de la valvula 2
 pinMode(Valvula3, OUTPUT); //se activa la salida de la señal de la valvula 3
 pinMode(Valvula4, OUTPUT);//se activa la salida de la señal de la valvula 4
 pinMode(Valvula5, OUTPUT); //se activa la salida de la señal de la valvula 5
 pinMode(Valvula6, OUTPUT);//se activa la salida de la señal de la valvula 6
 pinMode(Valvula7, OUTPUT); //se activa la salida de la señal de la valvula 7
 pinMode(Valvula8, OUTPUT);//se activa la salida de la señal de la valvula 8
 pinMode(Valvula9, OUTPUT); //se activa la salida de la señal de la valvula 9
 pinMode(Valvula10, OUTPUT);//se activa la salida de la señal de la valvula 10
 
}

  
void loop()
{
  
  int humedad = analogRead(SensorPin); // lee temperatura de sensor 1
  int humedad2 = analogRead(SensorPin2); // lee temperatura de sensor 2
  int humedad3 = analogRead(SensorPin3); // lee temperatura de sensor 3
  int humedad4 = analogRead(SensorPin4); // lee temperatura de sensor 4
  int humedad5 = analogRead(SensorPin5); // lee temperatura de sensor 5
  int humedad6 = analogRead(SensorPin6); // lee temperatura de sensor 6
  int humedad7 = analogRead(SensorPin7); // lee temperatura de sensor 7
  int humedad8 = analogRead(SensorPin8); // lee temperatura de sensor 8
  int humedad9 = analogRead(SensorPin9); // lee temperatura de sensor 9
  int humedad10 = analogRead(SensorPin10); // lee temperatura de sensor 10

  //Funcion sensor 1

  if(humedad>=700){
    Serial.println("humedad1");
    Serial.println(humedad);
    digitalWrite(Valvula1, HIGH);
  
  }else{
    digitalWrite(Valvula1, LOW); 
    delay(2000);
  }

  //Funcion sensor 2
  
  
 if(humedad2>=700)
{
    Serial.println("humedad2");
    Serial.println(humedad2);
    digitalWrite(Valvula2, HIGH);
  }else{
    digitalWrite(Valvula2, LOW);
  delay(2000);
  }

//Funcion sensor 3
  
   if(humedad3>=700){
    Serial.println("humedad3");
    Serial.println(humedad3);
    digitalWrite(Valvula3, HIGH);
  
  }else{
    digitalWrite(Valvula3, LOW); 
    delay(2000);
  }

  //Funcion sensor 4
  
   if(humedad4>=700){
    Serial.println("humedad4");
    Serial.println(humedad4);
    digitalWrite(Valvula4, HIGH);
  
  }else{
    digitalWrite(Valvula4, LOW); 
    delay(2000);
  }

  //Funcion sensor 5
  
   if(humedad5>=700){
    Serial.println("humedad5");
    Serial.println(humedad5);
    digitalWrite(Valvula5, HIGH);
  
  }else{
    digitalWrite(Valvula5, LOW); 
    delay(2000);
  }

  
  //Funcion sensor 6
  
   if(humedad6>=700){
    Serial.println("humedad6");
    Serial.println(humedad6);
    digitalWrite(Valvula6, HIGH);
  
  }else{
    digitalWrite(Valvula6, LOW);
    delay(2000);
  }


  //Funcion sensor 7
   if(humedad7>=700){
    Serial.println("humedad7");
    Serial.println(humedad7);
    digitalWrite(Valvula7, HIGH);
  
  }else{
    digitalWrite(Valvula7, LOW);
    delay(2000);
  }


  //Funcion sensor 8
  
   if(humedad8>=700){
    Serial.println("humedad8");
    Serial.println(humedad8);
    digitalWrite(Valvula8, HIGH);
  
  }else{
    digitalWrite(Valvula8, LOW); 
    delay(2000);
  }


  //Funcion sensor 9
  
   if(humedad9>=700){
    Serial.println("humedad9");
    Serial.println(humedad9);
    digitalWrite(Valvula9, HIGH);
  
  }else{
    digitalWrite(Valvula9, LOW); 
    delay(2000);
  }


  //Funcion sensor 10
  
   if(humedad10>=700){
    Serial.println("humedad10");
    Serial.println(humedad10);
    digitalWrite(Valvula10, HIGH);
  
  }else{
    digitalWrite(Valvula10, LOW); 
    delay(2000);
  }
}
