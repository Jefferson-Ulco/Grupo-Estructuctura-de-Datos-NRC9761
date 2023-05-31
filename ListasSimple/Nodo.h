/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 27/05/2023
FECHA DE MODIFICACIÓN: 30/05/2023
Realizar el insertar por cola de una lista simple
 ***********************************************************************/

#include <iostream>
#pragma once

class Nodo {
private:
    int valor;
    Nodo* siguiente;

public:
    Nodo(int val, Nodo* sig = nullptr);
    ~Nodo();
    void setValor(int val);
    void setSiguiente(Nodo *sig);
	int getValor();
    Nodo *getSiguiente();
    friend class Lista;
};
