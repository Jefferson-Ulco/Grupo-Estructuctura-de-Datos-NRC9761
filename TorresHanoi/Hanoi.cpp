#include "Hanoi.h"
#include <iostream>

void moverDisco(int disco, char origen, char destino) {
    std::cout << "Mover disco " << disco << " de " << origen << " a " << destino << std::endl;
}

void torresHanoi(int numDiscos, char origen, char destino, char auxiliar, std::function<void(int, char, char)> moverDisco) {
    if (numDiscos == 1) {
        moverDisco(1, origen, destino);
        return;
    }

    torresHanoi(numDiscos - 1, origen, auxiliar, destino, moverDisco);
    moverDisco(numDiscos, origen, destino);
    torresHanoi(numDiscos - 1, auxiliar, destino, origen, moverDisco);
}

int ingresarNumeroDiscos() {
    int numDiscos;

    std::cout << "Ingrese el numero de discos: ";
    std::cin >> numDiscos;

    return numDiscos;
}
