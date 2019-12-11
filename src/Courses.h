//============================================================================
// File Name   : Courses.h
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================

#ifndef COURSES_H_
#define COURSES_H_

#include <iostream>
#include <vector>

using std::vector;

class Courses
{
public:
	// Redovi u txt fajlu po pdf
	// Prvi red je ime studenta
	static const int NUM_QUIZZES = 10; // Cetvrti red
	static const int NUM_HW = 6; // Drugi red
	static const int NUM_TESTS = 4; // Treci red

private:
	static const double QUIZ_WEIGHT;
	static const double HOMEWORK_WEIGHT;
	static const double TEST_WEIGHT;

	// private data
	//string id;
	vector<int> quiz;
	vector<int> homework;
	vector<int> test;
	double final_score = 0;
	char letter_grade;

public:
	// constructors
	Courses (): quiz(NUM_QUIZZES), homework(NUM_HW), test(NUM_TESTS) {}
	Courses(const vector<int>& q, const vector<int>& h, const vector<int>& t)
		: quiz(q), homework(h), test(t), final_score(0), letter_grade('F') {}
	Courses(const vector<int>& q, const vector<int>& h, const vector<int>& t, double fs,char lg)//Dodao sam jos jedan konstuktor ako treba
		: quiz(q), homework(h), test(t), final_score(fs), letter_grade(lg) {}

	// utility functions
	double get_final_score() const;
	void display() const;
	void calc_final_score();
	void calc_letter_grade();
};


#endif 
