#if !defined(operadores_h)
#define operadores_h
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Operadores
{
private:
   int x;
public:
   Operadores(const int  x);
   Operadores operator %( Operadores& m)const ;
   int getX(void);
   void setX(int newX);
	
protected:
};

#endif
