#pragma once

#include "Instrument.h"

class Strings {
private:
	int stringCount;
	int fretCount;
	bool bowed;
public:
	//constructors
	//accessors (getters)
	//mutators (setters)
 
	/* this is provided for spacing purposes
	void print(ofstream& outFile) {
		cout << setw(20) << left << type << setw(20) << name << setw(20) << manufacturer
			<< setw(10) << year << setw(10) << right << cost 
			<< setw (5) << stringCount << setw(5) << fretCount << setw(5) << bowed << endl;
		outFile << setw(20) << left << type << setw(20) << name << setw(20) << manufacturer
			<< setw(10) << year << setw(10) << right << cost
			<< setw(5) << stringCount << setw(5) << fretCount << setw(5) << bowed << endl;
	}
	*/ 
};