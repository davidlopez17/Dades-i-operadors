/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
  int drive_gb = 100;
  int drive_mb = 0;


//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
  
  Serial.begin(9600);     
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");

}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
