#include "Remo.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Machine;
using namespace remo;

Remo::Remo(int _Peso, int _Repeticiones, int _tiempouso)
	:Maquina{ _tiempouso }, Peso{_Peso}, Repeticiones{_Repeticiones }
{

}
Remo::~Remo()
{

}

void Remo::setPeso(int _Peso)
{
	Peso = _Peso;
}
void Remo::setRepeticiones(int _Repeticiones)
{
	Repeticiones = _Repeticiones;
}

int Remo::getPeso()
{
	return Peso;
}
int Remo::getRepeticiones()
{
	return Repeticiones;
}
