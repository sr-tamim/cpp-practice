/*
Problem 1: Library Management System
Create a class `Book` with attributes `title`, `author`, and `ISBN`. Implement a parameterized
constructor to initialize these attributes. Write a destructor to display a message when a book
object is destroyed. Create multiple book objects and demonstrate constructor and destructor
calls.
Sample Input:
Book 1: Title - "Introduction to OOP", Author - "John Doe", ISBN - "123456789"
Book 2: Title - "Data Structures and Algorithms", Author - "Jane Smith", ISBN - "987654321"

Sample Output:
Book 1 created.
Book 2 created.
Book 1 destroyed.
Book 2 destroyed.
*/

#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;

    Book(string title, string author, string ISBN) {
        title = title;
        author = author;
        ISBN = ISBN;
        cout << " created." << endl;
    }

    ~Book() {
        cout << " destroyed." << endl;
    }
};

int main() {
    cout << "Book 1";
    Book* book1 = new Book("Introduction to OOP", "John Doe", "123456789");

    cout << "Book 2";
    Book* book2 = new Book("Data Structures and Algorithms", "Jane Smith", "987654321");

    cout << "Book 1";
    delete book1;

    cout << "Book 2";
    delete book2;

    return 0;
}
