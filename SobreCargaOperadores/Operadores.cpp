/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 17/05/2023
FECHA DE MODIFICACIÓN: 18/05/2023
Sobrecarga de operadores mod
 ***********************************************************************/

#include "Operadores.h"
template <typename T>
Operadores<T>::Operadores()
{

}
template <typename T>
Operadores<T>::Operadores(const T x2)
{
   	this->x = x2;
}
template <typename T>
Operadores<T> Operadores<T>::operator %( const Operadores<T>& m)
{
	Operadores<T> resultado;
	resultado.setX(this->x%m.x);

	return resultado;

}

template <typename T>
T Operadores<T>::getX(void)
{
   return x;
}

template <typename T>
void Operadores<T>::setX(T newX)
{
   x = newX;
}
