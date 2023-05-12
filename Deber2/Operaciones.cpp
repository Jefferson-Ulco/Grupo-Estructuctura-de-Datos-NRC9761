
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 11/05/2023
FECHA DE MODIFICACIÓN: 11/05/2023
Enunciado
 ***********************************************************************/

#include <iostream>
#include "Operaciones.h"
using namespace std;

Operaciones::Operaciones(){}

Fraccion Operaciones::calculo(Fraccion* obj1, Fraccion* obj2){
   Fraccion result;
   	float a,b,c,d, operacionNum, operacionDeno;
   
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
   
float Operaciones::calculo(Fraccion obj1, Fraccion obj2){

   	float a,b,c,d, operacionNum, operacionDeno;
   
   	a= obj1.getNumerador();
   	b= obj1.getDenominador();
   	c= obj2.getNumerador();
   	d= obj2.getDenominador();
   	
   	operacionNum= (a*d)+(b*c);
   	operacionDeno= (b+d);
   	
   	return operacionNum / operacionDeno;
   	
   }
   
Operaciones::~Operaciones(){
}
