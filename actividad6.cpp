#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;
char tueleccion();
char eleccioncompu();
void mostrarEleccion(char eleccion);
char compu;
int main(){
	char jugador;
	char compu;
	int ganar=1;
	int comp=1;
	while(ganar<=3){	
	jugador = tueleccion();
	cout<<"Jugador: ";
	mostrarEleccion(jugador);
	cout<<" "<<endl;
	
	compu = eleccioncompu();
	cout<<"Computador: ";
	mostrarEleccion(compu);
	cout<<" "<<endl;
	switch (jugador){
		case '1':
			if (compu == '1'){
				
        	cout << "Resulto en Empate\n";
			} else if(compu == '2'){
				
			cout << "Que mal, Perdiste\n";	
			}
			else {
			ganar++;	
       		cout << "Muy bien!, Ganaste\n";
			}
			break;
		case '2':
			if (compu == '1'){
				cout << "Muy bien!, Ganaste\n";
        	ganar++;
			} else if(compu == '2'){
				cout << "Resulto en Empate\n";
			
			}
			else {
				cout << "Que mal, Perdiste\n";	
       		
			}
			break;
		case '3':
			if (compu == '1'){
				cout << "Que mal, Perdiste\n";
				
			} else if(compu == '2'){
				cout << "Muy bien!, Ganaste\n";
        	ganar++;
				
			
			}
			else {
				cout << "Resulto en Empate\n";
       		
			}	
			break;
			
		}
	}
	cout<<"FELICIDADES, GANASTE TRES RONDAS"<<endl;
	cout<<"El resultado final es: "<<endl;
	cout<<"Jugador(tu): "<<ganar-1<<endl;
	cout<<"Computador: "<<comp;
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
	int numeroAleatorio=rand()%3 + 1;
	switch (numeroAleatorio){
		case 1:
			compu=1;
			return'1';
		case 2:
			compu=2;
			return'2';
		case 3:
			compu=3;
			return'3';
	
	}
return 0;
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

