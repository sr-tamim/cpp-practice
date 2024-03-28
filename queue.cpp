/* Queue */
#include <iostream>

using namespace std;

// queue class (generic)
template <class T>
class Queue
{
private:
    T *queue;
    int front;
    int rear;
    int capacity;
    int count;

public:
    Queue(int size = 10)
    {
        capacity = size;
        queue = new T[size];
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue()
    {
        delete[] queue; // free memory to avoid memory leak
    }

    bool isEmpty()
    {
        return count == 0;
    }

    bool isFull()
    {
        return count == capacity;
    }

    void enqueue(T item)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
            return;
        }

        rear = (rear + 1) % capacity;
        queue[rear] = item;
        count++;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return T();
        }

        T item = queue[front];
        front = (front + 1) % capacity;
        count--;
        return item;
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return T();
        }

        return queue[front];
    }

    int size()
    {
        return count;
    }

    void display()
    {
        int i = front;
        int j = 0;

        while (j < count)
        {
            cout << queue[i] << ", ";
            i = (i + 1) % capacity;
            j++;
        }

        cout << endl;
    }
};

bool checkPalindrome(string str)
{
    Queue<char> q(str.length());

    for (int i = 0; i < str.length(); i++)
    {
        q.enqueue(str[i]);
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != q.dequeue())
        {
            return false;
        }
    }

    return true;
}

int main()
{
    Queue<int> q1(5);

    q1.enqueue(5);
    q1.enqueue(10);

    cout << "Front element dequeued: " << q1.dequeue() << endl;
    cout << "Current queue: " << q1.peek() << endl;

    string inpt;
    cout << "Enter a string to check if it is a palindrome: ";
    cin >> inpt;
    cout << "Is palindrome: " << (checkPalindrome(inpt) ? "Yes" : "No") << endl;

    return 0;
}