#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
char tueleccion();
char eleccioncompu();
void mostrarEleccion(char eleccion);

int main(){
	char jugador;
	char compu;
	int ganar=0;

	while(ganar<=3){	
	jugador = tueleccion();
	
	cout<<"Jugador: ";
	mostrarEleccion(jugador);
	cout<<" "<<endl;
	cout<<"Computador: ";
	compu = eleccioncompu();
	mostrarEleccion(compu);
	cout<<" "<<endl;
	if (jugador == static_cast<int>(compu))
        cout << "Resulto en Empate\n";
        
    else if
			((jugador == 1 && compu == 2) ||
             (jugador == 2 && compu == 3) ||
             (jugador == 3 && compu == 1)){
			 
        cout << "Muy bien!, Ganaste\n";
        ganar++;
	
	} 
        
    else{
	cout << "Que mal, Perdiste\n";			
	}	
	}
	cout<<" "<<endl;

	return 0;
	}

char tueleccion(){
	char jugador;
	cout<<"--------------Piedra papel o tijera----------------"<<endl;
	do{
	cout<<"Seleccione:  "<<endl;	
	cout<<"1. Piedra "<<endl;
	cout<<"2. Papel "<<endl;
	cout<<"3. Tijera "<<endl;
	cin>>jugador;	
	}while(jugador != '1' && jugador != '2'&& jugador != '3');	
	return jugador; 
}



char eleccioncompu(){
	int numeroAleatorio=1+rand()%(3+1-1);
	switch (numeroAleatorio){
		case 1:
			return'1';
		case 2:
			return'2';
		case 3:
			return'3';
			
	}
}
void mostrarEleccion(char eleccion){
	switch (eleccion){
		case '1':
			cout<<"Piedra"<<endl;
			break;
		case '2':
			cout<<"Papel"<<endl;
			break;
		case '3':
			cout<<"Tijera"<<endl;
			break;
	}
	
}

