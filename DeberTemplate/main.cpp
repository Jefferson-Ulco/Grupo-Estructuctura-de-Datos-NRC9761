
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 11/05/2023
FECHA DE MODIFICACIÓN: 11/05/2023
Enunciado
 ***********************************************************************/
#include <iostream>
#include "Fraccion.cpp"
#include "Operaciones.cpp"

using namespace std;

int main() {
	/*constructor, destructor, getters, setters (pedir numeros al usuario)*/
float numeradorI, denominadorI,numeradorI2, denominadorI2;

Fraccion<float>* f1 = new Fraccion<float>(0,0);
Fraccion<float>* f2 = new Fraccion<float>(0,0);
Fraccion<float> fraccion1;
Fraccion<float> fraccion2;


Operaciones<float> operaciones;
	
cout << "Sistema de Fraccion:" << endl;

cout << "Ingrese el numerador de la primera fraccion:";
cin >> numeradorI;
f1->setNumerador(numeradorI);
fraccion1.setNumerador(numeradorI);
cout << "Ingrese el denominador de la primera fraccion:";
cin >> denominadorI;
f1->setDenominador(denominadorI);
fraccion1.setDenominador(denominadorI);
cout << "Ingrese el numerador de la segunda fraccion:";
cin >> numeradorI2;
f2->setNumerador(numeradorI2);
fraccion2.setNumerador(numeradorI2);
cout << "Ingrese el denominador de la segunda fraccion:";
cin >> denominadorI2;
f2->setDenominador(denominadorI2);	
fraccion2.setDenominador(denominadorI2);	
	
Fraccion<float> resultado;
resultado=operaciones.calculo(f1,f2);
float resultado2=0;
resultado2= operaciones.calculo(fraccion1,fraccion2);



//Fraccion res = Fraccion.calculo(f1,f2);

cout << "Primera Fraccion:" << f1->getNumerador() << "/" << f1->getDenominador() << endl;
cout << "Segunda Fraccion:" << f2->getNumerador() << "/" << f2->getDenominador() << endl;
cout << "Resultado:" << resultado.getNumerador() << "/" << resultado.getDenominador() << endl;
cout << "Resultado 2: " << resultado2<< endl;
//cout << "Resultado de la Operacion 1:" <<result << endl;
//cout << "Resultado de la Operacion 2:" << f2.getDenominador() << endl;


	return 0;
}
