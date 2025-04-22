#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "Analysis.hpp"

void Analysis::processExamResults()
{
	int passes;
	int failures;
	int studentCounter;
	int result;

	passes = 0;
	failures = 0;
	studentCounter = 0;

	while (studentCounter < 10)
	{
		cout << "Enter result (1 = pass, 2 = fail): ";
		cin >> result;

		if (result == 1)
			passes += 1;
		else
			failures += 1;

		studentCounter++;
	}

	cout << "Passed " << passes << "\nFailed " << failures << endl;

	if (passes > 8)
		cout << "Raise tuition " << endl;
}