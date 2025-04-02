#include "GradeBook.h"

int main()
{
	GradeBook myGradeBook("CS101 C++ programming");

	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
	return 0;
}