

#include <iostream>
using namespace std;
class Node
{ // Doubly LinkedList Node.
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    { // Constructor
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList
{ // User define Ds.
public:
    Node *head ;
    Node *End ;
    int size = 0;
    DoublyLinkedList()
    {
        head = End = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0) head = End = temp;
        else
        {
            End->next = temp;
            temp->prev = End;
            End = temp;
        }
        size++;
    }
    void insertStart(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)  head = End = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtIndex(int idx, int val)
    { // InsertAtMiddle bhi bol skte hai.
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            insertStart(val);
        else if (idx == size)
            insertAtEnd(val);
        else
        {
            Node* t = new Node(val);
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;//Extra
            t->next->prev = t;//Extra
            size++;
        }
    }
    void deleteAthead()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtEnd()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        Node *temp = head;
        while (temp->next != End)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        End = temp;
        size--;
    }
    void deleteAtIndex(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index";
            return;
        }
        if (idx == 0)
        {
            deleteAthead();
            return;
        }
        if (idx == size - 1)
        {
            deleteAtEnd();
            return;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    DoublyLinkedList list ;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.display();
    list.insertAtEnd(50);
    list.display();
    list.insertStart(100);
    list.display();
    list.insertAtIndex(3,60);
    list.display();
}