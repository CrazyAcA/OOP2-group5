//============================================================================
// File Name   : Menu.cpp
// Authors     : Marko Vukotić, Aleksandar Jovanović
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================
#include "Menu.h"
//#include<iostream>
#include <fstream>
#include "InputOutput.h"


void Menu::display_menu() {//Ispis menija (display_menu)
	cout << "Izaberite opciju iz menija: " << endl
		<< "1.Informacije o autorima" << endl
		<< "2.Citanje studenata iz datoteke" << endl
		<< "3.Prikaz studenta" << endl
		<< "4.Prikaz studenata(sortirano)" << endl
		<< "5.Prikaz studenata sa najboljim prosekom" << endl
		<< "6.Izlaz iz aplikacije" << endl
		<< "Unesite:" << endl;
}
void Menu::display_info() {//Informacije o autorima
	cout << "Projekat su radili: " << endl << "Aleksandar Jovanovic sw78-2018" << endl << "Marko Vukotic sw-71-2018\n" << endl;
}

void Menu::read_students() {//Ovde se bira da li se cita tekstualna ili binarna datoteka
	int tip;
	InputOutput io;
	cout << "Unesite tip datoteke (1.tekstualna, 2.binarna)" << endl;
	while (!(cin >> tip) || tip < 1 || tip > 2) {
		cout << "Pogresan unos! Unesite 1 ili 2" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	//Unosi se ime fajla
	cout << "Unesite ime fajla(bez ekstenzije .txt): " << endl;
	string name;

	while (!(cin >> name) || name != "studenti") { //Proverava da li je ime dobro
		cout << "Ne postoji fajl sa takvim imenom! Unesite opet: " << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	string fileName = name + ".txt";//Krajnje ime fajla
	ifstream file;
	file.open(fileName);//Otvara fajl
	while (!file.is_open() && name != "quit") {//Proverava da li je fajl otvoren(da li postoji)
		cout << "Takav fajl ne postoji! Pokusajte ponovo(unesite quit za izlaz): " << endl;
		cin.clear();
		cin.ignore(100, '\n');
		if (name == "quit") {
			EXIT_FAILURE;
		}
	}

	if (tip == 1) {
		io.read_textFile(fileName);//Skace na funkciju za citanje tekstualnih fajlova iz InputOutput
	}
	else {
		io.read_binaryFile(fileName);//Skace na funkciju za citanje binarnih fajlova iz InputOutput
	}
}

