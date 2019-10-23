#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<vector>
#include<cmath>
#include<array>
#include<conio.h>

void carga(int tiem);
void menu(bool rev);
void bach();
void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
using namespace std;

#include "conversiones.h"

int main() {
	bool rev = true;
	system("color 06");
	system("mode con: cols=110 lines=30");
	bach();
	carga(1);
	do
	{
		menu(rev);
	} while (rev != false);
	return 0;
}

void carga(int tiem) {	

	for (int i = 0; i < 30-20; i++) {
		cout << "\n";
	}

	cout << "\t\t\t\t\t\t CARGANDO...\n";

	for (int i = 0; i < 110; i++) {
		cout << char(219);
		Sleep(tiem * 1000 / 200);
	}

	system("cls");
}

void menu(bool rev) {
	system("cls");
	char opc;
	for (int i = 0; i < 110; i++)
	{
		cout << char(219);
	}

	cout << "\n\nConvertidor de Decimal, Octal, Binario y Hexadecimal\n";
	cout << "Derechos reservados (R)\n\n";

	for (int i = 0; i < 110; i++)
	{
		cout << char(219);
	}

	cout <<	"\n\nSeleccione la opcion a convertir: \n\n";
	array <string, 10> opci;
	opci = { "\t Decimal - Binario	[1]\n",
			"\t Binario - Decimal	[2]\n",
			"\t Hexadecimal - Binario	[3]\n",
			"\t Binario - Hexadecimal	[4]\n",
			"\t Octal - Binario	[5]\n",
			"\t Binario - Octal	[6]\n",
			"\t Texto - Binario	[7]\n",
			"\t Binario - Texto	[8]\n",
			"\t Salir			[9]\n",
			"\t Autores		[0]\n\n"};
	for (int i = 0; i < 10; i++) {
		cout << opci[i];
	}

	for (int i = 0; i < 110; i++)
	{
		cout << char(219);
	}

	opc = _getch();
	switch (opc)
	{
	case '0': {
		system("cls");
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\n Creditos a: \n\n";
		cout << "\t Mauricio de Jesus Cardenas Hernandez\t(Menu, Hexadecimal a binario)\n";
		cout << "\t Sayuri de los Angeles Hernandez Virgen\t(Octal a binario, Binario a octal)\n";
		cout << "\t Cristopher Cerda Puga\t\t\t(Binario a decimal, Decimal a binario)\n";
		cout << "\t Selene Getsemani Gurierrez Ayala\t(Binario a decimal, Decimal a binario)\n";
		cout << "\t Jose Alfredo Garcia Gaona\t\t(Hexadecimal a binario, Binario a Hexadecimal)\n";
		cout << "\t Alma Rosa de Monserrath Lara\t\t(Octal a binario, Binario a octal)\n\n";
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		system("pause");
		break;
	}
	case '1': {
		int nu;
		system("cls");
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nConvertidor de Decimal a Binario.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\n(Favor de solo colocar SOLO NUMEROS ENTEROS)\n";
		cout << "Ingresa el valor a convertir: ";
		cin >> nu;
		cout << "\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: \a" << Dec_Bin(nu) << endl << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		system("pause");
		break;
	}
	case '2': {
		system("cls");
		string bin;
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		
		cout << "\n\nConvertidor de Binario a Decimal.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nIntroduce el valor a convertir: ";
		getline(cin, bin); cout << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: \a" << Bin_Dec(bin) << endl << endl;
		
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		system("pause");
		break;
	}
	case '3': {
		string hexa;
		system("cls");
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nConvertidor de Hexadecimal a Binario.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nIntroduce el valor a convertir: #";
		getline(cin, hexa); cout << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: " <<  Hex_Bin(hexa) << "\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		system("pause");
		break;
	}
	case '4': {
		string bin;
		system("cls");
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nConvertidor de Binario a Hexadecimal.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nIntroduce el valor a convertir: ";
		getline(cin, bin); cout << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: \a" << Bin_Hex(bin) << endl << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		system("pause");
		break;
	}
	case '5': {
		string oct;
		system("cls");
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nConvertidor de Octal a Binario.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nIntroduce el valor a convertir: ";
		getline(cin, oct); cout << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: \a" << Oct_Bin(oct) << endl << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		system("pause");
		break;
	}
	case '6': {
		string bin;
		system("cls");
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		cout << "\n\nConvertidor de Binario a Octal.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nIntroduce el valor a convertir: ";
		getline(cin, bin); cout << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: \a" << Bin_Oct(bin) << endl << endl;
			
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		system("pause");
		break; 
	}
	case '7': {
		system("cls");
		string tex;
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		cout << "\n\nConvertidor de Texto a Binario.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nIntroduce el valor a convertir: ";
		getline(cin, tex); cout << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: \a" << Tex_Bin(tex) << "\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}
		system("pause");
		break;
	}
	case '8': {
		system("cls");
		string bin;
		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nConvertidor de Binario a Texto.\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nIntroduce el valor a convertir: ";
		getline(cin, bin); cout << endl;

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		cout << "\n\nEl resultado es: \a" << Bin_Tex(bin) << "\n\n";

		for (int i = 0; i < 110; i++)
		{
			cout << char(219);
		}

		system("pause");
		break;
	}
	case '9': {
		rev = false;
		break;
	}
	default: {
		system("cls");
		break;
	}
	}
}	  

void bach() {
	vector <string> bacho;
	string a = "\xDB", c = "\x20", nl = "\n";
	bacho = {
		a+a+a+a+a+c+c+c+a+a+a+a+c+c+c+a+a+a+a+c+c+a+a+c+c+a+a+c+c+c+c+c+a+a+a+a+c+nl,
		a+a+c+c+a+a+c+a+a+c+c+a+a+c+a+a+c+c+a+a+c+a+a+c+c+a+a+c+c+c+c+a+a+c+c+a+a+nl,
		a+a+c+c+a+a+c+a+a+c+c+a+a+c+a+a+c+c+c+c+c+a+a+c+c+a+a+c+c+c+c+a+a+c+c+a+a+nl,
		a+a+a+a+a+c+c+a+a+a+a+a+a+c+a+a+c+c+c+c+c+a+a+a+a+a+a+c+c+c+c+c+a+a+a+a+c+nl,
		a+a+c+c+a+a+c+a+a+c+c+a+a+c+a+a+c+c+c+c+c+a+a+c+c+a+a+c+c+c+c+a+a+c+c+a+a+nl,
		a+a+c+c+a+a+c+a+a+c+c+a+a+c+a+a+c+c+a+a+c+a+a+c+c+a+a+c+c+c+c+a+a+c+c+a+a+nl,
		a+a+a+a+a+c+c+a+a+c+c+a+a+c+c+a+a+a+a+c+c+a+a+c+c+a+a+c+c+c+c+c+a+a+a+a+c+nl,
	};
	for (int i = 0; i < bacho.size(); i++)
	{
		gotoxy((110-bacho[i].length())/2, ((30-bacho.size())/2)+i);
		cout << bacho[i];
	}
}