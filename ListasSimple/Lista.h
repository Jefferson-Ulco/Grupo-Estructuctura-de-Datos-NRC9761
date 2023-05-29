#pragma once
#include "Nodo.h"
#include <iostream>
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
	
	public:
		Lista();
	bool listaVacia();
	void insertar(int val);
	void mostrarLista();  
};                   
