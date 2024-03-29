#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNumber;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setRollNumber(int rollNumber)
    {
        this->rollNumber = rollNumber;
    }
    string getName()
    {
        return name;
    }
    int getRollNumber()
    {
        return rollNumber;
    }

    void details()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNumber << endl;
    }
};

class Test
{
protected:
    int marks;
    string grade;
    void setGrade()
    {
        switch (marks / 10)
        {
        case 10:
        case 9:
        case 8:
            grade = "A+";
            break;
        case 7:
            grade = "A";
            break;
        case 6:
            grade = "A-";
            break;
        case 5:
            grade = "B";
            break;
        case 4:
            grade = "C";
            break;
        default:
            grade = "F";
            break;
        }
    }

public:
    void setMarks(int marks)
    {
        this->marks = marks;
        setGrade();
    }
    int getMarks()
    {
        return marks;
    }
    string getGrade()
    {
        return grade;
    }
    void details()
    {
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

class Result : protected Student, protected Test
{
public:
    void setDetails(string name, int rollNumber, int marks)
    {
        setName(name);
        setRollNumber(rollNumber);
        setMarks(marks);
    }

    void details()
    {
        Student::details();
        Test::details();
    }
};

int main()
{
    Result result;
    result.setDetails("John Doe", 12345, 58);
    result.details();

    return 0;
}