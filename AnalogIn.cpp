#include "AnalogIn.h"
#define ADC_PATH "/sys/bus/iio/devices/iio:device0/in_voltage"
AnalogIn::AnalogIn(){
	cout<<"constructed an empty AnalogIn Object"<<endl;
}
AnalogIn::AnalogIn(unsigned int n){
	number = n;
}
//unsigned int AnalogIn::getNumber() {return number; } // inline function implementation.
void AnalogIn::setNumber(unsigned int n){
	number = n;
}
int AnalogIn::readADCsample(){
	stringstream ss;
	int ADCVal;
	ss<<ADC_PATH<<number<<"_raw";
	fstream fs;
	fs.open(ss.str().c_str(), fstream::in);
	fs>>ADCVal;
	fs.close();
	return ADCVal;
}
AnalogIn::~AnalogIn(){
	cout << "destroying the AnalogIn with number: " << number << endl;
}
