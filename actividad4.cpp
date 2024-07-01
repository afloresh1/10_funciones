//4. Calcular las raíces de una ecuación cuadrática
//Alison Khiara Flores Hallasi
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b, c;
	double r1, r2;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"Ingrese el valor de c: ";
	cin>>c;
	r1= (-b+ sqrt((pow(b,2))-4*(a*c)))/2*a;
	r2= (-b- sqrt((pow(b,2))-4*(a*c)))/2*a;
	cout<<"La raices son: "<<r1<<endl<<r2<<endl;
	return 0;

}
