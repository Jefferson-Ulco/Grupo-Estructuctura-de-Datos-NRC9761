/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 17/05/2023
FECHA DE MODIFICACIÓN: 18/05/2023
Sobrecarga de operadores mod
 ***********************************************************************/
#if !defined(operadores_h)
#define operadores_h
template <typename T>
class Operadores
{
private:
   T x;

public:
	Operadores();
   Operadores(T  x2);
   Operadores operator%(const Operadores<T>& m)  ;
   T getX(void);
   void setX(T newY);

protected:
};

#endif
