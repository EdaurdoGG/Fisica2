#pragma once
#include "Maquina.h"

namespace Machine
{
	namespace remo
	{
		class Remo :
			public Maquina
		{
		private:
			int Peso;
			int Repeticiones;
		public:
			Remo(int _Peso = 0, int R_epeticiones = 0, int _tiempouso = 0);
			~Remo();

			void setPeso(int _Peso);
			void setRepeticiones(int _Repeticiones);

			int getPeso();
			int getRepeticiones();

		};
	};
};

