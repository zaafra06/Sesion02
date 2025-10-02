#include "Persona.hpp"

Persona::Persona(int e)
{
    // El dni y el genero se establece de forma auto
	int numero = 10000000 + rand() % 90000000;
	char letra = 'A' + rand() % 26;
    this->edad = e;
    this->genero = rand() % 2;
    this->DNI = to_string(numero) + letra;  
    
}
int Persona::getEdad() { return this->edad; }
void Persona::mostrar() { cout << "Tiene " << getEdad() << ", es " << (esMujer()==1?"hombre" : "mujer") << " y su DNI es " << DNI << endl; }
bool Persona::esMujer() { return this->genero; }
void Persona::setEdad(int ed) { this->edad = ed; }
Persona::~Persona() {}
