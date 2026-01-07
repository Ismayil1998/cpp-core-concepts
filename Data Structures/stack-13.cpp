#include "LinkedList.h"
#include "LinkedList.h"
#include <iomanip>
#include<iostream>
using namespace  std;

class LinkedListStack {
private:
    LinkedList list;

public:
    LinkedListStack() {}

    LinkedListStack& push(int value) {
        list.insert(value);
        return *this;
    }

    LinkedListStack& pop() {
        if (isEmpty()) {
            cout << "Nothing to pop (^_^)" << endl;
            return *this;
        }
        int topValue = list.getHead()->data;
        list.remove(topValue);
        return *this;
    }

    void peek()  {
        if (isEmpty()) {
            cout << "Nothing to peek (^_^)" << endl;
        } else {
            Node* top = list.getHead();
            cout << "Peek: " << top->data << endl;
        }
    }

    bool isEmpty()  {
        return list.getHead() == nullptr;
    }

    int size()  {
        int count = 0;
        Node* temp = list.getHead();
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void displayStack() {
        cout << "Display Stack: ";
        list.display();
    }

    ~LinkedListStack() {}
};



int main() {
     system("cls");
    
    LinkedListStack stack;

    stack.peek();

    stack.push(1).push(2).push(3).push(4).push(5);

    cout << "Size: " << stack.size() << endl << endl;

    stack.displayStack();
    stack.pop();
    stack.displayStack();

    cout << endl;
    stack.peek();
    cout << endl;

    stack.pop().pop().pop().pop().pop();

    stack.displayStack();
    
    return 0;
}