#include <iostream>
#include "Lista.cpp"
int main(int argc, char** argv) {
	Lista lst;
	lst.insertar(5);
	lst.insertar(15);
	lst.insertar(25);
	lst.insertar(35);
	lst.insertar(45);
	lst.insertar(55);
	lst.insertar(65);
	lst.insertar(57);
	lst.insertar(85);
	lst.insertar(95);
	lst.mostrarLista();
	return 0;
}
