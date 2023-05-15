
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 13/05/2023
FECHA DE MODIFICACIÓN: 14/05/2023
Enunciado
 ***********************************************************************/


#include "Fraccion.h"
//#include "Proceso.h"

template <typename T>
Fraccion<T>::Fraccion(){}


template <typename T>
T Fraccion<T>::getNumerador(void)
{
   return numerador;
}

template <typename T>
void Fraccion<T>::setNumerador(T newNumerador)
{
   numerador = newNumerador;
}


template <typename T>
T Fraccion<T>::getDenominador(void)
{
   return denominador;
}

template <typename T>
void Fraccion<T>::setDenominador(T newDenominador)
{
   denominador = newDenominador;
}


template <typename T>
Fraccion<T>::Fraccion(T num, T den)
{
   // TODO : implement
   this->numerador=num;
   this->denominador=den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////
template <typename T>
Fraccion<T>::~Fraccion()
{
   // TODO : implement
}

