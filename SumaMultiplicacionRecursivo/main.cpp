/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 20/05/2023
FECHA DE MODIFICACIÓN: 21/05/2023

 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3

#include "Matriz.cpp"
using namespace std;


int main(int argc, char** argv) {
	
	Matriz<int> matriz1(3,3);
	Matriz<int> matriz2(3,3);
	Matriz<int> matriz3(3,3);
	Matriz<int> matriz4(3,3);
	
	matriz1.crearMatriz();
	matriz2.crearMatriz();

	matriz1.imprimirMatriz();
	matriz2.imprimirMatriz();
		printf("\nSuma: \n" ) ;
	matriz3.sumaRecursivaMatrices(matriz1,matriz2,2,2);
	matriz3.imprimirMatriz();
			printf("\nMultiplicacion: \n" ) ;
	matriz4.multiplicacionRecursivaMatrices(matriz1,matriz2,2,2,2,2);
	matriz4.imprimirMatriz();
	
	
	return 0;
}
