#pragma once
#include <string>
#include "Usuario.h"

using namespace std;

namespace User
{
	namespace Admi
	{
		class Administrativo :
			public Usuario
		{
		private:
			int NUE;
			string Oficcina;
		public:
			//Constructorea y Destructorres

			Administrativo(int _NUE = 0, string _Oficcina = "", string _nombre = "", int _edad = 0);
			~Administrativo();

			//Setters y Getters
			void setNUE(int _NUE);
			void setOffice(string _Oficcina);

			int getNUE();
			string getOffice();

			string getDatosAdmi();
		};
	};
};