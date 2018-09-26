#include <iostream>
#include <conio.h>
using namespace std;
int arreglo[]={39,96,46,24,46,85,35,65,89,79};
int *n;
int main()
{
	int suma;
	float promedio;
	for(int i=0; i<10; i++)
	{
		n=&arreglo[i];
		suma+=*n;
	}
	cout<<"LA SUMA DEL ARREGLO ES---> "<<suma;
	getch();
	return 0;
}
