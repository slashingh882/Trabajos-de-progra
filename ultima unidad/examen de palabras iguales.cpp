#include <iostream> //Comparacion de cadenas
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    char cad1[100], cad2[100];
    int i, diferentes;

    cout << "Dame la primera cadena: ";
    gets(cad1);
    cout << "Dame la segunda cadena: ";
    gets(cad2);

    diferentes = 0;
    for(i = 0; cad1[i] != '\0' || cad2[i] != '\0'; i++){
        if(cad1[i] != cad2[i]){
            diferentes = 1;
            break;
        }
    }

    if(diferentes == 1){
        cout << "Las cadenas son diferentes";
    }
    else{
        cout << "Las cadenas son iguales";
    }
}
