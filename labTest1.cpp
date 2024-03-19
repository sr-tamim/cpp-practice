#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node()
    {
        next = NULL;
    }
};

class LinkedList
{
public:
    Node* head = NULL;

    void insertAtLast(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node* tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }

    int getDataAtIndex(int indx)
    {
        if (indx == 0)
            return head->data;
        Node* tmp = head;
        int i = 0;
        while (tmp->next != NULL)
        {
            if (indx == ++i)
                return tmp->next->data;
            tmp = tmp->next;
        }
    }

    int getLength()
    {
        Node* tmp = head;
        int i = 0;
        while (tmp != NULL)
        {
            i++;
            tmp = tmp->next;
        }
        return i;
    }

    ~LinkedList()
    {
        Node* tmp = head;
        while (tmp->next != NULL)
        {
            Node* node = tmp;
            tmp = tmp->next;
            delete node;
        }
    }
};

int main()
{
    LinkedList list1;
    list1.insertAtLast(5);
    list1.insertAtLast(7);
    list1.insertAtLast(9);
    list1.insertAtLast(11);
    list1.insertAtLast(13);

    int total = 0;
    for (int i = 0; i < list1.getLength(); i++)
    {
        int data = list1.getDataAtIndex(i);
        total += data * data;
    }
    cout << total << endl;
}
