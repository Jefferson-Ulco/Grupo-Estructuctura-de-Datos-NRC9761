#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Matriz.cpp"
template <typename T>
class Matriz {
private:
    T** matriz;
    int dimension;

public:
    Matriz(int dim);
    ~Matriz();
    void generarAleatorios();
    void imprimir();
    int obtenerDimension();
    T obtenerElemento(int fila, int columna);
    void establecerElemento(int fila, int columna, T valor);
};



#endif  
