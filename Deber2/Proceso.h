
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 11/05/2023
FECHA DE MODIFICACIÓN: 11/05/2023
Enunciado
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Proceso_h)
#define __Class_Diagram_1_Proceso_h

#include "Fraccion.h"

class Proceso
{
public:
   virtual Fraccion calculo(Fraccion* obj1, Fraccion* obj2)=0;
   virtual float calculo(Fraccion obj1, Fraccion obj2) = 0;

protected:
private:

};

#endif
