#include "AnalogIn.h"

/*the following program makes use of the AnalogIn.h header file to measure the resistance of the
bottom resistor in a voltage divider with a 10kOhm as the top resistor.
calculations are done with the analog signal between the two resistors at pin P9.39
example invocation: ./read_resistance
*/

int main(){
	AnalogIn analogZero(0);
	cout<<"The ADC number associated with analogZero is:"<<analogZero.getNumber()<<endl;
	cout<<"The current reading from ADC"<<analogZero.getNumber()<<" is "<<analogZero.readADCsample()<<endl;
	float R1 = 10000;
	float Vout = analogZero.readADCsample() * (1.80f/4096.0f); // Vcc = 1.8V, 12-bit
	float Vin = 1.80;
	float R2 = (R1*(Vout/Vin))/(1-(Vout/Vin));
	if(R2 < 1000){
		cout<<"The resistance of the bottom resistor, R2, is: " << R2 << "Ohms\n";
	}
	else if(R2 >= 1000){
		cout<<"The resistance of the bottom resistor, R2, is: " << R2/1000 << "kOhms\n";
	}
	
	
}
