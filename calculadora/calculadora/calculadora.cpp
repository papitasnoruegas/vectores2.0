#include <string>
#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;
//declaramos prototipos de funciones 
void menu();
void suma();
void resta();
void multi();
void division();
void pausa();

//creamos funcion menu
void menu()
{
	bool bandera = false; 
	char tecla;
	do
	{
		system("cls");
		cout << "*CALCULADORA* " << endl;
		cout << "************* ";
		cout << "\t1.- SUMAR" << endl;
		cout << "\t2.- RESTAR" << endl;
		cout << "\t3.- MULTIPLICAR" << endl;
		cout << "\t4.- DIVIDIR" << endl;
		cout << "\t5.- Salir" << endl;
		cout << "*Elige una opcion: *" << endl;
		cout << "********************";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multi();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";
			pausa();
			break;

		}

	} 
	while (bandera != true);
}
void pausa()
{
	cout << "PULSA CUALQUIER TECLA PARA CONTINUAR...";
	getwchar();
	getwchar();
}

void suma()
{
	int a, b, suma;
	cout << "primer valor" << endl; cin >> a;
	cout << "segundo valor" << endl; cin >> b;
	suma = a + b;
	cout << "la su7ma es : " << suma << endl;
	pausa();
}

void resta()
{
	float a, b, resta;
	cout << "primer valor" << endl; cin >> a;
	cout << "segundo valor" << endl; cin >> b;
	resta = a + b;
	cout << "la resta es : " << resta << endl;
	pausa();
}

void multi()
{
	int a, b, mul;
	cout << "primer valor" << endl; cin >> a;
	cout << "segundo valor" << endl; cin >> b;
	mul = a * b;
	cout << "la multiplicacion es : " << mul << endl;
	pausa();
}

void division()
{
	float a, b, divi;
	cout << "primer valor" << endl; cin >> a;
	cout << "segundo valor" << endl; cin >> b;
	divi = a / b;
	cout << "la division es : " << divi << endl;
	pausa();
}