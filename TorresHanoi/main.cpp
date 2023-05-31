#include <functional>
#include "Hanoi.h"

int main() {
    int numDiscos = ingresarNumeroDiscos();

    std::function<void(int, char, char)> moverDiscoFunc = moverDisco;

    torresHanoi(numDiscos, 'A', 'C', 'B', moverDiscoFunc);

    return 0;
}
