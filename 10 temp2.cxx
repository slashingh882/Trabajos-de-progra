#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    int x, precio;
    srand(time(0));
    precio=rand()%1001;
    do{
    	cout<<"Dime el precio (entre 0 y 1000): ";
    	cin>>x;
    	if(x>precio){
    	cout<<"Muy arriba\n";}
    	else{
    	if(x<precio)
    	cout<<"muy abajo\n";
    	else{
    	cout<<"Acertaste, el precio es: "<<precio;
    	}}}while (x!=precio);
    	return 0;
}