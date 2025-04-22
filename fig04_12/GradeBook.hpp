#ifndef GRADEBOOK_HPP
# define GRADEBOOK_HPP

#include <string>

using std::string;

class  GradeBook
{
    private:
        string courseName;
    public:
        GradeBook( string );
        void setCourseName( string);
        string getCourseName();
        void displayMessage();
        void determineClassAverage();
};

#endif