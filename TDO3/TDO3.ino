/******************************************************************* 
**                                                                **
**                            TITOL:                              **
**                         Hipotenusa                             **
**                                                                **               
**  Nom: Juan Enrique Fernandez                 Data: 18/01/2017  **                                                                   
*******************************************************************/
//************************** INCLUDE *******************************


//************************* VARIEBLES ******************************
int a = 3, b = 4, h = 0;
//*************************** SETUP ********************************
void setup ()
{
  Serial.begin(9600);   
  Serial.println("Calcula la Hipotenusa");
  Serial.println ( "a = 3 ");
  Serial.println ( "b = 4 "); 
  Serial.print( "h = ");
  
 h = sqrt (pow(3,2)+ pow(4,2));

Serial.print(h);


}
//*************************** LOOP *********************************
void loop()  
{
}
//************************* FUNCIONES ******************************
//Este prgrama calcula la hipotenusa con los valores que se declaren en las varienbles a y b donde como resultado h.