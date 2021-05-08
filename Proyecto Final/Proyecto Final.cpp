// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <assert.h>
#include <stdbool.h>
#include <math.h>
#include <cstdlib>
#include <conio.h>




using namespace std;



class hotel {
public:

	//Configuracion de Cuarto 
	int camas;
	int numeroDeCuarto;
	int PerroAmigable;
	int AireAcondicionado;
	int PrecioPorDia;
	string  ArticulosUno;
	string  ArticulosDos;
	string  ArticulosTres;
	string  ArticulosCuatro;
	string  ArticulosCinco;
	string  ArticulosSeis;
	string  ArticulosSiete;
	string  ArticulosOcho;
	string  ArticulosNueve;
	string  ArticulosDiez;


	//Buscar Huesped


	//Mostrar Cuartos Ocupados


	//Mostrar Cuartos Libres

	//CheckIn


	//Check Out 




	//persona *sig;
}; //*nodo;

class OcupadoLibre {
public:

	bool Disponibilidad = true;

};

class BuscarHuesped {
public:

	string buscarhuesped1;
};

class CheckIn {
public:

	int DPI;
	int NumerodeTarjeta;
	int FechaDeExpiracion;
	int CodigoDeSeguridad;
	string NombreDeTarjeta;
	string NombreDelHuesped;
};
class checkOut {
public:


	bool pago;

};











const int tamano = 2;
hotel h[tamano];
BuscarHuesped B[tamano];
CheckIn C[tamano];
OcupadoLibre O[tamano];
checkOut C2[tamano];




void ingresar()
{


	int op;

	do
	{


		cout << "Menu principal" << endl;
		cout << "1.Ingresar configuracion de cuarto " << endl;
		cout << "2.Hacer Check In" << endl;
		cout << "3.Buscar huesped" << endl;
		cout << "4.Mostrar cuartos ocupados" << endl;
		cout << "5.Mostrar cuartos libres" << endl;
		cout << "6.Inventario por Cuarto, registrado en condiguracion de cuartos." << endl;
		cout << "7.Hacer Check out" << endl;
		cout << "0.Salir" << endl;
		cout << "Ingrese la opcion deseada : ";
		cin >> op;

		switch (op)
		{
		case 1:
			for (int i = 0; i < tamano; i++)
			{
				string tmp;

				printf("ingrese numero de camas: ");
				cin >> h[i].camas;
				printf("ingrese numero de cuarto: ");
				cin >> h[i].numeroDeCuarto;
				printf("ingrese el numero 1 si su perro es amigable, ingrese un 0 si su perro no es amigable : ");
				cin >> h[i].PerroAmigable;
				printf("ingrese el numero 1 si hay aire acondicionado, ingrese un 0 si no hay aire acondicionado : ");
				cin >> h[i].AireAcondicionado;
				printf("Precio por Dia : ");
				cin >> h[i].PrecioPorDia;
				printf("Ingrese primer articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosUno;
				printf("Ingrese el segundo articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosDos;
				printf("Ingrese el tercer articulo articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosTres;
				printf("Ingrese el cuarto articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosCuatro;
				printf("Ingrese el quinto articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosCinco;
				printf("Ingrese el sexto articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosSeis;
				printf("Ingrese el septimo articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosSiete;
				printf("Ingrese el octavo  articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosOcho;
				printf("Ingrese el noveno articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosNueve;
				printf("Ingrese el decimo articulo que necesite en su cuarto : ");
				cin >> h[i].ArticulosDiez;

			}

			for (int i = 0; i < tamano; i++)

			{
				cout << "Cantidad de Cama : " << h[i].camas << endl;
				cout << "Numero de cuarto : " << h[i].numeroDeCuarto << endl;
				cout << "perro amigable : " << h[i].PerroAmigable << endl;
				cout << "Estado del Aire Acondicionado : " << h[i].AireAcondicionado << endl;
				cout << "Precio por Dia  : " << h[i].PrecioPorDia << endl;
				cout << "El primer articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El segundo articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El tercer articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El cuarto articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El quinto articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El sexto articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El septimo articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El octavo articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El noveno articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El decimo articulo es  : " << h[i].ArticulosUno << endl;

			}


			break;

		case 2:



			for (int i = 0; i < tamano; i++)
			{
				OcupadoLibre o1 = OcupadoLibre();

				printf("ingrese numero de DPI: ");
				cin >> C[i].DPI;
				printf("ingrese numero de Tarjeta de Credito: ");
				cin >> C[i].NumerodeTarjeta;
				printf("Fecha de Expiracion de su tarjeta: ");
				cin >> C[i].FechaDeExpiracion;
				printf("Codigo de segura, se ubica en la parte de atras de la tarjeta : ");
				cin >> C[i].CodigoDeSeguridad;
				printf("Nombre de la Tarjeta  : ");
				cin >> C[i].NombreDeTarjeta;
				printf("Nombre del Huesped  : ");
				cin >> C[i].NombreDelHuesped;
				


			}

			for (int i = 0; i < tamano; i++)

			{
				cout << "Numero de DPI : " << C[i].DPI << endl;
				cout << "Numero de Tarjeta : " << C[i].NumerodeTarjeta << endl;
				cout << "Fecha de Expiracion  : " << C[i].FechaDeExpiracion << endl;
				cout << "Codigo de Seguridad  : " << C[i].CodigoDeSeguridad << endl;
				cout << "Nombre de la Tarjeta  : " << C[i].NombreDeTarjeta << endl;
				cout << "Nombre del Huesped  : " << C[i].NombreDelHuesped << endl;
			}


			break;
		case 3:



			printf("Ingrese el nombre del huesped : ");
			cin >> B->buscarhuesped1;

			for (int i = 0; i < tamano; i++)
			{
				if (B->buscarhuesped1 == C[i].NombreDelHuesped)
				{
					cout << "Numero de cuarto : " << h[i].numeroDeCuarto << endl;
				}
			}






			break;
		case 4:

			for (int i = 0; i < tamano; i++)



			{


				


				if (O->Disponibilidad = true)
				{
					cout << "Numero de cuarto : " << h[i].numeroDeCuarto << endl;
				}

			}




			break;
		case 5:

			



			{
				cout << "Cuarto Libre : " << endl;
				OcupadoLibre o2 = OcupadoLibre();



				if (o2.Disponibilidad = true)
				{
					cout << "No esta ocupado ningun cuarto. " << endl;
				}

			}



			break;
		case 6:


			for (int i = 0; i < tamano; i++)

			{

				cout << "El primer articulo es  : " << h[i].ArticulosUno << endl;
				cout << "El segundo articulo es  : " << h[i].ArticulosDos << endl;
				cout << "El tercer articulo es  : " << h[i].ArticulosTres << endl;
				cout << "El cuarto articulo es  : " << h[i].ArticulosCuatro<< endl;
				cout << "El quinto articulo es  : " << h[i].ArticulosCinco << endl;
				cout << "El sexto articulo es  : " << h[i].ArticulosSeis << endl;
				cout << "El septimo articulo es  : " << h[i].ArticulosSiete << endl;
				cout << "El octavo articulo es  : " << h[i].ArticulosOcho << endl;
				cout << "El noveno articulo es  : " << h[i].ArticulosNueve << endl;
				cout << "El decimo articulo es  : " << h[i].ArticulosDiez << endl;
			}



			break;
		case 7:

			for (int i = 0; i < tamano; i++) 
			
			{
				cout << "Precio por Dia  : " << h[i].PrecioPorDia << endl;

				cout << "Numero de Tarjeta : " << C[i].NumerodeTarjeta << endl;
				cout << "Fecha de Expiracion  : " << C[i].FechaDeExpiracion << endl;
				cout << "Codigo de Seguridad  : " << C[i].CodigoDeSeguridad << endl;
				cout << "Nombre de la Tarjeta  : " << C[i].NombreDeTarjeta << endl;
				cout << "Nombre del Huesped  : " << C[i].NombreDelHuesped << endl;
				

			

			}

			
			



		default:
			break;
		}


		












	} while (op != 0);




}








int main()
{
	ingresar();

}