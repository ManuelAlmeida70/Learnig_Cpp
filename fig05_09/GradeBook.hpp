#ifndef GRADEBOOK_HPP
# define GRADEBOOK_HPP

# include <string>

using std::string;

class GradeBook
{
	private:
		string courseName;
		int aCount;
		int bCount;
		int cCount;
		int dCount;
		int fCount;
	public:
		GradeBook( string );
		void setCourseName( string );
		string getCourseName();
		void displayMessage();
		void inputGrades();
		void displayGradeReport();
};

#endif