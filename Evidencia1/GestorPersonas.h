#ifndef GESTORPERSONAS_H
#define GESTORPERSONAS_H

#include "Persona.h"
#include <vector>

class GestorPersonas {
public:
    void agregarPersona(const Persona& persona);
    void ordenarPorEdad();
    std::vector<Persona> buscarPorCiudad(const std::string& ciudad) const;
    void mostrarLista() const;

private:
    std::vector<Persona> personas;
};

#endif
