/******************************************************************* 
**                                                                **
**                            TITOL:                              **
**                   Convertidor de Gb a Mb                       **
**                                                                **               
**  Nom: Juan Enrique Fernandez                 Data: 20/03/2018  **                                                                   
*******************************************************************/
//************************** INCLUDE *******************************


//************************* VARIEBLES ******************************
int drive_gb = 16;
int drive_mb = 0;

//*************************** SETUP ********************************
void setup()            
{
  Serial.begin(9600);    
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}
//*************************** LOOP *********************************
void loop()     
{
}
//************************* FUNCIONES ******************************
//Este programa convierte la variable gb en mb.
