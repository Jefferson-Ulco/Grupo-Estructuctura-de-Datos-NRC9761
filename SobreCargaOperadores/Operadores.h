#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#if !defined(__SobreCargaDeDatos_Operadores_h)
#define __SobreCargaDeDatos_Operadores_h


class Operadores
{
private:
   int x;
public:
   Operadores operator%(const Operadores &m) ;

   int getX(void);
   void setX(int newX);
	Operadores(const int  x);
protected:
};

#endif
