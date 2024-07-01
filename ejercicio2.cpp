#include <iostream>
using namespace std;
void porValor(int a){
	a=20;
	cout<<"Dentro de porValor, a = "<<a<<endl;
	
}
void porReferencia(int &a){
	a=14;
	cout<<"Dentro de porReferencia, a = "<<a<<endl;
}
int main(){
	int num=5;
	cout<<" Antes de pasar por valor, num = "<<num<<endl;
	porValor(num);
	cout<<" Luego de pasar por valor, num = "<<num<<endl;
	
	cout<<" Antes de pasar por referencia, num = "<<num<<endl;
	porReferencia(num);
	cout<<" Antes de pasar por referencia, num = "<<num<<endl;
	
	return 0;
}

