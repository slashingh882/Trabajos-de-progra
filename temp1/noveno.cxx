#include <iostream>
#include <windows.h> 

using namespace std;

int main() 
{
    // Calcula área y perimetro de un cuadrado

    float l1,l2,a,p;
// Solicitar la base al usuario
    cout << "dame la base del poligono de 4 lados: ";
    cin >> l1;
    cout<<"\n";
    
    // Solicitar la altura al usuario
    cout << "Dame la altura del poligono de 4 lados: ";
    cin >> l2;
    cout<<"\n";
    // Cálculo del área y el perimetro
    a= l1*l2;
    p= (l1*2) + (l2*2);

    // Mostrar resultados con cout
    cout << "el area de tu poligono de 4 lados es: "<<a<<"\n";
    cout << "el perimetro de tu poligono de 4 lados es: " << p << "\n";
    
    // Mostrar resultados con printf
    system("pause");
    printf("voy a poner los resultados de nuevo con printf\n");
    printf("el area de tu poligono de 4 lados es: %.2f", a);
    printf("\n");
    printf("el perimetro de tu poligono de 4 lados es: %.2f", p);

    return 0;
}