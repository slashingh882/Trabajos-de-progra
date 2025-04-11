#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int num;
	cout<<"Dame un número para saber si algo es par o impar: ";
	cin>>num;
	if (num%2==0)
	{
		cout<<"El número es par";
	}
	else{
		cout<<"Es número es impar";
	}
return 0;
}
	