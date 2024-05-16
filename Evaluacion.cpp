#include "Evaluacion.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Evaluation;

Evaluacion::Evaluacion(int _peso, int _altura, int _ritmocardiaco, int _presi�narterial)
	:peso{_peso}, altura{_altura}, ritmocardiaco{ _ritmocardiaco }, presi�narterial{ _presi�narterial }
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
void Evaluacion::setPresi�narterial(int _presi�narterial)
{
	presi�narterial = _presi�narterial;
}

int Evaluacion::setPeso()
{
	return peso;
}
int Evaluacion::setAltura()
{
	return altura;
}
int Evaluacion::setRitmoCardiaco()
{
	return ritmocardiaco;
}
int Evaluacion::setPresi�narterial()
{
	return presi�narterial;
}