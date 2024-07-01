//5. Función calcularRaíces
//Alison Khiara Flores Hallasi

#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(int a, int b, int c, double& r1, double& r2, int& reales) {
    double discriminante = (pow(b,2))-4*(a*c);

    if (discriminante > 0) {
        // Raíces reales
        r1 = (-b + sqrt(discriminante)) / 2 * a;
        r2 = (-b - sqrt(discriminante)) / 2 * a;
        reales = 1;
    } else if (discriminante == 0) {
        // Raíces reales
        r1 = r2 = -b / (2 * a);
        reales = 1;
    } else {
        // Raíces complejas
        double partReal = -b / (2 * a);
        double partImaginaria = sqrt(-discriminante) / 2 * a;
        r1 = partReal + partImaginaria;
        r2 = partReal - partImaginaria;
        reales = 0;
    }
}

int main() {
    int a, b, c;
    double r1, r2;
    int reales;

   	cout<<"Ingrese el valor de a: ";
	cin>>a;
	
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	
	cout<<"Ingrese el valor de c: ";
	cin>>c;

    calcularRaices(a, b, c, r1, r2, reales);

    if (reales=1) {
        cout << "Las raices son reales:" <<endl;
        cout << "Primera raiz: " << r1 <<endl;
        cout << "Segunda raiz: " << r2 <<endl;
    } else {
        cout << "Las raices son complejas:" <<endl;
        cout << "Primera raiz: " << r1 << " + " << r2 << "i" <<endl;
        cout << "Segunda raiz: " << r1 << " - " << r2 << "i" <<endl;
    }

    return 0;
}
