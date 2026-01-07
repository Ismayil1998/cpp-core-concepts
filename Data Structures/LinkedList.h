#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();

    LinkedList& insert(int value);

    LinkedList& display();

    bool search(int value);

    LinkedList& remove(int value);

    LinkedList& append(int value);

    Node* getHead() const;

    ~LinkedList();
};

LinkedList::LinkedList() {
        head = nullptr;
}

 LinkedList& LinkedList::insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        return *this;
    }

    LinkedList& LinkedList:: display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout <<temp->data << "--> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return *this;
    }

     bool LinkedList:: search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value)
                return true;
            temp = temp->next;
        }
        return false;
    }

     LinkedList& LinkedList:: remove(int value) {
        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr) {
            if (temp->data == value) {
                if (prev == nullptr) {
                    head = temp->next;
                } else {
                    prev->next = temp->next;
                }
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return *this;
    }

    LinkedList& LinkedList:: append(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        return *this;
    }

    Node* LinkedList:: getHead() const {
        return head;
    }


      LinkedList::~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    #endif

   

















    
