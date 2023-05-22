#ifndef OPERACIONES_H
#define OPERACIONES_H
#include "Operaciones.cpp"
#include "Matriz.h"

template <typename T>
class Operaciones {
public:
    static Matriz<T> suma(Matriz<T>& matriz1, Matriz<T>& matriz2);
    static Matriz<T> multiplicacion(Matriz<T>& matriz1, Matriz<T>& matriz2);
};



#endif  
