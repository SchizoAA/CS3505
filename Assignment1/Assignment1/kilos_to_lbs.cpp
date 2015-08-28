/*Assignment 1: C++ and Shell Warmup
-accept a single command line numerical argument. You may assume a valid number is the argument.
-convert that number to lbs
-output only the converted number to cout and finish with an endl
  -The output should round to two decimal places of precision after the decimal point. (hint, research the fixed command).

NAME: Kyle Erickson
Uid: U0461601
DATE: 08/27/2015
*/

#include <iostream>

using namespace std;

int main(char* in)
{
	cout.precision(3);
	in = "1.6";//REMOVE: test line for input
	double kilos = atof(in);
	double lbs = kilos * 2.20462;//Convert kilos to lbs
	cout << lbs << fixed << endl;
	
	return 0;
}