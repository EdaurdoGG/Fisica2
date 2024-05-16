#include "Estudiante.h"
#include <iostream>
#include <string>

using namespace std;
using namespace User;
using namespace Studen;

Estudiante::Estudiante(int _NUA, string _semestre, string _Carrera, string _nombre, int _edad)
	:Usuario{ _nombre, _edad }, NUA{_NUA}, semestre{_semestre}, Carrera{_Carrera}
{

}
Estudiante::~Estudiante()
{

}

//Setter y Getters

void Estudiante::setNUA(int _NUA)
{
	NUA = _NUA;
}
void Estudiante::setSemetre(string _semestre)
{
	semestre = _semestre;
}
void Estudiante::setCarrera(string _Carrera)
{
	Carrera = _Carrera;
}
int Estudiante::getNUA()
{
	return NUA;
}
string Estudiante::getSemetre()
{
	return semestre;
}
string Estudiante::getCarrera()
{
	return Carrera;
}

string Estudiante::getDatos()
{
	string Datos;

	Datos = "Tu nombre es " + nombre + " con edad " + to_string(edad) + " y NUA " + to_string(NUA) + " que esta cursando el " + semestre + " de la carrera de " + Carrera;
	return Datos;
}