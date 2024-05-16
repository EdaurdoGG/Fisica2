#pragma once
#include <string>

using namespace std;

namespace Machine
{
	class Maquina
	{
	protected:
		int tiempouso;
	public:
		//Constructores y Destructores 

		Maquina(int _tiempouso = 0);
		~Maquina();

		//Setters y Getters

		void setTiempo(int _tiempouso);
		int getTiempo();
	};
};

