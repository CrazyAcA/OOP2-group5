//============================================================================
// File Name   : Courses.cpp
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================

//  Your code starts here

using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include "Courses.h"

const double Courses::QUIZ_WEIGHT = 0.05;
const double Courses::HOMEWORK_WEIGHT = 0.5;
const double Courses::TEST_WEIGHT = 0.45;

double Courses::get_final_score(){
	return final_score;

}

void Courses::calc_final_score() {
	double domaci_uk = 0;
	double testovi_uk = 0;
	double kvizovi_uk = 0;
	for (int i = 0; i < 6; i++) { // Racunamo za domaci
		domaci_uk += homework[i];
	}

	for (int j = 0; j < 4; j++) { // Racunamo za test
		testovi_uk += test[j];
	}
	for (int k = 0; k < 10; k++) { // Racunamo za kviz
		kvizovi_uk += quiz[k];
	}
	domaci_uk = domaci_uk * HOMEWORK_WEIGHT;
	testovi_uk = testovi_uk * TEST_WEIGHT;
	kvizovi_uk = kvizovi_uk * QUIZ_WEIGHT;
	final_score = (domaci_uk / 6) + (testovi_uk / 4) + (kvizovi_uk / 10);
	final_score = round(final_score);
	// Sada nam se u final score nalazi average ocena

}


void Courses::calc_letter_grade() {

	if (final_score >= 92) {
		letter_grade = 'A';
	}
	else if (final_score >= 82 && final_score < 92) {
		letter_grade = 'B';
	}
	else if (final_score >= 72 && final_score < 82) {
		letter_grade = 'C';
	}
	else if (final_score >= 62 && final_score < 72) {
		letter_grade = 'D';
	}
	else { // final_score = 50
		letter_grade = 'F';
	}

}

void Courses::display() const {

	cout << "Konacan broj bodova je: " << final_score << endl;
	cout << "Konacna ocena je: " << letter_grade << endl;

}