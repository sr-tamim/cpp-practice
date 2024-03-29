#include <iostream>
using namespace std;

class Shape
{
public:
    int width;
    int height;
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }

    int getPerimeter()
    {
        return 2 * (width + height);
    }
};

int main()
{
    Rectangle rect;
    cout << "Enter width of rectangle: ";
    cin >> rect.width;
    cout << "Enter height of rectangle: ";
    cin >> rect.height;

    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    return 0;
}