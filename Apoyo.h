#pragma once
#include <string>
#include "Usuario.h"

using namespace std;

namespace User
{
	namespace help
	{
		class Apoyo :
			public Usuario
		{
		private:
			int NUE;
			string puesto;
			int HorasTrabajo;
		public:
			//Constructorea y Destructorres

			Apoyo(int _NUE = 0, string _puesto = "", int _HorasTrabajo = 0, string _nombre = "", int _edad = 0);
			~Apoyo();

			//Setters y Getters
			void setNUE(int _NUE);
			void setpuesto(string _puesto);
			void setHorasTrabajo(int _HorasTrabajo);

			int getNUE();
			string getpuesto();
			int getHorasTrabajo();

			string getDatosApoyo();
		};
	};
};