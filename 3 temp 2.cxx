/*Programa que obtiene el mayor de tres números*/
#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int uno, dos, tres, mayor;
    char nombre[20];

    gotoxy(25,2);
    cout << "INSTITUTO TECNOLOGICO DE DURANGO";
    gotoxy(28,3);
    cout << "Fundamentos de Programación";
    gotoxy(14,4);
    cout << "Programa que determina cuál es el mayor de 3 números";
    gotoxy(5,5);
    cout << "Dime tu nombre: ";
    gets(nombre);

    gotoxy(10,8); cout << "Dime el primer número: "; cin >> uno;
    gotoxy(10,10); cout << "Dime el segundo número: "; cin >> dos;
    gotoxy(10,12); cout << "Dime el tercer número: "; cin >> tres;

    if (uno > dos && uno > tres)
    {
        mayor = uno;
         gotoxy(10,16);
    cout << nombre << ", el mayor de los tres números es: " << mayor;
    }
    else
    {
        if (dos > uno && dos > tres)
        {
            mayor = dos;
             gotoxy(10,16);
    cout << nombre << ", el mayor de los tres números es: " << mayor;
        }
        else
        {
            if (tres > uno && tres > dos)
        {
            mayor = tres;
             gotoxy(10,16);
    cout << nombre << ", el mayor de los tres números es: " << mayor;
        }
        else{
		gotoxy(10,16);
    cout << nombre << ", tus numeros son iguales";
		}
		}
        
    }

   

    return 0;
}
