// Linked List in CPP

#include <iostream>
#include <string>

using namespace std;

//structure to store data and pointer of next variable 
struct Node
{
    int data;
    Node* next;
};

class List
{
    private:
    Node* head;

    public:
    List(){
        head = nullptr;
    }
    void insertAtBeginning(int value)
    {
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = head;
        head = newNode;
    }
    void insertAtEnd(int value)
    {
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = nullptr;

        if(head == nullptr)
        {
            head == newNode;
            return;
        }

        Node* temp = head;
        while(temp -> next != nullptr)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }

    void display()
    {
        Node* temp = head;
        while(temp != nullptr)
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "nullptr" << endl;
    }

    void deleteByValue(int value)
    {
        if(head == nullptr) return;

        if(head -> data == value)
        {
            Node* temp = head;
            head = head -> next;
            delete temp;
            return;
        }

        Node* temp = head;
        while(temp -> next != nullptr && temp -> next -> data != value)
        {
            temp = temp -> next;
        }

        if(temp -> next == nullptr) return;
        Node* nodetoDelete = temp -> next;
        temp -> next = temp -> next -> next;
        delete nodetoDelete;
    }

    ~List() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    List list;
    
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    
    cout << "Linked List: ";
    list.display();
    
    list.deleteByValue(20);
    cout << "After deleting 20: ";
    list.display();
    
    list.deleteByValue(40);
    cout << "After deleting 40: ";
    list.display();
    
    return 0;
}