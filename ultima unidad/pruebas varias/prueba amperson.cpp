#include <iostream> //Comparacion de cadenas
#include <windows.h>
using namespace std;

void leer(int &x,int &y);

int main(){
int x,y;

leer(x,y);
cout<< x+y;

}

void leer(int &x,int &y){
    cout<<"dame el valor 1: ";
    cin>>x;
    cout<<"dame el valor 2: ";
    cin>>y;
}