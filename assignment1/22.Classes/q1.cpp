/*
1. Create a class `Circle` with a private radius and public functions to set the radius and calculate the area of the circle.
*/

#include<iostream>
using namespace std;

class Circle
{
    private:
        float radius;
    public:
        void setRadius(float r)
        {
            radius = r;
        }
        float getArea()
        {
            return 3.14 * radius * radius;
        }
};

int main()
{
    Circle c;
    float r;
    cout << "Enter radius: ";
    cin >> r;
    c.setRadius(r);
    cout << "Area of circle with radius " << r << " = " << c.getArea() << endl;
    return 0;
}
