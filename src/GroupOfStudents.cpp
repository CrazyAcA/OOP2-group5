//============================================================================
// File Name   : GroupOfStudents.cpp
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================

//  Your code starts here
#include <algorithm>
#include "GroupOfStudents.h"

GroupOfStudents::GroupOfStudents(const vector< StudentCourses >& v) : st_vec(v) {};

void GroupOfStudents::display() {
	for each(StudentCourses s in st_vec) {
		s.display();
	}
}

void GroupOfStudents::display_sorted() {
	vector<Student> st;
	vector<string> imena;
	vector<string> prezimena;
	vector<string> ids;
	for (int j = 0; j < st_vec.size(); j++) {
		st.push_back(st_vec.at(j).get_student());//Stavljamo sve studente u vektor studenata
	}

	for each (Student s in st)//Za svakog sudenta uzimamo njegova imena,prezime i id
	{
		imena.push_back(s.get_first_name());
		prezimena.push_back(s.get_last_name());
		ids.push_back(s.get_id());
	}
	cout << "Studenti sortirani po imenima: " << endl;
	sort(imena.begin(), imena.end());//Sortira po imenima
	for (int i = 0; i < imena.size(); i++) {
		cout << imena.at(i) << prezimena.at(i) << ids.at(i) << endl;
	}
}


void GroupOfStudents::display_highest() {
	double max = 0;//Smesta se trenutni najbolji

	for each (StudentCourses student in st_vec)
	{
		if (student.get_final_score() > max) {
			max = student.get_final_score();//Nadje najvecu ocenu
		}
	}
	cout << "Studenti sa najvecim prosekom su: " << endl;
	for each (StudentCourses sc in st_vec) //za svakog studenta in vektora
	{
		if (sc.get_final_score() == max) {//Ukoliko ima najvecu ocenu ispisuje ga
			sc.display();
			cout << " sa " << max << " bodova" << endl;
		}
	}
	{

	}
}