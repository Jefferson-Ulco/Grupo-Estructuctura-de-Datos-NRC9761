#include <iostream>
#include "Matriz.h"
#include "Operaciones.h"

int main() {
    int dimension;

    std::cout << "Ingrese la dimension de las matrices: ";
    std::cin >> dimension;

    Matriz<int> matriz1(dimension);
    Matriz<int> matriz2(dimension);

    matriz1.generarAleatorios();
    matriz2.generarAleatorios();

    std::cout << "Matriz 1:" << std::endl;
    matriz1.imprimir();

    std::cout << "Matriz 2:" << std::endl;
    matriz2.imprimir();

    Matriz<int> resultado_suma = Operaciones<int>::suma(matriz1, matriz2);
    std::cout << "Suma de matrices:" << std::endl;
    resultado_suma.imprimir();

    Matriz<int> resultado_multiplicacion = Operaciones<int>::multiplicacion(matriz1, matriz2);
    std::cout << "Multiplicacion de matrices:" << std::endl;
    resultado_multiplicacion.imprimir();

    return 0;
}
