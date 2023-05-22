/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 20/05/2023
FECHA DE MODIFICACIÓN: 21/05/2023

 ***********************************************************************/
#include "Matriz.h"
#include "iostream"
//#include "Proceso.h"

using namespace std;
template <typename T>
Matriz<T>::Matriz(){

}
template <typename T>
Matriz<T>::Matriz(T f2, T c2){
		this->f=f2;
		this->c=c2;
		
		this->matrizI = (int**)malloc(f2 * sizeof(int*));
		for (int j = 0; j < c2; j++) {
		//reservo memoria para las columnas 
		*(this->matrizI + j) = (int*)malloc(c2 * sizeof(int*));

	}
		
}
/////////////////GET Y SET //////////////////////////////77
template <typename T>
T** Matriz<T>::getMatriz(void)
{
   return this->matrizI;
}
template <typename T>
void Matriz<T>::setMatriz(T **newMatriz)
{
	matrizI = newMatriz;
}
////////////////////GET Y SET///////////////////////////////
template <typename T>
T Matriz<T>::getF(void)
{
   return f;
}
template <typename T>
void Matriz<T>::setF(T newF)
{
  f = newF;
}
////////////////////GET Y SET//////////////////////////////////
template <typename T>
T Matriz<T>::getC(void)
{
   return c;
}
template <typename T>
void Matriz<T>::setC(T newC)
{
  c = newC;
}
/////////////////////////////////////////////////
template <typename T>
void Matriz<T>::imprimirMatriz()
{
	printf("\n\nLa matriz es: \n\n" ) ;
	for (int i = 0; i < this->f; i++) {
		for (int j = 0; j < this->c; j++) {			
			printf("%d ", *(*(this->matrizI + i) + j)) ;
			
		}
		printf("\n");
	}

}
/////////////////////////////////////Operaciones matriz//////////////////////
template <typename T>
void Matriz<T>:: crearMatriz()
{
	srand(time(NULL));
	for (int i = 0; i < this->f; i++) {
		for (int j = 0; j < this->c; j++) {
			*(*(this->matrizI + i) + j) = (int)((rand() / 32768.1) * 1000);
		}
	}
	
}
template <typename T>
void Matriz<T>::sumaRecursivaMatrices(Matriz mat1, Matriz mat2,T f2, T c2) {
	
	if (f2>= 0 && c2 >= 0) {
		
		
		*(*(this->matrizI + f2) + c2) = *(*(mat1.getMatriz() +f2) + c2) + *(*(mat2.getMatriz() + f2) + c2);

		sumaRecursivaMatrices(mat1, mat2, f2-1,c2);
		
		sumaRecursivaMatrices(mat1, mat2,f2,c2-1);
		
				
	}
	
}
template <typename T>
void Matriz<T>::multiplicacionRecursivaMatrices(Matriz mat1, Matriz mat2, T f1, T c1, T f2, T c2) {
    if (c1 >= 0 && f2 >= 0) {
        multiplicacionRecursivaHelper(mat1, mat2, f1, c1, f2, c2);
        multiplicacionRecursivaMatrices(mat1, mat2, f1, c1 - 1, f2, c2);
    }
}
template <typename T>
void Matriz<T>:: multiplicacionRecursivaHelper(Matriz mat1, Matriz mat2, T f1, T c1, T f2, T c2) {
    if (c1 == 0 && f2 > 0) {
        multiplicacionRecursivaMatrices(mat1, mat2, f1, f1, f2 - 1, f1);
    }

    T valor = 0;
    multiplicacionRecursivaSuma(mat1, mat2, f1, c1, f2, c2, valor);
//guardar valores en la matriz
    *(*(this->matrizI + f2) + c1) = valor;
}
template <typename T>
void Matriz<T>::multiplicacionRecursivaSuma(Matriz mat1, Matriz mat2, T f1, T c1, T f2, T c2, T& valor) {
    if (f1 >= 0) {
    	//proceso de multiplicar y sumar todo
        valor += (*(*(mat1.getMatriz() + f1) + c1)) * (*(*(mat2.getMatriz() + f2) + f1));
        multiplicacionRecursivaSuma(mat1, mat2, f1 - 1, c1, f2, c2, valor);
    }
}





