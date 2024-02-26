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
class Stack
{
private:
    Node<T> *top;

public:
    Stack() : top(nullptr) {}

    bool isEmpty() { return top == nullptr; }

    void push(T data)
    {
        Node<T> *newNode = new Node<T>(data);
        newNode->next = top;
        top = newNode;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        Node<T> *temp = top;
        T data = temp->data;
        top = temp->next;
        delete temp;
        return data;
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        return top->data;
    }

    ~Stack()
    {
        while (top != nullptr)
        {
            Node<T> *temp = top;
            top = top->next;
            delete temp;
        }
    }
};

string reverseString(string str)
{
    Stack<char> charStack;
    for (char ch : str)
    {
        charStack.push(ch);
    }

    string reversedString;
    while (!charStack.isEmpty())
    {
        reversedString += charStack.pop();
    }

    return reversedString;
}

// Additional function for checking balanced parentheses

bool isBalanced(string str)
{
    Stack<char> parenStack;
    for (char ch : str)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            parenStack.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (parenStack.isEmpty())
            {
                return false;
            }
            char top = parenStack.pop();
            if ((top == '(' && ch != ')') || (top == '[' && ch != ']') || (top == '{' && ch != '}'))
            {
                return false;
            }
        }
    }
    return parenStack.isEmpty();
}

// function to find minimum number in stack
int findMin(Stack<int> &intStack)
{
    int min = intStack.peek();
    Stack<int> tempStack;
    while (!intStack.isEmpty())
    {
        int data = intStack.pop();
        if (data < min)
        {
            min = data;
        }
        tempStack.push(data);
    }
    // restore the original stack
    while (!tempStack.isEmpty())
    {
        intStack.push(tempStack.pop());
    }
    return min;
}

// Additional function for sorting stack
void sortStack(Stack<int> &intStack)
{
    Stack<int> tempStack;
    while (!intStack.isEmpty())
    {
        int data = intStack.pop();
        while (!tempStack.isEmpty() && tempStack.peek() > data)
        {
            intStack.push(tempStack.pop());
        }
        tempStack.push(data);
    }
    while (!tempStack.isEmpty())
    {
        intStack.push(tempStack.pop());
    }
}

// functions to evaluate postfix expression
bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

int performOperation(int operand1, int operand2, char op)
{
    switch (op)
    {
    case '+':
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '*':
        return operand1 * operand2;
    case '/':
        return operand1 / operand2;
    }
    return 0;
}

int evaluatePostfix(string postfix)
{
    Stack<int> intStack; // stack to store operands
    for (char ch : postfix)
    {
        if (isdigit(ch))
        {
            intStack.push(ch - '0'); // convert char to int
        }
        else if (isOperator(ch))
        {
            if (intStack.isEmpty()) // not enough operands
            {
                cout << "Invalid postfix expression" << endl;
                return -1;
            }
            int operand2 = intStack.pop(); // second operand
            if (intStack.isEmpty()) // not enough operands
            {
                cout << "Invalid postfix expression" << endl;
                return -1;
            }
            int operand1 = intStack.pop(); // first operand
            int result = performOperation(operand1, operand2, ch);
            intStack.push(result);
        }
        else
        {
            cout << "Invalid character in postfix expression" << endl;
            return -1;
        }
    }
    if (intStack.isEmpty()) // no result
    {
        cout << "Invalid postfix expression" << endl;
        return -1;
    }
    return intStack.pop();
}

int main()
{
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(3);
    intStack.push(10);
    cout << "Minimum number in stack: " << findMin(intStack) << endl;
    cout << "Top element popped: " << intStack.pop() << endl;
    cout << "Current stack: " << intStack.peek() << endl;
    cout << "Minimum number in stack: " << findMin(intStack) << endl;

    intStack.push(8);
    intStack.push(2);
    intStack.push(16);
    sortStack(intStack);
    cout << "Sorted stack: ";
    while (!intStack.isEmpty())
    {
        cout << intStack.pop() << " ";
    }
    cout << endl;

    string str = "hello";
    string reversedStr = reverseString(str);
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reversedStr << endl;

    string parenStr = "(()))";
    if (isBalanced(parenStr))
    {
        cout << parenStr << " is balanced" << endl;
    }
    else
    {
        cout << parenStr << " is not balanced" << endl;
    }

    string postfix = "53+82-*";
    cout << "Postfix expression: " << postfix << endl;
    cout << "Result: " << evaluatePostfix(postfix) << endl;

    return 0;
}
