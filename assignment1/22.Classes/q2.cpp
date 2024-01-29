/*
2. Define a class `Student` with properties for name, age, and GPA, and a method to print student details.
*/

#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int age;
        float gpa;
        void printDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "GPA: " << gpa << endl;
        }
};

int main()
{
    Student s;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter GPA: ";
    cin >> s.gpa;
    s.printDetails();
    return 0;
}
