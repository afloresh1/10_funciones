//2. Generador de N�meros Aleatorios
//Alison Khiara Flores Hallasi
//UTILIZAR LA FUNCI�N rand DE LA LIBRER�A cstdlib PARA GENERAR LOS N�MEROS ALEATORIOS
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int cna, vmax;
	cout<<"Ingrese la cantidad de numeros aleatorios que desea generar: "; cin>>cna;
	cout<<"Ingrese el valor maximo al que desea llegar: "; cin>>vmax;

	for (int i=1; i<=cna; i++){
		int numeroAleatorio=0+rand()%(vmax+1-0);
		
		cout<<numeroAleatorio<<endl;
	}
	return 0;
}
