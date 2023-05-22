#ifndef OPERACIONES_CPP
#define OPERACIONES_CPP

#include "Operaciones.h"

template <typename T>
Matriz<T> Operaciones<T>::suma(Matriz<T>& matriz1, Matriz<T>& matriz2) {
    int dimension = matriz1.obtenerDimension();
    Matriz<T> resultado(dimension);

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            T valor1 = matriz1.obtenerElemento(i, j);
            T valor2 = matriz2.obtenerElemento(i, j);
            resultado.establecerElemento(i, j, valor1 + valor2);
        }
    }

    return resultado;
}

template <typename T>
Matriz<T> Operaciones<T>::multiplicacion(Matriz<T>& matriz1, Matriz<T>& matriz2) {
    int dimension = matriz1.obtenerDimension();
    Matriz<T> resultado(dimension);

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            T valor = 0;
            for (int k = 0; k < dimension; k++) {
                valor += matriz1.obtenerElemento(i, k) * matriz2.obtenerElemento(k, j);
            }
            resultado.establecerElemento(i, j, valor);
        }
    }

    return resultado;
}

#endif  
