

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

void display(Node* head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void RevDisplay(Node* tail){
    while (tail)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}
void displayReverse(Node* head){
    if(head==NULL) return;
    displayReverse(head->next);
    cout<<head->val<<" ";
    
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->prev = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    // displayRec(a);
    cout<<endl;
    // displayReverse(a);
    RevDisplay(f);
}