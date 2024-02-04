/*
linked list implementation in c++
*/

#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
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
        head = newNode;
    }

    // Insert a new node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Insert a new node at a given position in the list
    void insertAtPosition(int data, int position) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (position == 1) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 1; i < position - 1; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Delete the first node from the list
    void deleteFirstNode() {
        if (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Delete the last node from the list
    void deleteLastNode() {
        if (head != NULL) {
            if (head->next == NULL) {
                delete head;
                head = NULL;
            } else {
                Node* temp = head;
                while (temp->next->next != NULL) {
                    temp = temp->next;
                }
                delete temp->next;
                temp->next = NULL;
            }
        }
    }

    // Delete a node at a given position from the list
    void deleteAtPosition(int position) {
        if (head != NULL) {
            if (position == 1) {
                Node* temp = head;
                head = head->next;
                delete temp;
            } else {
                Node* temp = head;
                for (int i = 1; i < position - 1; i++) {
                    temp = temp->next;
                }
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            }
        }
    }

    // Print the list
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function
int main() {
    LinkedList list;
    
    cout << "Inserting 1 to 5 at the beginning of the list" << endl;
    list.insertAtBeginning(5);
    list.insertAtBeginning(4);
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);
    list.print();

    cout << "Inserting 6 to 10 at the end of the list" << endl;
    list.insertAtEnd(6);
    list.insertAtEnd(7);
    list.insertAtEnd(8);
    list.insertAtEnd(9);
    list.insertAtEnd(10);
    list.print();

    cout << "Inserting 11 at position 6" << endl;
    list.insertAtPosition(11, 6);
    list.print();

    cout << "Deleting the first node" << endl;
    list.deleteFirstNode();
    list.print();

    cout << "Deleting the last node" << endl;
    list.deleteLastNode();
    list.print();

    cout << "Deleting the node at position 4" << endl;
    list.deleteAtPosition(4);
    list.print();

    return 0;
}
