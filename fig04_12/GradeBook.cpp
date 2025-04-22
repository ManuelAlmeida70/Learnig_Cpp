#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

#include "GradeBook.hpp"

GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
		courseName = name;
	else
	{
		courseName = name.substr(0, 25);
		cout << "Nmae \"" << name << "\" exceeds maximun length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n";
}

void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	double average;

	total = 0;
	gradeCounter = 0;

	cout << "Enter grade or -1 to quit: ";
	cin >> grade;

	while (grade != -1)
	{
		total += grade;
		gradeCounter++;

		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}

	if (gradeCounter != 0)
	{
		average = static_cast<double>(total) / gradeCounter;

		cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	}
	else
		cout << "No grades were entered" << endl;
}