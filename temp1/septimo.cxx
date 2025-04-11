#include <iostream>
#include <windows.h> 

using namespace std;

int main() 
{
    // Calcula área y circunferencia
    SetConsoleOutputCP(CP_UTF8); // Configurar salida en UTF-8
    SetConsoleCP(CP_UTF8);

    float radio, area = 0.0, circunferencia = 0.0;
    const float PI = 3.1416; // Definimos PI como constante

    cout << "PI = " << PI << "\n";

    cout << fixed;
    cout.precision(4);

    // Solicitar el radio al usuario
    cout << "Dame el radio de un círculo: ";
    cin >> radio;

    // Cálculo del área y la circunferencia
    area = PI * radio * radio;
    circunferencia = PI * radio * 2;

    // Mostrar resultados con 4 decimales usando cout
    cout << "Usando precisión a cuatro decimales con fixed\n";
    cout << "Para un círculo de radio: " << radio << "\n";
    cout << "El área es: " << area << "\n";
    cout << "La circunferencia es: " << circunferencia << "\n";

    // Mostrar resultados con 2 decimales usando printf
    printf("Usando precisión a dos decimales con printf\n");
    printf("Para un círculo de radio: %.2f\n", radio);
    printf("El área es: %.2f\n", area);
    printf("La circunferencia es: %.2f\n", circunferencia);

    return 0;
}