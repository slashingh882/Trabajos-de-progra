#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;
void gotoxy(int x, int y){
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),   coord);
		}
int main()
{
int x,edad; char nom[10];
x=1;
do{
	cout<<x<<"\n";
	x++;
	}while(x<10);
	system("pause");	
	
	 
	   
		
return 0;
}
