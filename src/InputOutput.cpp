#include "InputOutput.h"
using namespace std;
#include <fstream>
#include <iostream>
#include "Student.h"
#include <string>
#include <sstream>
#include <vector>
#include <iterator>

void InputOutput::read_textFile(string path) {

	std::ifstream file(path);
	string line;
	int i = -1;
	vector<Student> studenti;
	
	while (std::getline(file, line)) {
		// Rad sa linijom teksta
		++i;

		if (i % 4 == 0) { //Sve linije gde su studenti stavlja u vektor studenata
			cout << line << endl;
			
			std::vector<std::string> arr = split(line, ' '); // Splituje liniju u vektor

			Student s = Student(arr[0], arr[1], arr[2]); // Po indeksima u vektoru zovemo konstruktor
			studenti.push_back(s);
			//cout << s.get_first_name() << endl;
			
		}
	}

	for (int j = 0; j < studenti.size(); j++) {//Ne znam kako da uzmem po jednu rec iz vektora(sadasnji oblik je: ime prezime id)
		Student* Trenutni = &studenti[j];
		Trenutni->get_first_name();
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


