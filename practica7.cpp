#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float c1=0.0,c2=0.0,c3=0.0,promedio=0.0;
	cout<<"dame la calificacion 1:";
	cin>>c1;
	cout<<"dame la calificacion 2:";
	cin>>c2;
	cout<<"dame la calificacion 3:";
	cin>>c3;
	promedio=(c1+c2+c3)/3;
	cout<<"el promdedio de calificacion es:"<<promedio<<"\n";
	system("pause");
	printf("dame la calificacion 1:");
	scanf("%f",&c1);
	printf("dame la calificacion 2:");
	scanf("%f",&c2);
	printf("dame la calificacion 3:");
	scanf("%f",&c3);
	promedio=(c1+c2+c3)/3;
		printf("El promedio de calificaciones es: %7.2f",promedio);
	return 0;
	
}