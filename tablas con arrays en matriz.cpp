// matriz
#include <iostream>  // #include <stdio.h>
#include <time.h>    // para time()
#include <windows.h> // para SetConsoleCP y SetConsoleOutputCP
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int matriz[10][10]; // declara una matriz
    int i, j, n,i2;

    srand(time(0)); // Inicializar la semilla de números aleatorios

    do {
        cout << "Dime cuántos elementos por lado tiene la matriz? <2-10>: ";
        cin >> n;
    } while (n < 2 || n > 10);

    // Ciclo para renglones
    for (i = 0; i < n; i++) {
        // Ciclo para columnas
        for (j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100; // Genera número aleatorio entre 0 y 99
        }
    }

    cout << "Impresión de la matriz\n";

    for (j = 0; j < n; j++){
    
    for (i = 0; i < n; i++) { printf("%3d ", matriz[i][j]);;
    }
    cout << "\n";
}

cout << "Impresión de la diagonal \n";

    for (j = 0; j < n; j++){
    
    for (i = 0; i < n; i++) {if(i==j){ printf("%3d ", matriz[i][j]);; }else{printf("    ");}
    }
    cout << "\n";
}

cout << "ahora la otra diagonal \n";
i2=n-1;
    for (j = 0; j < n; j++){
    
    for (i = 0; i < n; i++) {  if(i==i2){ printf("%3d ", matriz[i][j]);; }else{printf("    ");}
    }
    i2=i2-1;
    cout << "\n";
}

    return 0;
}

