/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 11/05/2023
FECHA DE MODIFICACIÓN: 11/05/2023
Enunciado
 ***********************************************************************/
#ifndef OPERACIONES_H
#define OPERACIONES_H
#include "Matriz.h"

template <typename T>
class Operaciones {
public:
    static Matriz<T> suma(Matriz<T>& matriz1, Matriz<T>& matriz2);
    static Matriz<T> multiplicacion(Matriz<T>& matriz1, Matriz<T>& matriz2);
};

#include "Operaciones.cpp"

#endif  
