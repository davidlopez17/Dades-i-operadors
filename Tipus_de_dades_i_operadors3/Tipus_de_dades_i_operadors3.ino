
/****************************************************************
**                             TÍTOL:                          **
**                          Nom del programa:   Math is Fun    **                                                       **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
  int a = 3;
  int b = 4;
  int h = 0;
  int a2;
  int b2;


//**************************SETUP********************************
  
void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
  Serial.begin(9600);     

  Serial.println("Lets calculate a hypoteneuse ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  a2 = a * a;

  b2 = b * b;

  Serial.print("h = ");       // 
  Serial.println(sqrt(a2+b2));


  

  
  
}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
