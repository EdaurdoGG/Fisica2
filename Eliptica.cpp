#include "Eliptica.h"
#include <iostream>
#include <string>

using namespace std;
using namespace Machine;
using namespace Elip;

Eliptica::Eliptica(int _numeropedaleadas, int _tiempouso)
	:Maquina{ _tiempouso }, numeropedaleadas{ _numeropedaleadas }
{

}
Eliptica::~Eliptica()
{

}

void Eliptica::setPedaleadas(int _numeropedaleadas)
{
	numeropedaleadas = _numeropedaleadas;
}

int Eliptica::getPedaleadas()
{
	return numeropedaleadas;
}
