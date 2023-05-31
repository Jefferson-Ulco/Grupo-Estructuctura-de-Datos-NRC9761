/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 27/05/2023
FECHA DE MODIFICACIÓN: 30/05/2023
Realizar el insertar por cola de una lista simple
 ***********************************************************************/


#include "Nodo.h"

Nodo::Nodo(int val, Nodo* sig) {
    this->valor = val;
    this->siguiente = sig;
}

Nodo::~Nodo(){
}

void Nodo::setValor(int val){
            this->valor = val;
        }

void Nodo::setSiguiente(Nodo *sig){
            this->siguiente = sig;
        }

int Nodo::getValor(){
            return valor;
        }

Nodo *Nodo::getSiguiente(){
            return siguiente;
        }
