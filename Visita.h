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
		string hora;
	public:

		//Constructores y Destructores 
		Visita(int _numvisita = 0, string _fecha = "", string _hora = "");
		~Visita();

		//Setters y Getters
		void setNumVisita(int _numvisita);
		void setFecha(string _fecha);
		void setHora(string _hora);

		int getNumVisita();
		string getFecha();
		string getHora();
	};

};
