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
   
    LinkedList() {
        head = nullptr;
    }

    
    LinkedList& insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        return *this;
    }

    
    LinkedList& display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return *this;
    }

   
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value)
                return true;
            temp = temp->next;
        }
        return false;
    }

    LinkedList& remove(int value){
        Node *temp=head;
        Node* prev=nullptr;
        while (temp!=nullptr)
        {
            if (temp->data==value)
            {
               if (prev==nullptr){
               head=temp->next;
               }else
               {
                prev->next=temp->next;
               } 
              delete temp;
              break;
            }
           
            prev=temp;
            temp=temp->next;  
        }
        return *this; 
    }

    LinkedList &append(int value){
        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=nullptr;

        if (head==nullptr)
        {
            head=newNode;
        }else
        {
            Node* temp=head;
            while (temp->next!=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newNode; 
        }
        return *this; 
    }
      ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }

};



int main() {
      system("cls");
    LinkedList list = LinkedList();

    list.append(1).append(2).append(3).append(4);
    
    list.display();

    list.insert(5).display();

    bool isFound = list.search(4);

    cout << std::boolalpha << endl;
    cout << isFound;
    cout << endl << endl;

    list.remove(3).display().remove(4).display().remove(5).display();

    cout << endl;

    return 0;
}