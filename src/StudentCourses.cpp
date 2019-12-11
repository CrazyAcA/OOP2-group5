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
	student.display();

}
