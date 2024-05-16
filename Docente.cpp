#include "Docente.h"
#include <iostream>
#include <string>

using namespace std;
using namespace User;
using namespace Doc;

Docente::Docente(int _NUE, string _Titulo, string _nombre, int _edad)
	:Usuario{ _nombre, _edad }, NUE{_NUE}, Titulo{_Titulo}
{

}
Docente::~Docente()
{

}

//Setters y Getters

void Docente::setNUE(int _NUE)
{
	NUE = _NUE;
}
void Docente::setTitulo(string _Titulo)
{
	Titulo = _Titulo;
}

int Docente::getNUE()
{
	return NUE;
}
string Docente::getTitulo()
{
	return Titulo;
}

string Docente::getDatosDocente()
{
	string Datos;

	Datos = "Tu nombre es" + nombre + "con la edad" + to_string(edad) + " y NUE" + to_string(NUE) + " y que cuanta con su titulo en  " + Titulo;
	return Datos;
}