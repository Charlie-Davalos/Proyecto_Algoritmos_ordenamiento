#include "GestorPersonas.h"
#include <algorithm>
#include <iostream>

void GestorPersonas::agregarPersona(const Persona& persona) {
    personas.push_back(persona);
}

void GestorPersonas::ordenarPorEdad() {
    std::sort(personas.begin(), personas.end(), [](const Persona& a, const Persona& b) {
        return a.edad < b.edad;
    });
}

std::vector<Persona> GestorPersonas::buscarPorCiudad(const std::string& ciudad) const {
    std::vector<Persona> personasEnCiudad;
    for (const auto& persona : personas) {
        if (persona.ciudad == ciudad) {
            personasEnCiudad.push_back(persona);
        }
    }
    return personasEnCiudad;
}

void GestorPersonas::mostrarLista() const {
    for (const auto& persona : personas) {
        std::cout << persona.nombre << ", " << persona.edad << " años, de " << persona.ciudad << std::endl;
    }
}
