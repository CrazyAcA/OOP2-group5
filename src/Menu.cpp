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
	cout << "Unesite tip datoteke (1.tekstualna, 2.binarna)" << endl;
	while (!(cin >> tip) || tip < 1 || tip > 2) {
		cout << "Pogresan unos! Unesite 1 ili 2" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}
	
	if (tip == 1) {
		read_textFile();
	}
	else {
		read_binaryFile();
	}
}

void Menu::read_textFile() {
	cout << "Unesite ime fajla(bez ekstenzije .txt): " << endl;
	string name;
	
	while (!(cin >> name) || name != "studenti") {
		cout << "Ne postoji fajl sa takvim imenom! Unesite opet" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	string fileName = name+".txt";//Krajnje ime fajla
	cout << fileName << endl;
	ifstream file;
	file.open(fileName);//Otvara fajl
	while (!file.is_open() && name != "quit") {//Proverava da li je fajl otvoren(da li postoji)
		cout << "Takav fajl ne postoji! Pokusajte ponovo(unesite quit za izlaz)" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	string ime;
	string prezime;
	string id;
	int i = 0;//Brojac koji ce da gleda gde smo trenutno u fajlu
	
	while (!file.eof()) {//Pokusavam da napravim da cita samo redove gde su studenti
		if (i % 4 == 0) {
				file >> ime >> prezime >> id;
				cout << ime << prezime << id;
				i = i + 1;
				cout << i << endl;
			
		}
	}
}