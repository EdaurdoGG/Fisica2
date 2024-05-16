#pragma once
#include<string>

using namespace std;

namespace User
{
	class Usuario
	{
	protected:
		string nombre;
		int edad;
	public:
		//Constructores y Destructores 
		Usuario(string _nombre = "", int _edad = 0);
		~Usuario();

		//Setter y Getter
		void setNombre(string _nombre);
		void setEdad(int _edad);

		string getNombre();
		int getEdad();
	};
};

