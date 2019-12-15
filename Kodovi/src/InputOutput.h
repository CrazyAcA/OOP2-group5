//============================================================================
// File Name   : InputOutput.h
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================

using namespace std;
#include <fstream>
#include <iostream>
#include "Student.h"
#include <stdlib.h>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>

#include "Student.h"
#include "Courses.h"
#include "StudentCourses.h"
#include "GroupOfStudents.h"
//#include "Menu.h"
using std::string;

class InputOutput
{
public:

	InputOutput() {};

	// Funkcije za citanje
	vector<StudentCourses> read_textFile(string path);
	void read_binaryFile(string path);
	void write_textFile(vector<StudentCourses> vektor);
	void write_binaryFile(string path);
	// GLAVNA FUNKCIJA ZA SPLITOVANJE LINIJE PO DELIMITERU
	std::vector<std::string> split(const std::string& s, char delim) {
		std::vector<std::string> elems;
		split2(s, delim, std::back_inserter(elems));
		return elems;
	}
	template <typename Out>
	void split2(const std::string& s, char delim, Out result);

};

// POMOCNA FUNKCIJA ZA OVU GLAVNU IZNAD
template<typename Out>
inline void InputOutput::split2(const std::string& s, char delim, Out result)
{
		std::istringstream iss(s);
		std::string item;
		while (std::getline(iss, item, delim)) {
			*result++ = item;
		}
}
