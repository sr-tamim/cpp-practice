#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string fuelType;
    int capacity;

public:
    Vehicle(string fuelType, int capacity)
    {
        this->fuelType = fuelType;
        this->capacity = capacity;
    }

    void display()
    {
        cout << "Fuel type: " << fuelType << endl;
        cout << "Capacity: " << capacity << " cc" << endl;
    }
};

class Car : public Vehicle
{
protected:
    int numSeats;

public:
    Car(string fuelType, int capacity, int numSeats) : Vehicle(fuelType, capacity)
    {
        this->numSeats = numSeats;
    }

    void display()
    {
        cout << "Fuel type: " << fuelType << endl;
        cout << "Capacity: " << capacity << " cc" << endl;
        cout << "Number of seats: " << numSeats << endl;
    }
};

class Sedan : public Car
{
protected:
    int bootSpace;

public:
    Sedan(string fuelType, int capacity, int numSeats, int bootSpace) : Car(fuelType, capacity, numSeats)
    {
        this->bootSpace = bootSpace;
    }

    void display()
    {
        cout << "Fuel type: " << fuelType << endl;
        cout << "Capacity: " << capacity << " cc" << endl;
        cout << "Number of seats: " << numSeats << endl;
        cout << "Boot space: " << bootSpace << " litres" << endl;
    }
};

int main()
{
    Sedan sedan("Petrol", 1498, 5, 510);
    sedan.display();

    cout << endl
         << "Printing using Car class" << endl;
    sedan.Car::display();

    cout << endl
         << "Printing using Vehicle class" << endl;
    sedan.Vehicle::display();

    return 0;
}