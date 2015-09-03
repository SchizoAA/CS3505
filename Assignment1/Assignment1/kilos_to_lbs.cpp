/*Assignment 1: C++ and Shell Warmup
-accept a single command line numerical argument. You may assume a valid number is the argument.
-convert that number to lbs
-output only the converted number to cout and finish with an endl
-The output should round to two decimal places of precision after the decimal point. (hint, research the fixed command).

Bash command for line-at-a-time execution: cat values.txt | while read line; do ./kilos_to_lbs.out $line; done

NAME: Kyle Erickson
Uid: U0461601
DATE: 08/27/2015
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	if (argc <= 1)//check for command line input
	{
		cout << "No argument entered. Please provide an input." << endl;
	}

	double kilos = atof(argv[argc - 1]);//Take in argument from command line
	double lbs = kilos * 2.20462;//Convert kilos to lbs

	cout.precision(2);
	cout << fixed << lbs << endl;
	return 0;
}
