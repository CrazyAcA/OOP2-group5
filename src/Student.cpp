//============================================================================
// File Name   : Student.cpp
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================

#include "Student.h"
//Konstuktori Studenta
Student::Student() : firstName("Ime"), lastName("Prezime"), ID("0000") {};
Student::Student(string ime, string prezime, string id) : firstName(ime), lastName(prezime), ID(id) {};

void Student::display() {//Ispis studenta
	cout << "Student: " << firstName << " " << lastName << " " << ID << "\n";
}
//Geteri za ime prezime i id
string Student::get_first_name() {
	return firstName;
}
string Student::get_last_name() {
	return lastName;
}
string Student::get_id() {
	return ID;
}