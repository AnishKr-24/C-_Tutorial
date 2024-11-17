
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{ // User define Ds.
public:
    Node *head = NULL;
    Node *End = NULL;
    int size = 0;
    LinkedList()
    {
        head = End = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = End = temp;
        else
        {
            End->next = temp;
            End = temp;
        }
        size++;
    }
    void insertStart(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = End = temp;
        else
        {
            temp->next = head;
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
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 0; i < idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
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
int main()
{

    LinkedList ll;
    ll.insertAtEnd(10);
    // ll.display();
    ll.insertAtEnd(20);
    // ll.display();
    ll.insertAtEnd(30);
    // ll.display();
    ll.insertStart(90);
    ll.insertStart(60);
    ll.display();            // 60 90 10 20 30
    ll.insertAtIndex(2, 80); // Insert Middle bhi bol skte hai.
    ll.display();            // 60 90 80 10 20 30
    ll.insertAtIndex(4, 100);
    ll.display(); // 60 90  80  10  100 20 30
    ll.deleteAthead();
    ll.display(); // 90  80  10  100 20 30
    ll.deleteAtEnd();
    ll.display();        // 90 80 10 100 20
    ll.deleteAtIndex(1); // jisko delete krna hai uska index.
    ll.display();
}