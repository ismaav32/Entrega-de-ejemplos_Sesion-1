#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
using namespace std;


class Persona
{
public:
    Persona();
    ~Persona();

private:
    bool genero; // 1 si es M  0 si es H
    int edad;
	char[10] DNI;
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
		
};
#endif // PERSONA_HPP