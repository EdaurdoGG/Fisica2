#include "Maquina.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Machine;


Maquina::Maquina(int _tiempouso)
	:tiempouso{_tiempouso}
{

}
Maquina::~Maquina()
{

}

//Setters y Getters

void Maquina::setTiempo(int _tiempouso)
{
	tiempouso = _tiempouso;
}
int Maquina::getTiempo()
{
	return tiempouso;
}
