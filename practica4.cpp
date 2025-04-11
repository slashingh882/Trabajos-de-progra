#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cad[80];
	int i,j,k;
	puts(" usando un scanf con juegos de inspeccion\n");
	puts("dame una cadena con espacios:");
	scanf("%s",cad);
	cout<<cad<<"\n";
	fflush(stdin);
	puts("dame una cadena de mayusculas y espacios:");
	scanf("%s",cad);
	scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",cad);
	puts(cad);
	puts("dame una cadena en mayusculas, minusculas,Ñ,ñ y espacios \n");
	fflush(stdin);
	scanf("%[ a-zA-zÑñ]",cad);
	cout<<cad<<"\n";
	puts("dame una cadena de caracter y termina con enter");
	fflush(stdin);
	scanf("%[^\n]",cad);
	puts(cad);
	puts("dame 3 numeros entero de maximo 3 cifras");
	scanf("%3d %3d %3d",&i,&j,&k);
	printf("%d %d %d",i,j,k);	
	printf("\a");
	return 0;
}