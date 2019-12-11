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

static const double QUIZ_WEIGHT = 0.05;
static const double HOMEWORK_WEIGHT = 0.5;
static const double TEST_WEIGHT = 0.45;

double Courses::get_final_score() const{

	return final_score;

}

void Courses::calc_final_score() {

	int i = 0;

	for (i; i < 6; i++) { // Racunamo za domaci

		final_score = homework(i) * HOMEWORK_WEIGHT;

	}
	i = 0;
	for (i; i < 4; i++) { // Racunamo za test

		final_score = test(i) * TEST_WEIGHT;

	}
	i = 0;
	for (i; i < 10; i++) { // Racunamo za kviz

		final_score = quiz(i) * QUIZ_WEIGHT;

	}
	// Sada nam se u final score nalazi average ocena

}

void Courses::display() const{

	cout << "Konacan broj bodova je: " << final_score << endl
	cout << "Konacna ocena je: " << letter_grade << endl

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

