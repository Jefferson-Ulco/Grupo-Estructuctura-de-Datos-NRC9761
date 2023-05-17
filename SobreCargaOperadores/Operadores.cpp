#include "Operadores.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>

Operadores Operadores::operator %(const Operadores& m) 
{
   Operadores mod(this->x % m.x);
   return mod;
}


int Operadores::getX(void)
{
   return x;
}


void Operadores::setX(int newX)
{
   x = newX;
}


Operadores::Operadores(const int x2)
{
   	this->x = x2;

}
