
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 13/05/2023
FECHA DE MODIFICACIÓN: 14/05/2023
Enunciado
 ***********************************************************************/


#if !defined(__Class_Diagram_1_Fraccion_h)
#define __Class_Diagram_1_Fraccion_h
#include <iostream>
using namespace std;

template <typename T>
class Fraccion
{
public:
	Fraccion();
   T getNumerador(void);
   void setNumerador(T newNumerador);
   T getDenominador(void);
   void setDenominador(T newDenominador);
   Fraccion(T num, T den);
  // T calculo(Fraccion obj1, Fraccion obj2);
   
   ~Fraccion();

protected:
private:
   T numerador;
   T denominador;
};
template <typename T>
Fraccion<T>::~Fraccion()
{
   // std::cout << "Destructor de Fraccion invocado" << std::endl;
}
#endif
