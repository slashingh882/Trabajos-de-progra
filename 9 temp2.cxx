#include <windows.h>
#include <iostream>
#inclue <time.h>
using namespace std;

int main()
{

    int x, factorial;
    cout << "Dime un número para calcular su factorial: ";
    cin >> factorial;
    cout << factorial;
    
    for (x = factorial - 1; x >= 1; x--) {
        cout << "X" << x;
        factorial = factorial * x;
    }

    cout << "=" << factorial;
    return 0;
}
