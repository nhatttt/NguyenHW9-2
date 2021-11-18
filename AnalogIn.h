/*
* file name: analogIn.h
* Created by Amer Qouneh on October 30, 2020.
*
* This class wraps the functionality of analog input pins.
*/
#ifndef ANALOGIN_H_
#define ANALOGIN_H_
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
class AnalogIn{
	private:
	unsigned int number;
	public:
	AnalogIn();
	AnalogIn(unsigned int n);
	unsigned int getNumber() {return number; } // inline function implementation.
	void setNumber(unsigned int n);
	int readADCsample();
	~AnalogIn();
};
#endif /* ANALOGIN_H_ */
