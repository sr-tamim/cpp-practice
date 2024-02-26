#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class Queue
{
private:
    Node<T> *front;
    Node<T> *rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    bool isEmpty() { return front == nullptr; }

    void enqueue(T data)
    {
        Node<T> *newNode = new Node<T>(data);
        if (isEmpty())
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return T();
        }
        Node<T> *temp = front;
        T data = temp->data;
        front = temp->next;
        if (front == nullptr)
            rear = nullptr;
        delete temp;
        return data;
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return T();
        }
        return front->data;
    }

    ~Queue()
    {
        while (front != nullptr)
        {
            Node<T> *temp = front;
            front = front->next;
            delete temp;
        }
    }
};

template <typename T>
class Stack
{
private:
    Queue<T> q1;
    Queue<T> q2;

public:
    Stack() {}

    bool isEmpty() { return q1.isEmpty(); }

    void push(T data)
    {
        q2.enqueue(data);
        while (!q1.isEmpty())
        {
            q2.enqueue(q1.dequeue());
        }
        swap(q1, q2);
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        return q1.dequeue();
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        return q1.peek();
    }
};

int main()
{
    Stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    cout << "Top element popped: " << myStack.pop() << endl;
    cout << "Current stack: " << myStack.peek() << endl;
    return 0;
}