// matriz
#include <iostream>  // #include <stdio.h>
#include <time.h>    // para time()
#include <windows.h> // para SetConsoleCP y SetConsoleOutputCP
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

   int i, j, n,i2,s,s2;
s=0;
s2=0;
    srand(time(0)); // Inicializar la semilla de números aleatorios

do {
        cout << "Dime cuántos elementos por lado tiene la matriz? <2-10>: ";
        cin >> n;
    } while (n < 2 || n > 10);


 int matriz[n][n],matriz2[n][n]; // declara una matriz
    

    

    // Ciclo para renglones
    for (i = 0; i < n; i++) {
        // Ciclo para columnas
        for (j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100; // Genera número aleatorio entre 0 y 99
        }
    }

    cout << "Impresión de la matriz\n";

    for (j = 0; j< n; j++){
    
    for (i = 0; i < n+1; i++) {if(i<n){s=s+matriz[i][j]; cout<<"["; printf("%3d", matriz[i][j]);; cout<<"]";}else{cout<<s;}   }    
	cout << "\n";
	s=0;
}
s=0;
    for (i = 0; i < n; i++){
    
    for (j = 0; j < n; j++) { s=s+matriz[i][j];  }
    printf("%4d ",s);;
    s=0;
    }


    return 0;
}
