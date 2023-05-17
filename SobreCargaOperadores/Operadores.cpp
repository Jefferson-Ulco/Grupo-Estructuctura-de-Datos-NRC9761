#include "Operadores.h"

Operadores::Operadores(const int x2)
{
   	this->x = x2;

}
Operadores Operadores::operator %( Operadores& m, Operadores& p)const 
{
   Operadores mod(p.x % m.x);
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
