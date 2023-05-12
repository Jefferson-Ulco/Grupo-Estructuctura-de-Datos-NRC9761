
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 11/05/2023
FECHA DE MODIFICACIÓN: 11/05/2023
Enunciado
 ***********************************************************************/


#if !defined(__Class_Diagram_1_Operacion_h)
#define __Class_Diagram_1_Operacion_h

#include "Proceso.h"
#include "Fraccion.h"


class Operaciones:public Proceso
{
public:
	Operaciones();
	Fraccion calculo(Fraccion* obj1, Fraccion* obj2)override;
   	float calculo(Fraccion obj1, Fraccion obj2)override;

   	~Operaciones();

protected:
private:

};

#endif
