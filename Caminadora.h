#pragma once
#include "Maquina.h"
#include <string>

using namespace std;

namespace Machine
{
	namespace Camina
	{
		class Caminadora :
			public Maquina
		{
		private:
			float Velocidad;
			float gradoinclinacion;
		public:
			Caminadora(float _Velocidad = 0.0, float _gradoinclinacion = 0.0, int _tiempouso = 0);
			~Caminadora();

			void setVelocidad(float _Velocidad);
			void setGrado(float _gradoinclinacion);

			float getVelocidad();
			float getGrado();
		};
	};
};



