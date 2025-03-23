#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class GradeBook
{
	public:
		GradeBook(string name)
		{
			setCourseName(name);
		}

		void setCourseName(string name)
		{
			courseName = name;
		}

		string getCourseName()
		{
			return courseName;
		}

		void dispplayMessage()
		{
			cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
		}

		private:
			string courseName;
};

