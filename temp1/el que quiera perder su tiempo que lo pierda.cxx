#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char c;
    
    int opcion;
    cout << "prendele al switch (0=apagado 1=prendido): ";
    cin >> c;
    switch (c)
    {
        case '0':
            cout << "Falso o apagado\n";
            break;
        case '1':
            cout << "Cierto o encendido\n";
            break;
        default:
            cout << "Tenias que poner 1 o 0\n";
    }

    system("pause");
    system("cls");
    printf("1.- tetas\n");
    printf("2.- culos\n");
    printf("3.- personalidad\n");
    printf("4.- otra (dila)..\n");
    printf("SELECCIONA UNA OPCIÓN: ");
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            printf("SELECCIONASTE QUÍMICA");
            break;
        case 2:
            printf("SELECCIONASTE FÍSICA");
            break;
        case 3:
            printf("SELECCIONASTE MATEMÁTICAS");
            break;
        case 4:
            printf("dimela ps: ");
            
            break;
        default:
            printf("¡SELECCIONASTE UNA OPCIÓN NO VÁLIDA!");
    }

    return 0;
}
