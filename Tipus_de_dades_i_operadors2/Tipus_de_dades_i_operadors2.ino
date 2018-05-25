
/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
int a = 5, b = 10, c = 20;


//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
Serial.begin(9600);

Serial.println("Here is some math: ");

Serial.print("a = ");
Serial.println(a);
Serial.print("b = ");
Serial.println(b);
Serial.print("c = ");
Serial.println(c);

Serial.print("a + b = ");
Serial.println(a + b); 

Serial.print("a * c =");
Serial.println(a * c);

Serial.print("c / b = ");
Serial.println(c / b);

Serial.print("c % b = ");
Serial.println(c % b);

Serial.print("b - c = ");
Serial.println(b - c);
}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
