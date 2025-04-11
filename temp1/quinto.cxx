#include <iostream>
#include <windows.h> // Necesario para configurar la consola en Windows

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Configura la salida
    SetConsoleCP(CP_UTF8); // Configura la entrada

    char cad[80];
    int i, j, k;

    puts("Usando scanf con juegos de inspección\n");
    
    puts("Dame una cadena con espacios");
    scanf("%s", cad);
    cout << cad << "\n";
    fflush(stdin);

    puts("Dame una cadena de mayúsculas y espacios");
    scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", cad);
    cout << cad << "\n";
    fflush(stdin);

    puts("Dame una cadena de mayúsculas, minúsculas, Ñ, ñ y espacios\n");
    scanf("%[ a-zA-ZÑñ]", cad);
    cout << cad << "\n";

    puts("Dame una cadena con cualquier carácter y termina con enter");
    fflush(stdin);
    scanf("%[^\n]", cad);
    cout << cad << "\n";

    puts("Dame 3 números enteros de máximo 3 cifras");
    scanf("%3d %3d %3d", &i, &j, &k);
    printf("%d, %d, %d\n", i, j, k);

    printf("W\a"); // Emite un sonido de alerta

    return 0;
}
