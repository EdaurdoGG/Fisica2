#include "Evaluacion.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Evaluation;

Evaluacion::Evaluacion(int _peso, int _altura, int _ritmocardiaco, int _presiónarterial)
	:peso{_peso}, altura{_altura}, ritmocardiaco{ _ritmocardiaco }, presiónarterial{ _presiónarterial }
{

}
Evaluacion::~Evaluacion()
{

}

//Setters y Getters
void Evaluacion::setPeso(int _peso)
{
	peso = _peso;
}
void Evaluacion::setAltura(int _altura)
{
	altura = _altura;
}
void Evaluacion::setRitmoCardiaco(int _ritmocardiaco)
{
	ritmocardiaco = _ritmocardiaco;
}
void Evaluacion::setPresiónarterial(int _presiónarterial)
{
	presiónarterial = _presiónarterial;
}

int Evaluacion::getPeso()
{
	return peso;
}
int Evaluacion::getAltura()
{
	return altura;
}
int Evaluacion::getRitmoCardiaco()
{
	return ritmocardiaco;
}
int Evaluacion::getPresiónarterial()
{
	return presiónarterial;
}