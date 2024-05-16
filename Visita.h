#pragma once
#include <string>

using namespace std;

namespace Visit
{
	class Visita
	{
	private:
		int numvisita;
		string fecha;
		int hora;
	public:

		//Constructores y Destructores 
		Visita(int _numvisita = 0, string _fecha = "", int _hora = 0);
		~Visita();

		//Setters y Getters
		void setNumVisita(int _numvisita);
		void setFecha(string _fecha);
		void setHora(int _hora);

		int getNumVisita();
		string getFecha();
		int getHora();
	};

};
