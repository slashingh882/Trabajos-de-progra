#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;
int main(int argc, char *argv[])
{
	int x,y;
	float z;
	
	for(x=1;x<11;x++){
		cout<<x<<",";
		}
		cout<<"\n";
		system("pause");
		for(x=100;x!=65;x-=5){
			z=sqrt(x);
			cout<<"La raiz cuadrada de "<<x<<" es "<<z<<"\n";
			}
			system("pause");
			x=10;
			for(y=10;y!=x;++y){
				cout<<y<<" dentro del ciclo (se supone que no debe entrar)\n";
				}
				cout<<y<<" ya estas fuera del ciclo mi pai";
				system("pause");
				
				for(x=0,y=0;x+y<10;++x){
					cout<<"dame el valor de y: ";
					cin>>y;
					}
					cout<<x<<"+"<<"="<<x+y<<" fuera del ciclo\n";
}