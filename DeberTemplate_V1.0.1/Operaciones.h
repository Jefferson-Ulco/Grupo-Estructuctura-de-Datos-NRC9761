
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 13/05/2023
FECHA DE MODIFICACIÓN: 14/05/2023
Enunciado
 ***********************************************************************/


#if !defined(__Class_Diagram_1_Operacion_h)
#define __Class_Diagram_1_Operacion_h

#include "Proceso.h"
#include "Fraccion.h"
#include <iostream>
using namespace std;

template <typename T>
class Operaciones: public Proceso<T>
{
public:
	Operaciones();
	Fraccion<T> calculo(Fraccion<T>* obj1, Fraccion<T>* obj2)override;
   	T calculo(Fraccion<T> obj1, Fraccion<T> obj2)override;

   	~Operaciones();

protected:
private:

};
template <typename T>
Operaciones<T>::~Operaciones()
{
   // std::cout << "Destructor de Operaciones invocado" << std::endl;
}

#endif
