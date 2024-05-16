#include "Caminadora.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Machine;
using namespace Camina;

Caminadora::Caminadora(float _Velocidad, float _gradoinclinacion, int _tiempouso)
	:Maquina{ _tiempouso }, Velocidad{_Velocidad }, gradoinclinacion{_gradoinclinacion }
{

}
Caminadora::~Caminadora()
{

}

void Caminadora::setVelocidad(float _Velocidad)
{
	Velocidad = _Velocidad;
}
void Caminadora::setGrado(float _gradoinclinacion)
{
	gradoinclinacion = _gradoinclinacion;
}

float Caminadora::getVelocidad()
{
	return Velocidad;
}
float Caminadora::getGrado()
{
	return gradoinclinacion;
}
