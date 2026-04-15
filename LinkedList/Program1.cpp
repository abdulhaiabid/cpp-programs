#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node *link;
    
    Node(int value) {
        this->value = value;
        this->link = nullptr;
    }
};

class LinkedList {
public:
    LinkedList() {
        head = nullptr;
    }
    Node* createNode(int value, Node *link) {

    }

    void insertAtBeginning(int value) {
        Node *newNode = new Node(value);
        newNode->link = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node *newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        } else {
            Node *temp = head;
            while(temp->link != nullptr) {
                temp = temp->link;
            }
            temp->link = newNode;
        }
    }
    
    void deleteFromBeginning() {
        if (head == nullptr) {
            return;
        }
        Node *temp = head;
        head = head->link;
        delete temp;
    }
    
    void deleteFromEnd() {
        Node *temp = head;
        if(head == nullptr) {
            return;
        } else if (head->link == nullptr) {
            delete head;
            head = nullptr;
            return;
        } else {
            while(temp->link->link != nullptr) {
                temp = temp->link;
            }
            delete temp->link;
            temp->link = nullptr;
        }
    }

    void insertAtPosition(int value, int position) {
        Node *newNode = new Node(value);
        if (head == nullptr) {
            return;
        }
        Node *temp = head;
        for (int i = 0; temp->link != nullptr && i < position; i++) {
            temp = temp->link;
        }
    } // incomplete (don't call)

    void display() {
        if (head == nullptr) {
            return;
        }
        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->value << " -> ";
            temp = temp->link;
        }
        cout << "NULL\n";
    }
private:
    Node *head;
};

int main() {
    LinkedList list;

    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAtEnd(60);

    list.display();
    
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);

    list.display();
    return 0;
}