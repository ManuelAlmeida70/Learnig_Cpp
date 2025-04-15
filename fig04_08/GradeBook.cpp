#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.hpp"

GradeBook::GradeBook(string name){
    setCourseName(name);
}

void GradeBook::setCourseName(string name){
    if (name.length() <= 25)
        courseName = name;
    else{
        courseName = name.substr(0, 25);
        cout << "Name \"" << courseName << "\" exceeds maximum length (25).\n";
    }
}

string GradeBook::getCourseName(){
    return courseName;
}

void GradeBook::displayMessage(){
    cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage()
{
    int total;
    int gradeCounter;
    int grade;
    int average;

    total = 0;
    gradeCounter = 1;

    while (gradeCounter <= 10){
        cout << "Enter grade: ";
        cin >> grade;
        total += grade;
        gradeCounter++;
    }

    average = total / 10;

    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average is " << average << endl;
}