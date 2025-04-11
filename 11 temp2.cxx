#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    int salida,activador,x, primo,comprobacion;
    cout << "Dime un número y yo te digo si es del norte (primo ps): ";
    cin >> primo;
    x=2;
    do  {
        
        comprobacion = primo%x;
        	
        	
        	//cout<<"("<<x; cout<<"="<<comprobacion<<")";
        	
        	if (comprobacion==0){
        		activador=1;
        		if(x==primo){activador=0; }
        		else{salida=1;}
        		}
        		
        		x=x+1;
        	if (x==10){salida=1;}
    }while(salida!=1);
if(activador==1){
    cout << "tu numero no es primo :(";
    }
    else{cout << "tu numero es primo brou/mana ";}
    
    return 0;
}
