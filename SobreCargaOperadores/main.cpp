#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include "Operadores.cpp"
using namespace std;


int main()
{
   Operadores op1(2);
   Operadores op2(4);
   Operadores modulo= op1%op2;
   
   cout<< "El modulo de "<<op1.getX() << "y "<<op2.getX() << "es: "<< modulo.getX();
   
    return 0;
    
}
