#pragma once
#include "Maquina.h"
#include <string>

using namespace std;

namespace Machine
{
	namespace Elip
	{
		class Eliptica :
			public Maquina
		{
		private:
			int numeropedaleadas;
		public:
			Eliptica(int _numeropedaleadas = 0, int _tiempouso = 0);
			~Eliptica();

			void setPedaleadas(int _numeropedaleadas);

			int getPedaleadas();
		};
	};
};

