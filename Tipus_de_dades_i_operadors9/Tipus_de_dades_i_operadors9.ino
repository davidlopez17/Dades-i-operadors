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
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missing_drive_kb;

//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
  
  Serial.begin(9600);     //set up Serial library at 9600 bps
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = 1024 * drive_mb;

  drive_kb = 1024 * drive_mb;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes,");

  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
  drive_mb = 100;
  real_drive_mb = drive_gb;
  real_drive_mb = drive_mb * 1000;

  real_drive_kb = 100 * real_drive_mb;

  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes,");

  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");
  
  missing_drive_kb;
  real_drive_kb = 100000000;
  drive_kb = 104857600;
  
  missing_drive_kb = drive_kb - real_drive_kb;
  Serial.print("You are missing ");
  Serial.print(missing_drive_kb);
  Serial.println(" Kilobytes!");
 
 

}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
