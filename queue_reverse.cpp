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

template <class T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        this->data = data;
        next = nullptr;
    }
};

template <class T>
class Stack
{
private:
    Node<T> *head = nullptr;

public:
    ~Stack()
    {
        Node<T> *temp = head;
        while (temp != nullptr)
        {
            head = head->next;
            delete temp;    // free memory to avoid memory leak
            temp = head;
        }
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    void push(T data)
    {
        Node<T> *temp = new Node<T>(data);
        temp->next = head;
        head = temp;
    }

    T pop()
    {
        if (head == nullptr)
        {
            cout << "Stack is empty!" << endl;
            return T();
        }

        Node<T> *temp = head;
        T data = temp->data;
        head = head->next;
        delete temp;    // free memory to avoid memory leak
        return data;
    }
};

void reverseQueue(Queue<int> &q)
{
    Stack<int> stack;

    while (!q.isEmpty())
    {
        stack.push(q.dequeue());
    }

    while (!stack.isEmpty())
    {
        q.enqueue(stack.pop());
    }
}

int main()
{
    Queue<int> q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout << "Original queue: ";
    q.display();

    reverseQueue(q);

    cout << "Reversed queue: ";
    q.display();

    return 0;
}