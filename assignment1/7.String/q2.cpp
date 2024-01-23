/*
2. Create a string variable for a book title and another for the author, then combine them and print the result.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string title, author, book;

    cout << "Enter book title: ";
    getline(cin, title);

    cout << "Enter author: ";
    getline(cin, author);

    book = title + " by " + author;

    cout << "Book: " << book << endl;

    return 0;
}