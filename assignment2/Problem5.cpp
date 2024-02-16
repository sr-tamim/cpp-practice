/*
Problem 5: Employee Management System
Create a class `Employee` with attributes `employeeID`, `name`, and `salary`. Implement a
parameterized constructor to initialize these attributes. Overload the constructor to handle both
with and without salary cases. Create a method to calculate and display the annual salary (12
times the monthly salary).
Sample Input:
Employee 1: Employee ID - 001, Name - "John"
Employee 2: Employee ID - 002, Name - "Jane", Salary - 5000

Sample Output:
Employee 1 created with no salary.
Employee 2 created with salary 5000. Annual Salary: 60000.
*/

#include <iostream>
using namespace std;

class Employee
{
public:
    int employeeID;
    string name;
    int salary;

    void showAnnualSalary()
    {
        cout << "Annual Salary: " << salary * 12 << "." << endl;
    }

    Employee(int empID, string empName)
    {
        employeeID = empID;
        name = empName;
        cout << name << " created with no salary." << endl;
    }

    Employee(int empID, string empName, int empSalary)
    {
        employeeID = empID;
        name = empName;
        salary = empSalary;
        cout << name << " created with salary " << salary << ". ";
        showAnnualSalary();
    }
};

int main()
{
    Employee employee1 = Employee(001, "John");
    Employee employee2 = Employee(002, "Jane", 5000);
    return 0;
}
