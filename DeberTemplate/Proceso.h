

/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 13/05/2023
FECHA DE MODIFICACIÓN: 14/05/2023
Enunciado
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Proceso_h)
#define __Class_Diagram_1_Proceso_h

#include "Fraccion.h"
template <typename T>
class Proceso
{
public:

   virtual Fraccion<T> calculo(Fraccion<T>* obj1, Fraccion<T>* obj2)=0;
   virtual T calculo(Fraccion<T> obj1, Fraccion<T> obj2) = 0;

protected:
private:

};

#endif
