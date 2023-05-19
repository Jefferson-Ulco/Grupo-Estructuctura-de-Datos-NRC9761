/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 17/05/2023
FECHA DE MODIFICACIÓN: 18/05/2023
Sobrecarga de operadores mod
 ***********************************************************************/

#include <iostream>
#include "Operadores.cpp"
using namespace std;


int main()
{

   int valor1,valor2;
   int modulo= 0;
   Operadores op1(10);
   Operadores op2(7);
	/*cout << "Sobrecarga de Operadores:" << endl;
	cout << "Ingrese un valor :";
	cin >> valor1;
	op1.setX(valor1);
	cout << "Ingrese un segundo valor:";
	cin >> valor2;
	op1.setY(valor2);*/
	//modulo= op1.getX()%op1.getY();
	Operadores r= op1%op2;
   	cout<< "El modulo de "<<op1.getX() << " y "<<op2.getX() << "es: "<< r.getX();
   
    return 0;
    
}
