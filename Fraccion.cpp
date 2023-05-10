#include "Fraccion.h"
#include <iostream>

using namespace std;

//CONSTRCUCTORES
Fraccion::Fraccion(){
	
}

Fraccion::Fraccion(int num, int den) {
  numerador = num;
  denominador = den;
}
//DESTRUCTOR
Fraccion::~Fraccion(){
	
}

//Get 	
int Fraccion :: getNum(void){
	return numerador;
}

int Fraccion :: getDeno(void){
	return denominador;
}

//Set
void Fraccion :: setNum(int nuevoNume){
	numerador= nuevoNume;
		//return numerador;
}

void Fraccion :: setDeno(int nuevoDeno){
	numerador= nuevoDeno;
		//return numerador;
}
// OPERACIONES
Fraccion Fraccion::suma(Fraccion frac1) {
  int nuevo_numerador = numerador * frac1.denominador + denominador * frac1.numerador;
  int nuevo_denominador = denominador * frac1.denominador;
  return Fraccion(nuevo_numerador, nuevo_denominador);
}

Fraccion Fraccion::resta(Fraccion frac1) {
  int nuevo_numerador = numerador * frac1.denominador - denominador * frac1.numerador;
  int nuevo_denominador = denominador * frac1.denominador;
  return Fraccion(nuevo_numerador, nuevo_denominador);
}

Fraccion Fraccion::multiplicacion(Fraccion frac1) {
  int nuevo_numerador = numerador * frac1.numerador;
  int nuevo_denominador = denominador * frac1.denominador;
  return Fraccion(nuevo_numerador, nuevo_denominador);
}

Fraccion Fraccion::division(Fraccion frac1) {
  int nuevo_numerador = numerador * frac1.denominador;
  int nuevo_denominador = denominador * frac1.numerador;
  return Fraccion(nuevo_numerador, nuevo_denominador);
}

void Fraccion::simplificar() {
  int mcd = calcular_mcd(numerador, denominador);
  numerador /= mcd;
  denominador /= mcd;
}

void Fraccion::imprimir() {
  cout << numerador << "/" << denominador << endl;
}

int Fraccion::calcular_mcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return calcular_mcd(b, a % b);
  }
}