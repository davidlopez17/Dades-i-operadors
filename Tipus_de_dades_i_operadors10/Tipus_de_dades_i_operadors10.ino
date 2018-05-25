/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
  int a = 3;
  int b = 2;
  int d;


//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:

Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);

}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
