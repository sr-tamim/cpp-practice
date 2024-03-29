#include <iostream>
using namespace std;

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
        delete[] queue;
    }

    bool isEmpty()
    {
        return count == 0;
    }

    int size()
    {
        return count;
    }

    void enqueue(T item)
    {
        if (count == capacity)
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

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        int i = front;
        while (i != rear)
        {
            cout << queue[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << queue[rear] << endl;
    }
};

void reverseQueue(Queue<int> &q, int k)
{
    if (q.isEmpty() || k <= 0 || k > q.size())
    {
        return;
    }

    int queueSize = q.size();
    int temp[k];
    for (int i = k - 1; i >= 0; i--)
    {
        temp[i] = q.dequeue();
    }

    int elementsLeft = q.size();
    for (int i = 0; i < queueSize; i++)
    {
        if (i < k)
            q.enqueue(temp[i]);
        else
            q.enqueue(q.dequeue());
    }
}

int main()
{
    Queue<int> q(10);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);

    cout << "Original queue: ";
    q.display();

    reverseQueue(q, 5);
    cout << "Queue after reversing first 5 elements: ";
    q.display();

    return 0;
}