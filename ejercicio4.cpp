#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand (time(0));
	int numeromagico = rand()%100 + 1;
	int intento;
	cout<<"Adivina el numero magico (entre 1 y 100): ";
	while (true){
	cin>>intento;
	if (intento> numeromagico){
		cout<<"Muy alto. Intenta de nuevo: ";
		
	}else if (intento <numeromagico){
		cout<<"Muy bajo. Intenta de nuevo: ";
		
	} else {
		cout<<"Correcto El numero magico es: "<<numeromagico<<endl;
		break;
	}
	}
	
	return 0;
}
