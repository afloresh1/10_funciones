#include <iostream>

using namespace std;

void depositar(float);
void retirar(float);
void mostrarSaldo();

float saldo=0; //variable global

int main(){
    int op;
    do{
    cout<<"Cajero automatico"<<endl;
    cout<<"1. Depositar "<<endl;
    cout<<"2.Retirar "<<endl;
    cout<<"3. Mostrar saldo "<<endl;
    cout<<"0. Salir "<<endl;
    cout<<"Elija una opcion : "; 
    cin>>op;
    switch (op){
        case 1:
        int valor;
            cout<<"Ingrese el monto: "; cin>>valor;
            depositar(valor);
            cout<<valor;
        break;
        case 2:
            cout<<"Ingrese el monto: "; cin>>valor;
            retirar(valor);
            cout<<valor;
        break;
        case 3: 
            mostrarSaldo();
            
        break; 
        case  0:
            cout<<"Saliendo ... "<<endl;
            system("pause");
        break;
        default:
            cout<<"No esta determinado"<<endl;
        break;
    } 
    }
    while (op!=0);
     cout<<"No valido"<<endl;
    return 0;

}
void depositar(float monto){
        saldo = saldo + monto;
}
void retirar(float monto){
        saldo = saldo - monto;
}

void mostrarSaldo(){
    cout<<"El saldo actual es: "<<saldo<<endl;
}
