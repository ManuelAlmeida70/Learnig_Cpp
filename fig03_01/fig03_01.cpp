#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

class	GradeBook
{
	public:
		void	displayMessage(string courseName)
		{
			cout << "Welcome to grade book for\n" << courseName <<  "!" << endl;
		}
};

int		main()
{
	string 		nameOfCourse;
	GradeBook	myGradeBook;

	cout << "Please enter the course name:" << endl;
	getline(cin, nameOfCourse);
	cout << endl;

	myGradeBook.displayMessage(nameOfCourse);

	return (0);
}