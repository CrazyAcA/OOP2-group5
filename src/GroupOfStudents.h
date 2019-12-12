//============================================================================
// File Name   : GroupOfStudents.h
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================


#ifndef GROUPOFSTUDENTS_H_
#define GROUPOFSTUDENTS_H_

#include <vector>
#include "StudentCourses.h"
using namespace std;
using std::vector;

class GroupOfStudents
{
private:
	vector <StudentCourses> st_vec;
	void search_for_highest(vector<int>& indices_max) const; // utility

public:
	GroupOfStudents() {}
	GroupOfStudents(const vector< StudentCourses >& v);

	// Trazene metode koje treba da se dodaju
	void display();
	void display_sorted();
	void display_highest();
	void write_to_file();
	const vector<StudentCourses>& get_student_courses() const;
};

#endif /*GROUPOFSTUDENTS_H_*/
