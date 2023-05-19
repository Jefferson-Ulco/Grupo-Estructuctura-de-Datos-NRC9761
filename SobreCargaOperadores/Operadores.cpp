/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 17/05/2023
FECHA DE MODIFICACIÓN: 18/05/2023
Sobrecarga de operadores mod
 ***********************************************************************/

#include "Operadores.h"

Operadores::Operadores()
{

}

Operadores::Operadores(const int x2)
{
   	this->x = x2;


}
Operadores Operadores::operator %( const Operadores& m)
{
	Operadores resultado;
	resultado.setX(this->x%m.x);

	return resultado;

}


int Operadores::getX(void)
{
   return x;
}


void Operadores::setX(int newX)
{
   x = newX;
}

