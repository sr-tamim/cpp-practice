/*
Problem 3: Student Information System
Create a class `Student` with attributes `rollNumber`, `name`, and `marks`. Implement a
parameterized constructor to initialize these attributes. Overload the constructor to handle both
with and without marks cases. Display the grade of the student based on the marks (A, B, C, D,
or F).
Sample Input:
Student 1: Roll Number - 101, Name - "Tom"
Student 2: Roll Number - 102, Name - "Lisa", Marks - 75

Sample Output:
Student 1 created with no marks.
Student 2 created with marks 75. Grade: B.
*/

#include <iostream>
using namespace std;

class Student
{
public:
    int rollNumber;
    string name;
    int marks;

    Student(int roll, string sName)
    {
        rollNumber = roll;
        name = sName;
        marks = 0;
        cout << "Student " << rollNumber << " created with no marks." << endl;
    }

    Student(int roll, string sName, int sMarks)
    {
        rollNumber = roll;
        name = sName;
        marks = sMarks;
        cout << "Student " << rollNumber << " created with marks " << marks << ". Grade: " << getGrade() << "." << endl;
    }

    char getGrade()
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }
};

int main()
{
    Student s1(101, "Tom");
    Student s2(102, "Lisa", 75);
    return 0;
}
