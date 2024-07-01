//1. Cálculo del área de un circulo
//Alison Khiara Flores Hallasi
#include <iostream>
#include<cmath>
using namespace std;
//areacircular= pi*r al cuadrado
int main(){
	float a, r;
	cout<<"Ingrese el radio del circulo: "; cin>>r;
	
	a = M_PI* (pow(r, 2));
	
	cout<<"El área del círculo: "<<a<<endl;
	return 0;
	
}
