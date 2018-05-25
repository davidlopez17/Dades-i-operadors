/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
  int test = 32767;

//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
  
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);

}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
