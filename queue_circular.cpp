#include <iostream>

using namespace std;

// circular queue class (generic)
template <class T>
class CircularQueue
{
private:
    T *queue;
    int front;
    int rear;
    int capacity;
    int count;

public:
    CircularQueue(int size = 10)
    {
        capacity = size;
        queue = new T[size];
        front = -1;
        rear = -1;
        count = 0;
    }

    ~CircularQueue()
    {
        delete[] queue; // free memory to avoid memory leak
    }

    void enqueue(T item)
    {
        if ((rear + 1) % capacity == front)
        {
            cout << "Queue is full!" << endl;
            return;
        }
        else if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % capacity;
        }

        queue[rear] = item;
        count++;
    }

    T dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return T();
        }

        T item = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % capacity;
        }

        count--;
        return item;
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << queue[i] << " ";
            }
        }
        else
        {
            for (int i = front; i < capacity; i++)
            {
                cout << queue[i] << " ";
            }

            for (int i = 0; i <= rear; i++)
            {
                cout << queue[i] << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue<int> q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();

    q.enqueue(3);
    q.dequeue();
    q.enqueue(4);

    q.display();

    return 0;
}