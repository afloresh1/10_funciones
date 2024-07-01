//Cálculo de la Hipotenusa
//
#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int h, c1, c2;
	cout<<"Ingrese los valores de los catetos: "; cin>>c1>>c2;
	h = sqrt (pow(c1,2)+(pow(c2,2)));
	cout<<"La hipotenusa equivale a : "<<h<<endl;
	return 0;
}
