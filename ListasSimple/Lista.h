/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES: Alejandro Cuadrado, Milena Maldonado, Jefferson Ulco
FECHA DE CREACIÓN: 27/05/2023
FECHA DE MODIFICACIÓN: 30/05/2023
Realizar el insertar por cola de una lista simple
 ***********************************************************************/

#pragma once

#include "Nodo.h"

class Lista {
private:
    Nodo* primero;
    Nodo* actual;

    bool listaVacia();

public:
    Lista();
    void insertar(int val);
    void insertarCola(int val);
    void eliminar();
    void eliminarCola();
    void mostrarLista();
    void mostrarMenu();

};
