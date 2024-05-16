#include <iostream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "Visita.h"
#include "Evaluacion.h"
#include "Maquina.h"
#include "Caminadora.h"
#include "Eliptica.h"
#include "Remo.h"
#include "Administrativo.h"
#include "Apoyo.h"
#include "Docente.h"
#include "Estudiante.h"

using namespace std;
using namespace User;
using namespace Visit;
using namespace Evaluation;
using namespace Machine;
using namespace Camina;
using namespace Elip;
using namespace remo;
using namespace Admi;
using namespace help;
using namespace Doc;
using namespace Studen;


int main()
{
	//Todas las variables de todas las clases:

	// Variables de Usuario
	string nombre;
	int edad;

	// Vriables de Visita
	int numvisita;
	string fecha;
	string hora;

	// Variables de Evaluacion
	int peso;
	int altura;
	int ritmocardiaco;
	int presiónarterial;

	// Variables de Maquina
	int tiempouso;

	// Variables de Caminadora
	float Velocidad;
	float gradoinclinacion;

	// Variables de Eliptica
	int numeropedaleadas;

	// Variables de Remo
	int Peso;
	int Repeticiones;

	// Variables de Administrativo
	int NUE;
	string Oficcina;

	// Variables de Apoyo
	string puesto;
	int HorasTrabajo;

	// Variables de Docente
	string Titulo;

	// Variables de Estudiante
	int NUA;
	string semestre;
	string Carrera;

	//Variable de control
	string Tipo;
	int Opcion;

	//Vectores
	vector<Estudiante>DatosEst;
	vector<Docente>DatosDoc;
	vector<Administrativo>DatosAdmi;
	vector<Apoyo>DatosApoyo;

	Usuario user1;
	Visita visit1;
	Evaluacion Eva1;
	Maquina maquina1;
	Administrativo admi1;
	Apoyo apoyo1;
	Docente Doc1;
	Estudiante est1;
	Remo remo1;
	Eliptica elip1;
	Caminadora camina1;


	cout << "Bienvenido al Modulo de Activasion Fisica del DEM" << endl;
	cout << "Porfavor Identificate (Estudiante/ Docente/ Administrativo/ Apoyo)" << endl;
	cin >> Tipo;

	if (Tipo == "Estudiante" || Tipo == "estudiante")
	{
		cout << "Dame tu nombre porfavor" << endl;
		cin >> nombre;
		cout << "Ingresa tu Edad" << endl;
		cin >> edad;
		cout << "Ingresa tu NUA" << endl;
		cin >> NUA;
		cout << "Cual es el semetre que estas cursando" << endl;
		cin >> semestre;
		cout << "Cual es la carrera" << endl;
		cin >> Carrera;

		user1.setNombre(nombre);
		user1.setEdad(edad);
		est1.setNUA(NUA);
		est1.setSemetre(semestre);
		est1.setCarrera(Carrera);

		cout << "Tus datos son los siguientes\n" << endl;
		DatosEst.push_back(est1);
		cout << est1.getDatos();
		cout << "\n";

		cout << "Para continuar con la visita ingresa 1\n" << endl;
		cin >> numvisita;
		numvisita = numvisita + 1;

		cout << "Ingresa la fecha de hoy" << endl;
		cin >> fecha;
		cout << "Ingresa la hora" << endl;
		cin >> hora;
		visit1.setFecha(fecha);
		visit1.setHora(hora);

		if (numvisita == 20)
		{
			cout << "Felicidades completaste las 20 visitas" << endl;
			cout << "Para darte una evalicion correcta ingresa lo siguinte" << endl;
			cout << "Ingresa cual es tu peso" << endl;
			cin >> peso;
			cout << "Ingresa cual es tu altura" << endl;
			cin >> altura;
			cout << "Ingresa cual tu ritmo cardiaco" << endl;
			cin >> ritmocardiaco;
			cout << "Ingresa cual es tu presion arterial" << endl;
			cin >> presiónarterial;

			Eva1.setPeso(peso);
			Eva1.setAltura(altura);
			Eva1.setRitmoCardiaco(ritmocardiaco);
			Eva1.setPresiónarterial(presiónarterial);

			if (peso > 100 && altura < 1.6 && ritmocardiaco > 100 && presiónarterial > 140)
			{
				cout << "Su condicion fisica es muy mala." << endl;
			}
			else
				if (peso > 90 && altura < 1.7 && ritmocardiaco > 90 && presiónarterial > 130)
				{
					cout << "Su condicion fisica es mala." << endl;
				}
				else
					if (peso > 80 && altura < 1.8 && ritmocardiaco > 80 && presiónarterial > 120)
					{
						cout << "Su condicion fisica es regular." << endl;
					}
					else
						if (peso > 70 && altura < 1.9 && ritmocardiaco > 70 && presiónarterial > 110)
						{
							cout << "Su condicion fisica es buena." << endl;
						}
						else
						{
							cout << "Su condicion fisica es muy buena." << endl;
						}
		}
		else
		{
			cout << "Selecciona el material que vas a utilizar en esta visita" << endl;
			cout << "1. Caminadora" << endl;
			cout << "2. Eliptica" << endl;
			cout << "3. Remo" << endl;
			cin >> Opcion;

			switch (Opcion)
			{
			case 1:
				cout << "Ingresa la velicidad que vas a utilizar en esta visita" << endl;
				cin >> Velocidad;
				cout << "Ingresa el grado de inclinacion de la caminadora" << endl;
				cin >> gradoinclinacion;

				camina1.setVelocidad(Velocidad);
				camina1.setGrado(gradoinclinacion);

				break;
			case 2:
				cout << "Cual fue el numero de pedaleadas que vas hacer en esta visita" << endl;
				cin >> numeropedaleadas;

				elip1.setPedaleadas(numeropedaleadas);

				break;
			case 3:
				cout << "Ingresa el peso que vas a utilizar" << endl;
				cin >> Peso;
				cout << "Ingresa el numero de repeticiones que vas hacer en la visita" << endl;
				cin >> Repeticiones;

				remo1.setPeso(Peso);
				remo1.setRepeticiones(Repeticiones);

				break;
			default:
				break;
			}
		}
	}




	else if (Tipo == "Docente" || Tipo == "docente")
	{
		cout << "Dame tu nombre porfavor" << endl;
		cin >> nombre;
		cout << "Ingresa tu Edad" << endl;
		cin >> edad;
		cout << "Ingresa tu NUE" << endl;
		cin >> NUE;
		cout << "Cual es tu titulo" << endl;
		cin >> Titulo;

		user1.setNombre(nombre);
		user1.setEdad(edad);
		Doc1.setNUE(NUE);
		Doc1.setTitulo(Titulo);

		cout << "Tus datos son los siguientes\n" << endl;
		DatosDoc.push_back(Doc1);
		cout << Doc1.getDatosDocente();
		cout << "\n";

		cout << "Para continuar con la visita ingresa 1" << endl;
		cin >> numvisita;
		numvisita = numvisita + 1;

		cout << "Ingresa la fecha de hoy" << endl;
		cin >> fecha;
		cout << "Ingresa la hora" << endl;
		cin >> hora;
		visit1.setFecha(fecha);
		visit1.setHora(hora);

		if (numvisita == 20)
		{
			cout << "Felicidades completaste las 20 visitas" << endl;
			cout << "Para darte una evalicion correcta ingresa lo siguinte" << endl;
			cout << "Ingresa cual es tu peso" << endl;
			cin >> peso;
			cout << "Ingresa cual es tu altura" << endl;
			cin >> altura;
			cout << "Ingresa cual tu ritmo cardiaco" << endl;
			cin >> ritmocardiaco;
			cout << "Ingresa cual es tu presion arterial" << endl;
			cin >> presiónarterial;

			Eva1.setPeso(peso);
			Eva1.setAltura(altura);
			Eva1.setRitmoCardiaco(ritmocardiaco);
			Eva1.setPresiónarterial(presiónarterial);

			if (peso > 100 && altura < 1.6 && ritmocardiaco > 100 && presiónarterial > 140)
			{
				cout << "Su condicion fisica es muy mala." << endl;
			}
			else
				if (peso > 90 && altura < 1.7 && ritmocardiaco > 90 && presiónarterial > 130)
				{
					cout << "Su condicion fisica es mala." << endl;
				}
				else
					if (peso > 80 && altura < 1.8 && ritmocardiaco > 80 && presiónarterial > 120)
					{
						cout << "Su condicion fisica es regular." << endl;
					}
					else
						if (peso > 70 && altura < 1.9 && ritmocardiaco > 70 && presiónarterial > 110)
						{
							cout << "Su condicion fisica es buena." << endl;
						}
						else
						{
							cout << "Su condicion fisica es muy buena." << endl;
						}
		}
		else
		{
			cout << "Selecciona el material que vas a utilizar en esta visita" << endl;
			cout << "1. Caminadora" << endl;
			cout << "2. Eliptica" << endl;
			cout << "3. Remo" << endl;
			cin >> Opcion;

			switch (Opcion)
			{
			case 1:
				cout << "Ingresa la velicidad que vas a utilizar en esta visita" << endl;
				cin >> Velocidad;
				cout << "Ingresa el grado de inclinacion de la caminadora" << endl;
				cin >> gradoinclinacion;

				camina1.setVelocidad(Velocidad);
				camina1.setGrado(gradoinclinacion);

				break;
			case 2:
				cout << "Cual fue el numero de pedaleadas que vas hacer en esta visita" << endl;
				cin >> numeropedaleadas;

				elip1.setPedaleadas(numeropedaleadas);

				break;
			case 3:
				cout << "Ingresa el peso que vas a utilizar" << endl;
				cin >> Peso;
				cout << "Ingresa el numero de repeticiones que vas hacer en la visita" << endl;
				cin >> Repeticiones;

				remo1.setPeso(Peso);
				remo1.setRepeticiones(Repeticiones);

				break;
			default:
				break;
			}
		}
	}



	else if (Tipo == "Administrativo" || Tipo == "administrativo")
	{
		cout << "Dame tu nombre porfavor" << endl;
		cin >> nombre;
		cout << "Ingresa tu Edad" << endl;
		cin >> edad;
		cout << "Ingresa tu NUE" << endl;
		cin >> NUE;
		cout << "Cual es la Oficcina de trabajo" << endl;
		cin >> Oficcina;

		user1.setNombre(nombre);
		user1.setEdad(edad);
		admi1.setNUE(NUE);
		admi1.setOffice(Oficcina);

		cout << "Tus datos son los siguientes\n" << endl;
		DatosAdmi.push_back(admi1);
		cout << admi1.getDatosAdmi();
		cout << "\n";

		cout << "Para continuar con la visita ingresa 1" << endl;
		cin >> numvisita;
		numvisita = numvisita + 1;

		cout << "Ingresa la fecha de hoy" << endl;
		cin >> fecha;
		cout << "Ingresa la hora" << endl;
		cin >> hora;
		visit1.setFecha(fecha);
		visit1.setHora(hora);

		if (numvisita == 20)
		{
			cout << "Felicidades completaste las 20 visitas" << endl;
			cout << "Para darte una evalicion correcta ingresa lo siguinte" << endl;
			cout << "Ingresa cual es tu peso" << endl;
			cin >> peso;
			cout << "Ingresa cual es tu altura" << endl;
			cin >> altura;
			cout << "Ingresa cual tu ritmo cardiaco" << endl;
			cin >> ritmocardiaco;
			cout << "Ingresa cual es tu presion arterial" << endl;
			cin >> presiónarterial;

			Eva1.setPeso(peso);
			Eva1.setAltura(altura);
			Eva1.setRitmoCardiaco(ritmocardiaco);
			Eva1.setPresiónarterial(presiónarterial);

			if (peso > 100 && altura < 1.6 && ritmocardiaco > 100 && presiónarterial > 140)
			{
				cout << "Su condicion fisica es muy mala." << endl;
			}
			else
				if (peso > 90 && altura < 1.7 && ritmocardiaco > 90 && presiónarterial > 130)
				{
					cout << "Su condicion fisica es mala." << endl;
				}
				else
					if (peso > 80 && altura < 1.8 && ritmocardiaco > 80 && presiónarterial > 120)
					{
						cout << "Su condicion fisica es regular." << endl;
					}
					else
						if (peso > 70 && altura < 1.9 && ritmocardiaco > 70 && presiónarterial > 110)
						{
							cout << "Su condicion fisica es buena." << endl;
						}
						else
						{
							cout << "Su condicion fisica es muy buena." << endl;
						}
		}
		else
		{
			cout << "Selecciona el material que vas a utilizar en esta visita" << endl;
			cout << "1. Caminadora" << endl;
			cout << "2. Eliptica" << endl;
			cout << "3. Remo" << endl;
			cin >> Opcion;

			switch (Opcion)
			{
			case 1:
				cout << "Ingresa la velicidad que vas a utilizar en esta visita" << endl;
				cin >> Velocidad;
				cout << "Ingresa el grado de inclinacion de la caminadora" << endl;
				cin >> gradoinclinacion;

				camina1.setVelocidad(Velocidad);
				camina1.setGrado(gradoinclinacion);

				break;
			case 2:
				cout << "Cual fue el numero de pedaleadas que vas hacer en esta visita" << endl;
				cin >> numeropedaleadas;

				elip1.setPedaleadas(numeropedaleadas);

				break;
			case 3:
				cout << "Ingresa el peso que vas a utilizar" << endl;
				cin >> Peso;
				cout << "Ingresa el numero de repeticiones que vas hacer en la visita" << endl;
				cin >> Repeticiones;

				remo1.setPeso(Peso);
				remo1.setRepeticiones(Repeticiones);

				break;
			default:
				break;
			}
		}
	}



	else if (Tipo == "Apoyo" || Tipo == "tipo")
	{
		cout << "Dame tu nombre porfavor" << endl;
		cin >> nombre;
		cout << "Ingresa tu Edad" << endl;
		cin >> edad;
		cout << "Ingresa tu NUE" << endl;
		cin >> NUE;
		cout << "Cual tu puesto en el DEM" << endl;
		cin >> puesto;
		cout << "Cuantas son las horas de trabajo al dia" << endl;
		cin >> HorasTrabajo;

		user1.setNombre(nombre);
		user1.setEdad(edad);
		apoyo1.setNUE(NUE);
		apoyo1.setpuesto(puesto);
		apoyo1.setHorasTrabajo(HorasTrabajo);

		cout << "Tus datos son los siguientes" << endl;
		DatosApoyo.push_back(apoyo1);
		cout << apoyo1.getDatosApoyo();
		cout << "\n";

		cout << "Para continuar con la visita ingresa 1" << endl;
		cin >> numvisita;
		numvisita = numvisita + 1;

		cout << "Ingresa la fecha de hoy" << endl;
		cin >> fecha;
		cout << "Ingresa la hora" << endl;
		cin >> hora;
		visit1.setFecha(fecha);
		visit1.setHora(hora);

		if (numvisita == 20)
		{
			cout << "Felicidades completaste las 20 visitas" << endl;
			cout << "Para darte una evalicion correcta ingresa lo siguinte" << endl;
			cout << "Ingresa cual es tu peso" << endl;
			cin >> peso;
			cout << "Ingresa cual es tu altura" << endl;
			cin >> altura;
			cout << "Ingresa cual tu ritmo cardiaco" << endl;
			cin >> ritmocardiaco;
			cout << "Ingresa cual es tu presion arterial" << endl;
			cin >> presiónarterial;

			Eva1.setPeso(peso);
			Eva1.setAltura(altura);
			Eva1.setRitmoCardiaco(ritmocardiaco);
			Eva1.setPresiónarterial(presiónarterial);

			if (peso > 100 && altura < 1.6 && ritmocardiaco > 100 && presiónarterial > 140)
			{
				cout << "Su condicion fisica es muy mala." << endl;
			}
			else
				if (peso > 90 && altura < 1.7 && ritmocardiaco > 90 && presiónarterial > 130)
				{
					cout << "Su condicion fisica es mala." << endl;
				}
				else
					if (peso > 80 && altura < 1.8 && ritmocardiaco > 80 && presiónarterial > 120)
					{
						cout << "Su condicion fisica es regular." << endl;
					}
					else
						if (peso > 70 && altura < 1.9 && ritmocardiaco > 70 && presiónarterial > 110)
						{
							cout << "Su condicion fisica es buena." << endl;
						}
						else
						{
							cout << "Su condicion fisica es muy buena." << endl;
						}
		}
		else
		{
			cout << "Selecciona el material que vas a utilizar en esta visita" << endl;
			cout << "1. Caminadora" << endl;
			cout << "2. Eliptica" << endl;
			cout << "3. Remo" << endl;
			cin >> Opcion;

			switch (Opcion)
			{
			case 1:
				cout << "Ingresa la velicidad que vas a utilizar en esta visita" << endl;
				cin >> Velocidad;
				cout << "Ingresa el grado de inclinacion de la caminadora" << endl;
				cin >> gradoinclinacion;

				camina1.setVelocidad(Velocidad);
				camina1.setGrado(gradoinclinacion);

				break;
			case 2:
				cout << "Cual fue el numero de pedaleadas que vas hacer en esta visita" << endl;
				cin >> numeropedaleadas;

				elip1.setPedaleadas(numeropedaleadas);

				break;
			case 3:
				cout << "Ingresa el peso que vas a utilizar" << endl;
				cin >> Peso;
				cout << "Ingresa el numero de repeticiones que vas hacer en la visita" << endl;
				cin >> Repeticiones;

				remo1.setPeso(Peso);
				remo1.setRepeticiones(Repeticiones);

				break;
			default:
				break;
			}
		}
	}
	else
	{
		cout << "Usuario no identificado" << endl;
	}

    return 0;
}