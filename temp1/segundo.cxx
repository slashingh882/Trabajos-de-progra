#include <stdio.h> 
//#include<stdlib.h> //system
//#include <iostream> //cin, cout
#include <conio.h>
 //getch 5 
 //using namespace std;6 int main( )
int main()
{
char cad[80];//decara un arreglo 80 posiciones char Llamado cad 
char c; //declara una variable de tipo char (solo para un caracter)
puts("dame una cadena");//imprime en pantalla la cadena argumento 
gets(cad); //lee por teclado La variable argumento
puts("Ejemplo de impresión con puts");
puts(cad); //imprime en pantalla la variable argumento
return 0;
}