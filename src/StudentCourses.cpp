//============================================================================
// File Name   : StudentCourses.cpp
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================

// Your code starts here
using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include "StudentCourses.h"

double StudentCourses::get_final_score() {

	double ret;
	ret = courses.get_final_score(); // Pozvao sam iz courses getter koji cemo koristiti
	return ret;


};

void StudentCourses::display() {
	// Posto StudentCourses prima studenta u konstruktoru
	// ja sam samo iskoristio njegove gettere za display
	string ime, prezime, id;
	ime = student.get_first_name();
	prezime = student.get_last_name();
	id = student.get_id();

	cout << "Informacije o Studentu: " << endl;
	cout << "Ime: " << ime << endl;
	cout << "Prezime: " << prezime << endl;
	cout << "id: " << id << endl;
	cout << "-----------------------------" << endl;

}
