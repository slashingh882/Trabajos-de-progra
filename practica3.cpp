#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int entera;
	float flotante;
	char letra,palabra[50];
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	cout<<"lectura de datos usando scanf\n";
	cout<<"dame un valor entero: ";
	fflush(stdin);
	scanf("%d",&entera);
	cout<<"dame un valor flotante: ";
	fflush(stdin);
	scanf("%f",&flotante);
	cout<<"dame un valor char: ";
	fflush(stdin);
	scanf("%c",&letra);
	cout<<"dame una cadena sin espacio: ";
	fflush(stdin);
	scanf("%s",&palabra);//sin espacios
	cout<<"impresion de valores\n";
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	system("pause");
	cout<<"dame un entero, un flotante, un char y una cadena sin espacios: ";
	scanf("%d %f %c %s",&entera,&flotante,&letra,palabra);	
	cout<<"impresion de valores\n";
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	puts("\n");
	cout<<fixed;
	cout.precision(4);
	cout<<"impresion con precision .\n El valor flotante a 4 decimales: "<<flotante<<"\n";
	cout.precision(2);
	cout<<"impresion con precision .\n El valor flotante a 4 decimales: "<<flotante<<endl;
	cout.precision(6);
	cout<<"impresion con precision .\n El valor flotante a 4 decimales: "<<flotante<<endl;
	cout.unsetf(ios::fixed);
	cout<<"sin formato fijo"<<flotante<<endl;
	
		return 0;
}