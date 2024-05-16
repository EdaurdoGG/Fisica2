#pragma once
#include <string>
#include "Usuario.h"

using namespace std;

namespace User
{
	namespace Studen
	{
		class Estudiante :
			public Usuario
		{
		private:
			int NUA;
			string semestre;
			string Carrera;

		public:
			//Constructores y Destructores 
			Estudiante(int _NUA = 0, string _semestre = "", string _Carrera = "", string _nombre = "", int _edad = 0);
			~Estudiante();

			//Setter y Getters

			void setNUA(int _NUA);
			void setSemetre(string _semestre);
			void setCarrera(string _Carrera);

			int getNUA();
			string getSemetre();
			string getCarrera();

			//Funciones 
			string getDatos();
		};
	};
};