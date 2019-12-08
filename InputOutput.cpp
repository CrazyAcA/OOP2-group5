#include "InputOutput.h"
using namespace std;
#include <fstream>
#include <iostream>
#include <string>



void InputOutput::read_textFile(string path) {

	std::ifstream file(path);
	string line;

	// while(file >> line) 
	while (std::getline(file, line)) {
		// Rad sa linijom teksta
	}


}


void InputOutput::read_binaryFile(string path) {
	// char buffer[100]; ??
	ifstream file(path, ios::in | ios::binary);
	//file.read(buffer, 100) ?

	if (!file) {
		// greska

	}




}

// Moramo u write dodati neku listu koja se upisuje
void InputOutput::write_textFile(string path) {

	std::ofstream file(path);
	if (file.is_open()) {

		string line;

		do {
			std::getline(cin, line);
			file << line << endl;


		} while (line != "");

		file.close();

	}

	else cerr << "Fajl nemoguce otvoriti.";

}

// isto i ovde listu
void InputOutput::write_binaryFile(string path) {

	fstream file(path, ios::in | ios::out | ios::binary);
	//file.write();  u zagradu ide to sto upisujemo
	file.close();



}


