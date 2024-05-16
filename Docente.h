#pragma once
#include <string>
#include "Usuario.h"

using namespace std;

namespace User
{
	namespace Doc
	{
		class Docente :
			public Usuario
		{
		private:
			int NUE;
			string Titulo;
		public:

			//Constructores y Destructores
			Docente(int _NUE = 0, string _Titulo = "", string _nombre = "", int _edad = 0);
			~Docente();

			//Setters y Getters

			void setNUE(int _NUE);
			void setTitulo(string _Titulo);

			int getNUE();
			string getTitulo();

			string getDatosDocente();
		};
	};
};