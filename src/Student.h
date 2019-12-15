//============================================================================
// File Name   : Student.h
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================


#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <iostream>
using namespace std;
using std::string;

class Student
{
private:
	string firstName;
	string lastName;
	string ID;
public:
	Student();//Prazan konstuktor
	Student(string ime, string prezime, string id);//Konstuktor sa parametrima
	string get_first_name();
	string get_last_name();
	string get_id();
	void display();
};

#endif /*STUDENT_H_*/
