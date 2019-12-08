//============================================================================
// File Name   : StudentCourses.h
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================


#ifndef _STUDENTCOURSES_H_
#define _STUDENTCOURSES_H_

#include "Student.h"
#include "Courses.h"

class StudentCourses
{
private:
	Student student;
	Courses courses;

public:

	Student get_student() const { return student; }
	//Nisam siguran da li ovako treba za virtual
	virtual double get_final_score();
	virtual void display();//Info o studentu broj bodova i konacnu ocenu iz Courses
	
};

#endif /*STUDENTCOURSES_H_*/
