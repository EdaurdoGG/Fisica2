#include "Apoyo.h"
#include <iostream>
#include <string>

using namespace std;
using namespace User;
using namespace help;

Apoyo::Apoyo(int _NUE, string _puesto, int _HorasTrabajo, string _nombre, int _edad)
	:Usuario{_nombre, _edad }, NUE{_NUE}, puesto{_puesto}, HorasTrabajo{ _HorasTrabajo }
{

}
Apoyo::~Apoyo()
{

}

//Setters y Getters
void Apoyo::setNUE(int _NUE)
{
	NUE = _NUE;
}
void Apoyo::setpuesto(string _puesto)
{
	puesto = _puesto;
}
void Apoyo::setHorasTrabajo(int _HorasTrabajo)
{
	HorasTrabajo = _HorasTrabajo;
}

int Apoyo::getNUE()
{
	return NUE;
}
string Apoyo::getpuesto()
{
	return puesto;
}
int Apoyo::getHorasTrabajo()
{
	return HorasTrabajo;
}

string Apoyo::getDatosApoyo()
{
	string Datos;

	Datos = "Tu nombre es" + nombre + "con edad" + to_string(edad) + "y NUE" + to_string(NUE) + " Encargad@ del pueto " + puesto + " el cual cubre por " + to_string(HorasTrabajo) + "horas al dia";
	return Datos;
}
