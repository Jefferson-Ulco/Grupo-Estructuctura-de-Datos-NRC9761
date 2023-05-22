/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 20/05/2023
FECHA DE MODIFICACIÓN: 21/05/2023

 ***********************************************************************/
#if !defined(suma_matriz_h)
#define uma_matriz_h
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 3
template <typename T>
class Matriz
{
public:
	//CONSTRUCTORES
   Matriz();
   Matriz(T f2,  T c2);
   //GET Y SET
   T** getMatriz(void);
   void setMatriz(T **newMatriz);
	T getF(void);
   void setF(T newF);
     T getC(void);
   void setC(T newC);
   void crearMatriz();
   void imprimirMatriz();
   void sumaRecursivaMatrices(Matriz mat1, Matriz mat2,T f2, T c2) ;
   void multiplicacionRecursivaMatrices(Matriz mat1, Matriz mat2, T i, T j, T k, T dimension) ;
   void multiplicacionRecursivaHelper(Matriz mat1, Matriz mat2, T f1, T c1, T f2, T c2); 
   void multiplicacionRecursivaSuma(Matriz mat1, Matriz mat2, T f1, T c1, T f2, T c2, T& valor);
  
protected:
private:
   T **matrizI;
   T f;
   T c;
};

#endif
