/*
doubly linked list implementation in c++
*/

#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

// Linked list class
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }

    // Insert a new node at the beginning of the list
    void insertAtBeginning(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    }

    // Insert a new node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    // Insert a new node at a given position in the list
    void insertAtPosition(int data, int position) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (position == 1) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 1; i < position - 1; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != NULL) {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
        }
    }

    // Delete a node from the beginning of the list
    void deleteFromBeginning() {
        if (head == NULL) {
            cout << "List is empty" << endl;
        } else {
            Node* temp = head;
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete temp;
        }
    }

    // Delete a node from the end of the list
    void deleteFromEnd() {
        if (head == NULL) {
            cout << "List is empty" << endl;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            if (temp == head) {
                head = NULL;
            } else {
                temp->prev->next = NULL;
            }
            delete temp;
        }
    }

    // Delete a node from a given position in the list
    void deleteFromPosition(int position) {
        if (head == NULL) {
            cout << "List is empty" << endl;
        } else {
            Node* temp = head;
            for (int i = 1; i < position; i++) {
                temp = temp->next;
            }
            if (temp == head) {
                head = head->next;
                if (head != NULL) {
                    head->prev = NULL;
                }
            } else {
                temp->prev->next = temp->next;
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
            }
            delete temp;
        }
    }

    // Display the list
    void display() {
        if (head == NULL) {
            cout << "List is empty" << endl;
        } else {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    LinkedList list;
    cout << "Inserting 1, 2, 3, 4 at the end of the list" << endl;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.display();

    cout << "Inserting 0 at the beginning of the list" << endl;
    list.insertAtBeginning(0);
    list.display();

    cout << "Inserting 5 at position 5 in the list" << endl;
    list.insertAtPosition(5, 5);
    list.display();

    cout << "Deleting from the beginning" << endl;
    list.deleteFromBeginning();
    list.display();

    cout << "Deleting from the end" << endl;
    list.deleteFromEnd();
    list.display();

    cout << "Deleting from position 2" << endl;
    list.deleteFromPosition(2);
    list.display();
    return 0;
}
