#pragma once
#include <string>

using namespace std;

namespace Evaluation
{
	class Evaluacion
	{
	private:
		int peso;
		int altura;
		int ritmocardiaco;
		int presi�narterial;
	public:
		//Constructores y Destructores 
		Evaluacion(int _peso = 0, int _altura = 0, int _ritmocardiaco = 0, int _presi�narterial = 0);
		~Evaluacion();

		//Setters y Getters
		void setPeso(int _peso);
		void setAltura(int _altura);
		void setRitmoCardiaco(int _ritmocardiaco);
		void setPresi�narterial(int _presi�narterial);

		int setPeso();
		int setAltura();
		int setRitmoCardiaco();
		int setPresi�narterial();
	};
};
