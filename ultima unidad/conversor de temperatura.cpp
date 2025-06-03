#include <iostream>
using namespace std;

double ctof(double centi); // convierte de °C a °Fahrenheit
double ftoc(double fahr);  // convierte de Fahrenheit a Centígrados

int main() {
    double temperatura;
    int opcion;

    cout << "Ingrese una temperatura: ";
    cin >> temperatura;

    cout << "Seleccione la opcion deseada: \n";
    cout << "1. Centigrados a Fahrenheit\n";
    cout << "2. Fahrenheit a Centigrados\n";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << temperatura << " grados Centigrados son " << ctof(temperatura) << " grados Fahrenheit.\n";
            break;
        case 2:
            cout << temperatura << " grados Fahrenheit son " << ftoc(temperatura) << " grados Centigrados.\n";
            break;
        default:
            cout << "Opcion invalida.\n";
            break;
    }

    return 0;
}
double ctof(double centi) {
    return (centi * 9.0 / 5.0) + 32.0;
}

double ftoc(double fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
