/***********************************************************************
Universidad de las Fuerzas Armadas ESPE
AUTORES:Milena Maldonado, Jefferson Ulco Alejandro, Cuadrado
FECHA DE CREACIÓN: 01/06/2023
FECHA DE MODIFICACIÓN: 07/06/2023
Proyecto 1er Parcial- Registro y control de personal
 ***********************************************************************/
#include "ListaDoble.cpp"
#include "Registro.cpp"
#include "Persona.cpp"

#include <sstream>
#include <iostream>
#include <ostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{

    Persona persona1;
    Registro registro;
    cout << " REGISTRO  Y CONTROL" << endl;
    Validacion validacion;
    string opcioneS, dato, datoAntiguo, datoNuevo;
    int opcion = 0;

    // persona1.registrarFechaNacimiento();
    // cout << "Fecha de nacmimiento" << persona1.getFechaNacimiento().getDia();
    ////persona1.calcularEdad();
    // persona1.registroPersona();
    // registro.registrarEntrada();
    // persona1.mostrarRegistroPersona();

    // persona1.editarRegistroPersona();
    // persona1.eliminarRegistroPersona("Luis");

    do
    {
        system("cls");

        cout << "\n** CONTROL DE USUARIOS **" << endl;
        cout << "1. Registrar usuarios" << endl;
        cout << "2. Registrar entrada" << endl;
        cout << "3. Registrar salida" << endl;
        cout << "4. Registrar entrada automatica" << endl;
        cout << "5. Registrar salida automatica" << endl;
        cout << "6. Eliminar usuarios" << endl;
        cout << "7. Actualizar usuarios" << endl;
        cout << "8. Imprimir usuarios" << endl;
        cout << "9. Imprimir registros entrada" << endl;
        cout << "10. Imprimir registros salida" << endl;
        cout << "11. Buscar usuarios" << endl;
        cout << "12. Salir" << endl;

        cout << "Ingrese una opción: ";
        opcioneS = validacion.integerImput(">");
        int opcion = atoi(
            opcioneS.c_str());

        switch (opcion)
        {
        case 1:
            cout << "\nHa seleccionado Registrar usuarios." << endl;
            persona1.registroPersona();
            system("pause");
            break;
        case 2:
            cout << "\nHa seleccionado Registrar entrada." << endl;
            registro.registrarEntrada();
            system("pause");
            break;
        case 3:
            cout << "\nHa seleccionado Registrar salida." << endl;
            registro.registrarSalida();
            system("pause");
            break;
        case 4:
            cout << "\nHa seleccionado Registrar entrada." << endl;
            registro.registrarEntradaAutomatico();
            system("pause");
            break;
        case 5:
            cout << "\nHa seleccionado Registrar salida." << endl;
            registro.registrarSalidaAutomatico();
            system("pause");
            break;
        case 6:
            cout << "\nHa seleccionado Eliminar usuario." << endl;
            cin >> dato;
            persona1.eliminarRegistroPersona(dato);
            system("pause");
            break;
        case 7:
            cout << "\nHa seleccionado Actualizar usuarios." << endl;

            cout << "\nIngrese el dato a modificar: ";
            cin >> datoAntiguo;
            cout << "\nIngrese el nuevo dato: ";
            cin >> datoNuevo;
            persona1.editarRegistroPersona(datoAntiguo, datoNuevo);
            system("pause");
            break;
        case 8:
            cout << "\nHa seleccionado Imprimir usuarios." << endl;
            persona1.mostrarRegistroPersona();
            system("pause");

            break;
        case 9:
            cout << "\nHa seleccionado Imprimir registros entrada" << endl;
            registro.mostrarRegistrosEntrada();
            system("pause");

            break;
        case 10:
            cout << "\nHa seleccionado Imprimir registros salida." << endl;
            registro.mostrarRegistrosSalida();
            system("pause");

            break;
        case 11:
            cout << "\nHa seleccionado buscar usuarios." << endl;
            cout<<"Ingrese el dato a buscar: ";
            cin >> dato;
            persona1.buscarRegistroPersona(dato);
            
            system("pause");
            break;
        case 12:
            cout << "Saliendo..." << endl;
            system("pause");
            exit(0);
            break;
        default:
            cout << "\nOpción inválida. Por favor, ingrese un número válido." << endl;
            break;
        }
    } while (opcion != 12);
    return 0;
}
