#include <iostream>
#include "hanoi.h"

int main() {
  int num_discos;
  ingresarNumero(num_discos);

  hanoi(num_discos, 'A', 'C', 'B');

  return 0;
}
