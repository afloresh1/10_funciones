//1. C�lculo del �rea de un circulo
//Alison Khiara Flores Hallasi
#include <iostream>
#include<cmath>
using namespace std;
//areacircular= pi*r al cuadrado
int main(){
	float a, r;
	cout<<"Ingrese el radio del circulo: "; cin>>r;
	
	a = M_PI* (pow(r, 2));
	
	cout<<"El �rea del c�rculo: "<<a<<endl;
	return 0;
	
}
