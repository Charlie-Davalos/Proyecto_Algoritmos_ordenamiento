#ifndef PERSONA_H
#define PERSONA_H

#include <string>

struct Persona {
    std::string nombre;
    int edad;
    std::string ciudad;

    Persona(const std::string &n, int e, const std::string &c)
    : nombre(n), edad(e), ciudad(c) {}
};

#endif
