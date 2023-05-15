
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 13/05/2023
FECHA DE MODIFICACIÓN: 14/05/2023
Enunciado
 ***********************************************************************/

#include <iostream>
#include "Operaciones.h"
using namespace std;

template <typename T>
Operaciones<T>::Operaciones(){}

template <typename T>
Fraccion<T> Operaciones<T>::calculo(Fraccion<T>* obj1, Fraccion<T>* obj2){
   Fraccion<T> result;
   	T a,b,c,d, operacionNum, operacionDeno;
   
   	a= obj1->getNumerador();
   	b= obj1->getDenominador();
   	c= obj2->getNumerador();
   	d= obj2->getDenominador();
   	
   	operacionNum= (a*d)+(b*c);
   	operacionDeno= (b+d);
   	result.setNumerador(operacionNum);
   	result.setDenominador(operacionDeno);
   	return result;
   	
}
   template <typename T>
T Operaciones<T>::calculo(Fraccion<T> obj1, Fraccion<T> obj2){

   	T a,b,c,d, operacionNum, operacionDeno;
   
   	a= obj1.getNumerador();
   	b= obj1.getDenominador();
   	c= obj2.getNumerador();
   	d= obj2.getDenominador();
   	
   	operacionNum= (a*d)+(b*c);
   	operacionDeno= (b+d);
   	
   	return operacionNum / operacionDeno;
   	
   }

