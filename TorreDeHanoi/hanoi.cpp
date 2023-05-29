#include <iostream>
#include "hanoi.h"

template<typename T>
void hanoi(int n, T origen, T destino, T auxiliar) {
  if (n == 1) {
    std::cout << "Mover disco 1 desde " << origen << " a " << destino << std::endl;
    return;
  }

  hanoi(n - 1, origen, auxiliar, destino);
  std::cout << "Mover disco " << n << " desde " << origen << " a " << destino << std::endl;
  hanoi(n - 1, auxiliar, destino, origen);
}

template<typename T>
void ingresarNumero(T& num) {
    std::cout << "Ingrese el número de discos: ";
    std::cin >> num;
}
