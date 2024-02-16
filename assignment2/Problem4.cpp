/*
Problem 4: Car Rental System
Create a class `Car` with attributes `model`, `make`, and `rentalFee`. Implement a
parameterized constructor to initialize these attributes. Overload the constructor to handle both
with and without rental fee cases. Create a method to display the details of the car, including the
rental fee.
Sample Input:
Car 1: Model - "Sedan", Make - "Toyota"
Car 2: Model - "SUV", Make - "Ford", Rental Fee - 50

Sample Output:
Car 1 created with no rental fee.
Car 2 created with rental fee 50. Rental Fee: 50.
*/

#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    string make;
    int rentalFee;

    void showCarDetails()
    {
        cout << "Model: " << model << ", Make: " << make << ", Rental Fee: " << rentalFee << "." << endl;
    }

    Car(string carModel, string carMake)
    {
        model = carModel;
        make = carMake;
        cout << model << " created with no rental fee." << endl;
    }

    Car(string carModel, string carMake, int carRentalFee)
    {
        model = carModel;
        make = carMake;
        rentalFee = carRentalFee;
        cout << model << " created with rental fee " << rentalFee << ". Rental Fee: " << rentalFee << "." << endl;
    }
};

int main()
{
    Car car1 = Car("Sedan", "Toyota");
    Car car2 = Car("SUV", "Ford", 50);
    return 0;
}
