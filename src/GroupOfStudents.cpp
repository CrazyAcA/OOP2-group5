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


void GroupOfStudents::display() {
	cout << " " << endl;
	for each(StudentCourses s in st_vec) {
		s.display();
	}
	
}

void GroupOfStudents::display_sorted() {
	cout << st_vec.size() << endl;
	vector<Student> st;
	vector<string> imena;
	vector<string> prezimena;
	vector<string> ids;
	for (int j = 0; j < st_vec.size(); j++) {
		st.push_back(st_vec.at(j).get_student());//Stavljamo sve studente u vektor studenata
	}

	for each (Student s in st)//Za svakog sudenta uzimamo njegovo ime,prezime i id
	{
		imena.push_back(s.get_last_name()+" "+s.get_first_name()+" "+s.get_id());
	}
	cout << " " << endl;
	cout << "Studenti sortirani po prezimenima: " << endl;
	cout << " " << endl;
	sort(imena.begin(), imena.end());//Sortira po imenima
	for (int i = 0; i < imena.size(); i++) {
		cout << imena.at(i) << endl;
	}
	cout << " " << endl;
}


void GroupOfStudents::display_highest() {
	cout << st_vec.size() << endl;
	double max = 0;//Smesta se trenutni najbolji

	for each (StudentCourses student in st_vec)
	{
		if (student.get_final_score() > max) {
			max = student.get_final_score();//Nadje najvecu ocenu
		}
	}
	cout << " " << endl;
	cout << "Studenti sa najvecim prosekom su: " << endl;
	for each (StudentCourses sc in st_vec) //za svakog studenta in vektora
	{
		if (sc.get_final_score() == max) {//Ukoliko ima najvecu ocenu ispisuje ga
			sc.display();
			cout << "sa " << max << " bodova" << endl;
			cout << " " << endl;
		}
	}
	{

	}
}