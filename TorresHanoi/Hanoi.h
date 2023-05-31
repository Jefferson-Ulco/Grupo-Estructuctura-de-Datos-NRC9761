#pragma once

#include <functional>

void torresHanoi(int numDiscos, char origen, char destino, char auxiliar, std::function<void(int, char, char)> moverDisco);
int ingresarNumeroDiscos();
void moverDisco(int disco, char origen, char destino); // Declaración de la función moverDisco
