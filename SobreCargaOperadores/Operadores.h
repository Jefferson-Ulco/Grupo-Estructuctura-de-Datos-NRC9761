
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 17/05/2023
FECHA DE MODIFICACIÓN: 18/05/2023
Sobrecarga de operadores mod
 ***********************************************************************/
#if !defined(operadores_h)
#define operadores_h
class Operadores
{
private:
   int x;

public:
	Operadores();
   Operadores(int  x2);
   Operadores operator%(const Operadores& m)  ;
   int getX(void);
   void setX(int newY);

protected:
};

#endif
