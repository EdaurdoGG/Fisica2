#include "Administrativo.h"
#include <iostream>
#include <string>

using namespace std;
using namespace User;
using namespace Admi;


Administrativo::Administrativo(int _NUE, string _Oficcina, string _nombre, int _edad)
	:Usuario {_nombre, _edad}, NUE{_NUE}, Oficcina{_Oficcina }
{

}
Administrativo::~Administrativo()
{

}

//Setters y Getters
void Administrativo::setNUE(int _NUE)
{
	NUE = _NUE;
}
void Administrativo::setOffice(string _Oficcina)
{
	Oficcina = _Oficcina;
}

int Administrativo::getNUE()
{
	return NUE;
}
string Administrativo::getOffice()
{
	return Oficcina;
}


string Administrativo::getDatosAdmi()
{
	string Datos;

	Datos = "Tu nombre es" + nombre + "con edad" + to_string(edad) + "y NUE" + to_string(NUE) + "que se encunatra en la oficcina de" + Oficcina;
	return Datos;
}
