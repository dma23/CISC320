/*
 * A testing class for CISC/CMPE320 assignment 2.
 * You must satisfy all tests in this file, but may add some of your own.
 */
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

#include "fraction_17dym2.h"	// Add your netid to the #include

int main() { 

    Fraction test1;
	cout << "Should be \"0/1\": " << test1 << endl;
	Fraction test2(4);
	cout << "Should be \"4/1\": " << test2 << endl;
	Fraction test3(20, 30);
	cout << "Should be \"2/3\": " << test3 << endl;
	Fraction test4(210, -60);
	cout << "Should be \"-7/2\": " << test4 << endl;
    
    return 0;
}