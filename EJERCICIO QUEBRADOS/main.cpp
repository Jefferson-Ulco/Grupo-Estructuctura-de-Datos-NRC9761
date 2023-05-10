#include "Fraccion.h"
#include <iostream>

using namespace std;

int main() {
	/*constructor, destructor, getters, setters (pedir numeros al usuario)*/
int numeradorI, denominadorI,numeradorI2, denominadorI2,op;
cout << "Quebrados:" << endl;
cout << "Suma [1]" << endl; //comentarios
cout << "Resta [2]" << endl;
cout << "Multiplicacion [3]" << endl;
cout << "Division [4]" << endl;
cout << "Seleccione la opcion requerida:" << endl;
cin >> op;
cout << "Ingrese el numerador de la primera fraccion:";
cin >> numeradorI;
cout << "Ingrese el denominador de la primera fraccion:";
cin >> denominadorI;
cout << "Ingrese el numerador de la segunda fraccion:";
cin >> numeradorI2;
cout << "Ingrese el denominador de la segunda fraccion:";
cin >> denominadorI2;

	Fraccion f1(numeradorI, denominadorI);
	Fraccion f2(numeradorI2, denominadorI2);
	Fraccion f3 = f1.suma(f2);
	Fraccion f4 = f1.resta(f2);
	Fraccion f5 = f1.multiplicacion(f2);
	Fraccion f6 = f1.division(f2);

	f3.simplificar();
	f4.simplificar();
	f5.simplificar();
	f6.simplificar();

switch (op)  {
    case 1:
    	 	cout << "Valor de la suma: " ;
			f3.imprimir();
        break;

    case 2:
    	cout << "Valor de la resta: " ;
      	f4.imprimir();
        break;
    case 3:
    	       	cout << "Valor de la multiplicacion: " ;
      		f5.imprimir();
        break;
    case 4:
    	       	cout << "Valor de la division: " ;
      	f6.imprimir();
        break;
        default:	
        cout << "Opción invalida " ;
        	break;
	}


	return 0;
}
