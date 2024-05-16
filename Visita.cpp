#include "Visita.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Visit;

Visita::Visita(int _numvisita, string _fecha, int _hora)
	:numvisita{_numvisita}, fecha{_fecha}, hora{_hora}
{

}
Visita::~Visita()
{

}

//Setters y Getters

void Visita::setNumVisita(int _numvisita)
{
	numvisita = _numvisita;
}
void Visita::setFecha(string _fecha)
{
	fecha = _fecha;
}
void Visita::setHora(int _hora)
{
	hora = _hora;
}

int Visita::getNumVisita()
{
	return numvisita;
}
string Visita::getFecha()
{
	return fecha;
}
int Visita::getHora()
{
	return hora;
}
