#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;
using namespace User;

Usuario::Usuario(string _nombre, int _edad)
	:nombre{_nombre}, edad{_edad}
{

}
Usuario:: ~Usuario()
{

}

//Setter y Getter

void Usuario::setNombre(string _nombre)
{
	nombre = _nombre;
}
void Usuario::setEdad(int _edad)
{
	edad = _edad;
}

string Usuario::getNombre()
{
	return nombre;
}
int Usuario::getEdad()
{
	return edad; 
}
