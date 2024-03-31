#include <iostream>
using namespace std;

class Animal
{
private:
    string sound;

protected:
    void setSound(string s)
    {
        sound = s;
    }

public:
    string name;
    void printSound(int n = 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << sound << " ";
        }
        cout << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        setSound("Bark");
    }
};

class Cat : public Animal
{
public:
    Cat()
    {
        setSound("Meow");
    }
};

class Cow : public Animal
{
public:
    Cow()
    {
        setSound("Moo");
    }
};

int main()
{
    Dog d;
    Cat c;
    Cow w;

    // simulate a conversation between a dog, a cat, and a cow
    cout << "Dog: ";
    d.printSound(2);
    cout << "Cat: ";
    c.printSound(3);
    cout << "Cow: ";
    w.printSound(2);

    cout << "Cat: ";
    c.printSound(2);
    cout << "Cow: ";
    w.printSound();
    cout << "Dog: ";
    d.printSound(3);

    return 0;
}
