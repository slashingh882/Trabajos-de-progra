#include<stdio.h>
#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8); //Controlar salida
    SetConsoleCP(CP_UTF8); //Controlar entrada

    int x = 10, y = 3;
    int z = 10; // Declara variable int con valor 10
    int *dirz = &z; // Declara puntero (int *) y le asigna el contenido de la dirección de z

    cout << "<<x+y=" << x+y << "\n"; // 13
    cout << "<<x-y=" << x-y << "\n"; // 7
    cout << "<<x*y=" << x*y << "\n"; // 30
    cout << "<<x/y=" << x/y << "\n"; // 3
    cout << "<< residuo%=" << x%y << "\n"; // 1
    cout << "<< incrementado=" << ++x << " o bien " << x+1 << "\n"; 
    cout << "<<-- decrementado\n"; // x = x - 1

    printf("Dame un número entero para saber si es + o -: ");
    cin >> x;
    x > 0 ? cout << "positivo " : cout << "negativo ";

    cout << "\nDame un número entero para saber si es +, - o 0: ";
    cin >> x;
    x > 0 ? cout << "positivo " : x < 0 ? cout << "negativo " : cout << "es cero"; // doble pregunta para considerar el cero

    x = 0;
    cout << "\nx=" << x << "\n";
    cout << "x++ = " << x++ << "\n";
    cout << "x= " << x << "\n";
    cout << "+x = " << +x << "\n";
    cout << "nx=" << x << "\n";
    cout << "y=" << y << ". La dirección de y es " << &y << "\n";

    // Imprimir el valor de y y la dirección almacenada en x
    cout << "El valor de z: " << z << endl; // Imprime el valor de z
    cout << "La dirección de z (&z) es: " << &z << endl; // Imprime la dirección de z
    cout << "La dirección de z almacenada en dirz: " << dirz << endl;
    cout << "El contenido en *dirz: " << *dirz << endl;

    return 0;
}
