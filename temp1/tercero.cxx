#include <stdio.h> // gets, puts, fflush
#include <stdlib.h> // system
#include <iostream> // cin, cout
#include <conio.h> // getch
using namespace std;

int main()
{
    char cad[80]; // declara un arreglo 80 posiciones char llamado cad
    string cad2;
    char c; // declara una variable de tipo char (solo para un caracter)

    puts("Dame una cadena (en realidad es un arreglo):"); // imprime en pantalla la cadena argumento
    gets(cad); // lee por teclado la variable argumento
    puts("Ejemplo de impresión con puts:");
    puts(cad); // imprime en pantalla la variable argumento

    printf("Ejemplo de impresión con printf: "); // imprime la cadena argumento
    printf(cad); // imprime en pantalla la variable argumento

    printf("\nPresiona una tecla y continua automáticamente: "); 
    c = getchar(); // lee un solo de línea y lo almacena en la variable c

    puts("\nAhora imprime la variable de tipo char c:");
    putchar(c); // imprime un caracter y lo almacena, en este caso, un salto

    printf("\nPresiona una tecla y luego enter: ");
    c = getchar(); // lee un caracter y lo almacena en c mediante enter

    printf("\nPresiona una tecla y continua automáticamente: ");
    fflush(stdin); // vacía el buffer de entrada
    getch(); // lee un carácter

    cout << "\nDame una cadena ahora con cin: ";
    cin >> cad2;
    cout << "La cadena con cin es: " << cad2;

    cout << "\nDame otra cadena con espacios: ";
    cin.ignore();
    getline(cin, cad2); // Esto no dará problemas con los espacios en el nombre
    cout << "La nueva cadena con espacios: " << cad2;

    cout << "\nDame una cadena con getchar o getline:";
    gets(cad); // lee un arreglo char con getline
    cout << "El arreglo es " << cad << "\n";

    return 0;
}