#include <iostream>
#include <windows.h>
using namespace std;

void marco1(void); // encabezados de funciones
void marco2(char c, int c1, int r1, int c2, int r2);
void gotoxy(int x, int y);

int y = 123; // variables globales
int x = 1000;

int main(void) {
    int x = 0; // variables locales a main
    int r1, r2, c1, c2;
    char c;

    marco1();
    gotoxy(10, 10);
    cout << "El valor de x en main es: " << x;
    marco2('*', 60, 2, 70, 5);
    marco2('@', 10, 15, 60, 17);
    gotoxy(1, 20);
    system("PAUSE");
    system("CLS");
    printf("captura de parametros\n");
    printf("Con cual caracter quieres que se imprima el marco? ");
    cin >> c;
    cout << "Dame la Columna 1: ";
    cin >> c1;
    cout << "Dame el Renglon 1: ";
    cin >> r1;
    cout << "Dame la Columna 2: ";
    cin >> c2;
    cout << "Dame el Renglon 2: ";
    cin >> r2;
    marco2(c, c1, r1, c2, r2);
    gotoxy(1, 26);
    return 0;
}

void marco1(void) {
    int x;
    for (x = 1; x < 80; x++) {
        gotoxy(x, 1);
        cout << "-";
        gotoxy(x, 19);
        cout << "-";
    }

    for (x = 2; x < 20; x++) {
        gotoxy(1, x);
        cout << "|";
        gotoxy(79, x);
        cout << "|";
    }

    gotoxy(10, 12);
    cout << "El valor de x en la funcion es: " << x;
    gotoxy(10, 13);
    cout << "el valor de y en la funcion es: " << y; // var global
}
void marco2(char c, int c1, int r1, int c2, int r2) {
    int x;
    for (x = c1; x <= c2; x++) {
        gotoxy(x, r1);
        cout << c;
        gotoxy(x, r2);
        cout << c;
    }

    for (x = r1; x <= r2; x++) {
        gotoxy(c1, x);
        cout << c;
        gotoxy(c2, x);
        cout << c;
    }
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
