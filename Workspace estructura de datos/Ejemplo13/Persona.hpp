#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Persona
{
	
private:
    bool genero; // 1 si es mujer y 0 si es hombre
    int edad;
    string DNI;
	
public:
    Persona(int edad);
	int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
    ~Persona();
    
};

#endif //PERSONA_HPP
