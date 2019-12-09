//============================================================================
// File Name   : InputOutput.h
// Authors     : You
// Version     : 1.0
// Copyright   : Your copyright notice (if applicable)
// Description : C++ group project
//============================================================================



#include <string>
#include <stdexcept>
using namespace std;
using std::string;

class InputOutput
{

public:

	InputOutput() {};
	// Funkcije za citanje
	void read_textFile(string path);
	void read_binaryFile(string path);
	void write_textFile(string path);
	void write_binaryFile(string path);






};