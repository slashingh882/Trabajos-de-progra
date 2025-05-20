#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	int n,i,c,ext,t;
	
	srand(time(0));
	do{
cout<<"este programa generara los numeros aleatorios que quieras (de 2 para arriba y no negativos) y los ordenara de mayor a menor...\n";
cin>>n;
if(n>1){t=1;}else{system("cls");}
}while(t!=1);

int vector[n];
for(i=0;i<n;i++){vector[i]=rand()%10;}
cout<<"aqui estan tus numeros\n";
for(i=0;i<n;i++){cout<<vector[i]; if(i!=n){cout<<",";}}

cout<<"ahora voy a oredenarlos...\n";


	

for(i=0;i<n;i++){
 for(c=i+1;c<n;c++){
	if(vector[i]>vector[c]){
		ext=vector[i];
		vector[i]=vector[c];
		vector[c]=ext;
	}
 }

}

for(i=0;i<n;i++){cout<<vector[i]; if(i!=n){cout<<",";}}

}