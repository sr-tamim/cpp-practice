#include <iostream>
using namespace std;

#define LOW_PRIORITY 0
#define MEDIUM_PRIORITY 1
#define HIGH_PRIORITY 2


string priorityToString(int priority)
{
    switch (priority)
    {
    case LOW_PRIORITY:
        return "LOW";
    case MEDIUM_PRIORITY:
        return "MEDIUM";
    case HIGH_PRIORITY:
        return "HIGH";
    default:
        return "INVALID";
    }
}

template <class T>
class Node
{
public:
    T data;
    int priority;
    Node()
    {
        data = T();
        priority = LOW_PRIORITY;
    }
    Node(T data, int priority)
    {
        this->data = data;
        this->priority = priority;
    }
};

template <class T>
class Queue
{
private:
    Node<T> *queue;
    int front;
    int rear;
    int capacity;
    int count;

public:
    Queue(int size = 10)
    {
        capacity = size;
        queue = new Node<T>[size];
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

    void enqueue(T item, int priority)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
            return;
        }
        if (priority < LOW_PRIORITY || priority > HIGH_PRIORITY)
        {
            cout << "Invalid priority!" << endl;
            return;
        }
        // enqueue based on priority
        // highest priority at the front
        // lowest priority at the rear
        int i;
        for (i = rear; i >= front; i--)
        {
            if (priority > queue[i].priority)
            {
                queue[i + 1] = queue[i];
            }
            else
            {
                break;
            }
        }
        queue[i + 1] = Node<T>(item, priority);
        rear++;
        count++;
    }

    Node<T> dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return Node<T>(T(), LOW_PRIORITY);
        }

        Node<T> item = queue[front];
        front++;
        count--;
        return item;
    }

    Node<T> peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return Node<T>(T(), LOW_PRIORITY);
        }

        return queue[front];
    }

    void display()
    {
        int i = front;
        int j = 0;

        while (j < count)
        {
            cout << queue[i].data << ", ";
            i++;
            j++;
        }

        cout << endl;
    }
};

int main()
{
    Queue<int> q(5);
    q.enqueue(3, HIGH_PRIORITY);
    q.enqueue(5, LOW_PRIORITY);
    q.enqueue(2, MEDIUM_PRIORITY);

    Node<int> item = q.dequeue();
    cout << "Front element dequeued: (" << item.data << ", " << priorityToString(item.priority) << ")" << endl;

    cout << "Current Queue: ";
    q.display();

    return 0;
}