#include "Lista.h"
#include <iostream>

bool Lista::listaVacia() {
    return (primero == nullptr);
}

Lista::Lista() {
    primero = nullptr;
    actual = nullptr;
}

void Lista::insertar(int val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        primero = nuevo;
         actual=nuevo;
    } else {
        nuevo->siguiente = primero;
            primero = nuevo;
    }

}

void Lista::insertarCola(int val) {
    Nodo* nuevo = new Nodo(val);
    if (listaVacia()) {
        primero = nuevo;
    } else {
        actual->siguiente = nuevo;
    }
    actual = nuevo;
}
void Lista::eliminar() {
    Nodo* aux = primero;
    if (listaVacia()) {
        std::cout << "La lista esta vacía" << std::endl;
    } else {
        primero=primero->siguiente;
        delete aux;
    }
   
}

void Lista::eliminarCola() {
    Nodo* aux = primero;
    if (listaVacia()) {
        std::cout << "La lista esta vacía" << std::endl;
    } else {
         while (aux->siguiente != actual)
            {
                aux = aux->siguiente;
            }
            delete actual;
            actual= aux;
            actual->siguiente= NULL;
    }
   
}

void Lista::mostrarLista() {
    Nodo* tmp = primero;
    	std::cout << "\n/////////////////////////////////\n\n" ;
    while (tmp) {
    
        std::cout << tmp->valor << "-->";
        tmp = tmp->siguiente;
    }
    std::cout << "NULL";
       std::cout << "\n\n/////////////////////////////////\n" ;
}

void Lista::mostrarMenu() {
    int opcion = 0;
    int valor = 0;

    while (opcion != 6) {
        std::cout << "----- MENU -----" << std::endl;
        std::cout << "1. Insertar al principio" << std::endl;
        std::cout << "2. Insertar al final" << std::endl;
        std::cout << "3. Eliminar al principio" << std::endl;
        std::cout << "4. Eliminar al final" << std::endl;
        std::cout << "5. Mostrar lista" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el valor a insertar al principio: ";
                std::cin >> valor;
                insertar(valor);
                break;
            case 2:
                std::cout << "Ingrese el valor a insertar al final: ";
                std::cin >> valor;
                insertarCola(valor);
                break;
            case 3:
                std::cout << "Eliminando el primer nodo\n ";
                eliminar();
                break;
            case 4:
                std::cout << "Eliminando el ultimo nodo\n ";
                eliminarCola();
                break;
            case 5:
                std::cout << "Lista: ";
                mostrarLista();
                std::cout << std::endl;
                break;
            case 6:
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opción invalida. Intente nuevamente." << std::endl;
                break;
        }
    }
}

