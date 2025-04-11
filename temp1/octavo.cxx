#include <iostream>
#include <windows.h> 

using namespace std;

int main() 
{
    // promedios

    float calif_1,calif_2,calif_3,promedio;
    cout << "dame la calificacion 1: ";
    cin >> calif_1;
    cout<<"\n";
    cout << "Dame la calificacion 2: ";
    cin >> calif_2;
    cout<<"\n";
cout << "Dame la calificacion 3: ";
    cin >> calif_3;
    cout<<"\n";
    // Cálculo del promedio
    promedio=(calif_1+calif_2+calif_3)/3;

    // Mostrar resultado del promedio de las 3 variables
    cout << "el promedio de tus 3 calificaciones es: "<<promedio<<"\n";
    system("pause");
    
    //lo mismo pero con printf y scanf
    printf("otra vez pero usando scanf (ignoralo solo vas a capturar otra vez)\n");
    printf("dame la calificacion 1: ");
    scanf("%f",&calif_1);
    printf("\n");
    printf("Dame la calificacion 2: ");
    scanf("%f",&calif_2);
    printf("\n");
    printf("Dame la calificacion 3: ");
    scanf("%f",&calif_3);
    printf("\n");
    // Cálculo del promedio
    promedio=(calif_1+calif_2+calif_3)/3;

    // Mostrar resultado del promedio usando printf
    printf ("el promedio de tus 3 calificaciones es:%6.2f",promedio,"\n");
    return 0;
}
