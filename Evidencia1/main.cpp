#include "GestorPersonas.h"
#include <fstream> 
#include <iostream>
#include <limits>
#include <sstream>   
using namespace std; 

int main() {
    GestorPersonas gestor;

  // Agregar personas desde el archivo de texto
  ifstream archivo("personas.txt"); // Abre el archivo para lectura
    if (archivo.is_open()) {
    string linea;
    while (getline(archivo, linea)) { // No es necesario std::getline aquí
        istringstream ss(linea);
        string nombre, ciudad;
        int edad;
        if (getline(ss, nombre, ',') && ss >> edad && ss.ignore() &&
            getline(ss, ciudad)) {
        gestor.agregarPersona(Persona(nombre, edad, ciudad));
        }
    }
    archivo.close(); // Cierra el archivo después de leer
    } else {
    cout << "No se pudo abrir el archivo 'personas.txt'." << endl;
    return 1;
    }

    while (true) {
    cout << "Opciones:" << endl;
    cout << "1. Mostrar lista ordenada por edad" << endl;
    cout << "2. Buscar personas por ciudad" << endl;
    cout << "3. Salir" << endl;

    int opcion;
    if (!(cin >> opcion)) {
      // Hubo un error al leer un número
        cin.clear();  // Restaura el estado de cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      // Limpia el búfer
        cout << "Opción no válida. Inténtalo de nuevo." << endl;
        continue;
    }

    if (opcion == 1) {
        gestor.ordenarPorEdad();
        gestor.mostrarLista();
    } else if (opcion == 2) {
        string ciudad;
        cout << "Ingresa la ciudad para buscar: ";
        cin >> ciudad;

        vector<Persona> personasEnCiudad = gestor.buscarPorCiudad(ciudad);
        if (!personasEnCiudad.empty()) {
        cout << "Personas en " << ciudad << ":" << endl;
        for (const auto &persona : personasEnCiudad) {
            cout << persona.nombre << ", " << persona.edad << " años" << endl;
        }
        } else {
        cout << "No se encontraron personas en " << ciudad << "." << endl;
        }
    } else if (opcion == 3) {
        cout << "Hasta luego!" << endl;
        break;
    } else {
        cout << "Opción no válida. Inténtalo de nuevo." << endl;
    }
    }

    return 0;
}
