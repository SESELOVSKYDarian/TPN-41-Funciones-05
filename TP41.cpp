#include <iostream>
using namespace std;
float ConvertirPesos(float dolares);
int main ()
{
	float n;
	cout<<"Ingrese cuantos dolares: ";
	cin>>n;
	cout<<ConvertirPesos(n);
	return 0;	
}
float ConvertirPesos(float dolares)
{
	float convertir=dolares*331.37;
	return convertir;
}