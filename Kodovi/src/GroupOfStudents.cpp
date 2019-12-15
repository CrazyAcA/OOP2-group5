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


void GroupOfStudents::display(vector<StudentCourses> st_vector) {
	cout << " " << endl;
	for each(StudentCourses s in st_vector) {
		s.display();
	}
	
}

void GroupOfStudents::display_sorted(vector<StudentCourses> st_vector) {
	try {
		for (int i = 0; i < st_vector.size(); i++) {
			for (int j = 0; j < st_vector.size(); j++) {
				StudentCourses s = st_vector[i];
				StudentCourses s1 = st_vector[j];
				Student s11 = s.get_student();
				Student s22 = s1.get_student();
				if (s11.get_last_name() < s22.get_last_name()) {
					st_vector[i] = s1;
					st_vector[j] = s;
				}
				else if (s11.get_last_name() == s22.get_last_name()) {
					if (s11.get_first_name() < s22.get_first_name()) {
						st_vector[i] = s1;
						st_vector[j] = s;
					}
					else if (s11.get_first_name() == s22.get_first_name()) {
						if (s11.get_id() < s22.get_id()) {
							st_vector[i] = s1;
							st_vector[j] = s;
						}
					}
				}
			}
		}
		for each (StudentCourses sc in st_vector)
		{
			cout << sc.get_student().get_last_name() << " " << sc.get_student().get_first_name() << " " << sc.get_student().get_id() << endl;
		}
	}
	catch (...) {
		cout << "Morate prvo ucitati fajl!" << endl;
	}
	}


void GroupOfStudents::display_highest(vector<StudentCourses> st_vector) {
	double max = 0;//Smesta se trenutni najbolji
	for each (StudentCourses student in st_vector)
	{
		if (student.get_final_score() > max) {
			max = student.get_final_score();//Nadje najvecu ocenu
		}
	}
	cout << " " << endl;
	cout << "Studenti sa najvecim prosekom su: " << endl;
	for each (StudentCourses sc in st_vector) //za svakog studenta in vektora
	{
		if (sc.get_final_score() == max) {//Ukoliko ima najvecu ocenu ispisuje ga
			sc.display();
			cout << "sa " << max << " bodova" << endl;
			cout << " " <<endl;
		}
	}
}

void GroupOfStudents::display_one_student(vector<StudentCourses> st_vector) {
	string oznaka;
	int n = 0;
	cout << "" << endl;
	cout << "Unesite oznaku studenta: " << endl;
	cout << "" << endl;

	vector<Student> st;
	for (int j = 0; j < st_vector.size(); j++) {
		st.push_back(st_vector.at(j).get_student());//Stavljamo sve studente u vektor studenata
	}
	
	while (!(cin >> oznaka)) {
		cout << "Pogresan id studenta!Unesite opet: " << endl;
		cin.clear();
		cin.ignore(100, '\n');

	}
	for each (Student student in st)
	{
		if (oznaka == student.get_id()) {
			
			for each (StudentCourses sc in st_vector)
			{
				if (sc.get_student().get_id() == student.get_id()) {
					cout << "Trazeni student je: " << endl;
					cout << student.get_first_name() << " " << student.get_last_name() << " " << student.get_id() << endl;
					cout << "sa bodovima: " << sc.get_final_score() << endl;
					n++;
				}
			}
			
		}
	}
	if (n == 0) {
		cout << "Student sa trazenim ID ne postoji" << endl;
	}
}

void GroupOfStudents::write_to_file(string path) {
	path = path + ".txt";
	std::ofstream file(path);
	if (file.is_open()) {

		string line;

		for each (StudentCourses studC in st_vec)
		{
			Student s = studC.get_student();
			Courses c = studC.get_courses();
			c.calc_final_score();
			c.calc_letter_grade();
			
			double fc = studC.get_final_score();
			double fc1 = round(fc);
			cout << line << endl;
			file << s.get_id() << " " << s.get_first_name() + " " << s.get_last_name() << " " << fc1 << " " << c.return_letter_grade() << "\n";
		}
		file.close();
		cout << "Uspesno pisanje u fajl!" << endl;
		exit(0);

	}

	else cerr << "Fajl nemoguce otvoriti.";


}