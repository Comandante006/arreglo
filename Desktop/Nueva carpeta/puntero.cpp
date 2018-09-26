#include <iostream>
#include <iomanip>

using namespace std;

struct Dato{
	int dato1;
	char dato2[20];
};
struct Dato Var1;
struct Dato * ptr;
 ptr = & Var1;
cout<<"Puntero = "<<&ptr<<endl;
cout<<"Direccion de ptr = "<<*ptr<<endl;
return 0;
