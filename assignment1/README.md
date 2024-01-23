# 1. Hello World
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```
**Example 2:**

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Welcome to C++ Programming!" << endl;
    return 0;
}
```

**Questions:**
1. Write a program that prints "Learning C++ is fun!".
2. Write a program that prints your name followed by "starts coding in C++!".

# 2. Printing Format
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "The result of 7 + 8 is: " << 7 + 8 << endl;
    return 0;
}
```



**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    return 0;
}
```

**Questions:**
1. Print the multiplication and division of two numbers, 12 and 4.
2. Print the full name by combining two string variables, firstName and lastName.

# 3. Comment
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    // This is a single-line comment
    cout << "Single-line comments start with //" << endl;
    return 0;
}
```











**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    /* This is a multi-line comment
       that spans over multiple
       lines */
    cout << "Multi-line comments start with /* and end with */" << endl;
    return 0;
}
```

**Questions:**
1. Write a program that adds two numbers and use single-line comments to explain each step.
2. Write a program that calculates the area of a rectangle and use multi-line comments to describe the formula.

# 4. Variables (int, str, boolean, etc.)
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 10;
    string name = "Alice";
    bool isCoding = true;
    cout << "Number: " << number << ", Name: " << name << ", Is Coding: " << isCoding << endl;
    return 0;
}
```

**Example 2:**

```c++
#include <bits/stdc++.h>
using namespace std;
int main() {
    int age = 25;
    string city = "New York";
    bool hasDriverLicense = false;
    cout << "Age: " << age << ", City: " << city << ", Has Driver License: " << hasDriverLicense << endl;
    return 0;
}
```

**Questions:**
1. Create variables for storing a person's height (int), weight (double), and eye color (string), then print them.
2. Declare a boolean variable named `isStudent` and an integer variable named `studentId`, then print them.

# 5. Data Type and Casting
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int wholeNumber = 100;
    double fractionalNumber = 10.5;
    wholeNumber = (int)fractionalNumber;  // Casting double to int
    cout << "Whole Number: " << wholeNumber << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    double number = 9.7;
    int integerPart = (int)number;  // Casting double to int
    cout << "Integer Part: " << integerPart << endl;
    return 0;
}
```

**Questions:**
1. Declare a float variable and cast it to an integer, then print both values.
2. Create a double variable with a fractional part and cast it to an int, displaying the original and casted values.

# 6. Operator
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 5, y = 2;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    return 0;
}
```

**Questions:**
1. Write a program that calculates and prints the remainder of dividing 15 by 4.
2. Create a program that uses increment and decrement operators on a variable and prints the result each time.



# 7. String
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << "Full Name: " << fullName << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence = "C++ is ";
    sentence += "awesome!";
    cout << sentence << endl;
    return 0;
}
```

**Questions:**
1. Write a program that takes two strings, `city` and `country`, and concatenates them into a single string `location`.
2. Create a string variable for a book title and another for the author, then combine them and print the result.







# 8. If Else Condition
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 10;
    if (number > 0) {
        cout << "Number is positive" << endl;
    } else {
        cout << "Number is not positive" << endl;
    }
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int age = 18;
    if (age >= 18) {
        cout << "You are an adult" << endl;
    } else {
        cout << "You are not an adult" << endl;
    }
    return 0

;
}
```

**Questions:**
1. Write a program that checks if a number is even or odd and prints the result.
2. Create a program that compares two numbers and prints which one is bigger or if they are equal.




# 9. Nested If Else
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int age = 20;
    bool hasLicense = true;
    if (age >= 18) {
        if (hasLicense) {
            cout << "You can drive a car." << endl;
        } else {
            cout << "You need a driver's license to drive." << endl;
        }
    } else {
        cout << "You are too young to drive." << endl;
    }
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int score = 85;
    if (score >= 90) {
        cout << "Grade A" << endl;
    } else if (score >= 80) {
        cout << "Grade B" << endl;
    } else if (score >= 70) {
        cout << "Grade C" << endl;
    } else {
        cout << "Grade F" << endl;
    }
    return 0;
}
```


**Questions:**
1. Write a program that checks the age and height of a person to determine if they can ride a roller coaster.
2. Create a program that determines shipping cost based on weight and distance: less than 5 kg, more than 5 kg but less than 20 kg, and more than 20 kg.

# 10. For Loop
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Hello, World! " << i << endl;
    }
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 10; i > 0; i--) {
        cout << "Countdown: " << i << endl;
    }
    return 0;
}
```

**Questions:**
1. Write a for loop that prints the first 10 multiples of 3.
2. Create a for loop that prints the square of numbers from 1 to 5.






# 11. While Loop
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << "i = " << i << endl;
        i++;
    }
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int number = 123, reverse = 0;
    while (number != 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    cout << "Reversed Number: " << reverse << endl;
    return 0;
}
```

**Questions:**
1. Write a program that calculates the factorial of a number using a while loop.
2. Create a while loop that finds the greatest common divisor (GCD) of two numbers.







# 12. Break
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) break;
        cout << "i = " << i << endl;
    }
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    while (true) {
        cout << "Enter a number (0 to exit): ";
        cin >> number;
        if (number == 0) break;
        cout << "You entered: " << number << endl;
    }
    return 0;
}
```

**Questions:**
1. Write a program that keeps asking the user for a number until they enter -1, then stops.
2. Create a for loop that prints numbers from 1 to 10, but stops when it reaches 6.








# 13. Continue
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) continue;  // Skip even numbers
        cout << "i = " << i << endl;
    }
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0;
    while (i < 10) {
        i++;
        if (i % 3 == 0) continue;  // Skip multiples of 3
        cout << "i = " << i << endl;
    }
    return 0;
}
```

**Questions:**
1. Write a for loop that prints all numbers from 1 to 10 except 4 and 7.
2. Create a while loop that prints numbers from 1 to 10 but skips numbers divisible by 5.









# 14. Array
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    for (char vowel : vowels) {
        cout << vowel << ' ';
    }
    cout << endl;
    return 0;
}
```

**Questions:**
1. Create an array of 5 floating point numbers and print them using a loop.
2. Write a program that initializes an array with the first 10 even numbers and prints them.





# 15. Array Printing and Manipulation
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    // Printing array
    for (int number : numbers) {
        cout << number << ' ';
    }
    cout << endl;
    // Manipulating array
    for (int i = 0; i < 5; i++) {
        numbers[i] *= 2;
    }
    // Printing modified array
    for (int number : numbers) {
        cout << number << ' ';
    }
    cout << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    string fruits[3] = {"Apple", "Banana", "Cherry"};
    // Printing array
    for (string fruit : fruits) {
        cout << fruit << ' ';
    }
    cout << endl;
    // Manipulating array
    fruits[1] = "Blueberry";
    // Printing modified array
    for (string fruit : fruits) {
        cout << fruit << ' ';
    }
    cout << endl;
    return 0;
}
```

**Questions:**
1. Create an array of 6 integers, print them, reverse the array, then print it again.
2. Write a program that initializes an array of characters (a string) and changes a specific character, then prints the original and modified string.

# 16. Structures
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;
};

int main() {
    Car car1 = {"Ford", "Mustang", 1969};
    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
    Student student1 = {"Alice", 20, 3.5};
    cout << student1.name << " is " << student1.age << " years old and has a GPA of " << student1.gpa << endl;
    return 0;
}
```

**Questions:**
1. Define a structure named `Rectangle` with width and height as its properties and write a program to create an instance of it and print its properties.
2. Create a structure named `Point` with `x` and `y` coordinates and write a function to print points.

# 17. Pointers
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    string food = "Pizza";
    string *ptr = &food;
    cout << "Value of food: " << food << endl;
    cout << "Address of food: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;
    return 0;
}
```

**Questions:**
1. Write a program where you declare an integer, a float, and a char, then print the address of each variable using a pointer.
2. Create a pointer for an array and use it to print all elements of the array.

# 18. Functions
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    greet();
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum of 5 and 3 is " << sum(5, 3) << endl;
    return 0;
}
```



**Questions:**
1. Write a function named `max` that takes two numbers as arguments and returns the larger of them.
2. Create a function that calculates and returns the area of a circle given its radius.

# 19. Function Parameters
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

void printAge(int age) {
    cout << "You are " << age << " years old." << endl;
}

int main() {
    printAge(25);
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

void introduce(string firstName, string lastName) {
    cout << "Hello, my name is " << firstName << " " << lastName << endl;
}

int main() {
    introduce("John", "Doe");
    return 0;
}
```





**Questions:**
1. Write a function that takes a string and an integer (name and age) and prints a greeting message.
2. Create a function that takes two float parameters (base and height) and calculates the area of a triangle.

# 20. Function Overloading
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int add(int x, int y) {
    return x + y;
}

double add(double x, double y) {
    return x + y;
}

int main() {
    cout << add(5, 3) << endl;  // Uses int version
    cout << add(5.2, 3.8) << endl;  // Uses double version
    return 0;
}
```

`

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

void print(string s) {
    cout << "String: " << s << endl;
}

void print(int n) {
    cout << "Integer: " << n << endl;
}

int main() {
    print("C++");
    print(10);
    return 0;
}
```

**Questions:**
1. Overload a function `multiply` to work with both two integers and two doubles.
2. Create an overloaded function `area` that calculates the area of a rectangle and a circle.

# 21. Recursion
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    cout << "Factorial of 5 is " << factorial(5) << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < 10; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
```

**Questions:**
1. Write a recursive function to calculate the sum of numbers from 1 to n.
2. Create a recursive function to find the greatest common divisor (GCD) of two numbers.

# 22. Classes
**Example 1:**
```c++
#include <bits/stdc++.h>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z) {  // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};

int main() {
    Car car1("Ford", "Mustang", 1969);
    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
using namespace std;

class Rectangle {
  public:
    int width;
    int height;
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect(10, 5);
    cout << "Area: " << rect.area() << endl;
    return 0;
}
```

**Questions:**
1. Create a class `Circle` with a private radius and public functions to set the radius and calculate the area of the circle.
2. Define a class `Student` with properties for name, age, and GPA, and a method to print student details.


# 23. Input and Output from Text File
**Example 1:**
```c++
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("example.txt");
    MyFile << "This is a test file.\n";
    MyFile.close();
    
    string line;
    ifstream MyReadFile("example.txt");
    while (getline(MyReadFile, line)) {
        cout << line << endl;
    }
    MyReadFile.close();
    return 0;
}
```

**Example 2:**
```c++
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("numbers.txt");
    for (int i = 1; i <= 5; i++) {
        MyFile << "Number " << i << "\n";
    }
    MyFile.close();
    
    string line;
    ifstream MyReadFile("numbers.txt");
    while (getline(MyReadFile, line)) {
        cout << line << endl;
    }
    MyReadFile.close();
    return 0;
}
```

**Questions:**
1. Write a program to read a file named "input.txt" and print each line to the console.
2. Create a program to write the first 10 squares (1, 4, 9, ..., 100) to a file called "squares.txt", then read the file and print its content to the console.


