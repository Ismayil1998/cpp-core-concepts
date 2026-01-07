#include "LinkedList.h"

#include <iostream>

using namespace std;

class Queue {
private:
    LinkedList list;

public:
    void enqueue(int value) {
        list.append(value);
    }

    int dequeue() {
        Node* frontNode = list.getHead();
        if (frontNode == nullptr) {
            cout << "Queue empty!" << endl;
            return -1;
        }
        int value = frontNode->data;
        list.remove(value);
        return value;
    }

    int peek() {
        Node* frontNode = list.getHead();
        if (frontNode == nullptr) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return frontNode->data;
    }

    bool isEmpty() {
        return list.getHead() == nullptr;
    }

    int size() {
        int count = 0;
        Node* temp = list.getHead();
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};



int main() {
     system("cls");

    Queue queue;
    
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Size: " << queue.size() << endl;  
    cout << "Front: " << queue.peek() << endl;  
    cout << "Dequeued: " << queue.dequeue() << endl; 
    cout << "Is Empty? " << queue.isEmpty() << endl;  
    cout << "Front: " << queue.peek() << endl;  
    cout << "Dequeued: " << queue.dequeue() << endl;  
    cout << "Is Empty? " << queue.isEmpty() << endl;  
    cout << "Front: " << queue.peek() << endl;  
    cout << "Dequeued: " << queue.dequeue() << endl;  
    cout << "Is Empty? " << queue.isEmpty() << endl;  

    return 0;
}