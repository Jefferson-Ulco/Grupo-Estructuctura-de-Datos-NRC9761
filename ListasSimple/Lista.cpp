
/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 29/05/2023
FECHA DE MODIFICACIÓN: 29/05/2023
Enunciado
 ***********************************************************************/

#include <iostream>
#include "Lista.h"
bool Lista::listaVacia(){
			return (this->primero==NULL);
		}

Lista::Lista(){
			this->primero=NULL;
			this->actual=NULL;
		}

void Lista:: insertar(int val){
		Nodo *nuevo=new Nodo(val,NULL);
		if (listaVacia()){
			this->primero=nuevo;
		}
		else{
			this->actual->siguiente=nuevo;
		}
		this->actual=nuevo;
	}
	
	
void Lista:: mostrarLista(){
		Nodo *tmp=this->primero;
		while(tmp){
			cout<<tmp->valor<<"-->";
			tmp=tmp->siguiente;
		}
		cout<<"NULL";
	}


