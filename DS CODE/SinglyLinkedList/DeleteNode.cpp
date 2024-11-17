
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
Node* deleteNode(Node* head,Node* Target){   // is se head or sabhi target index delete hoga.
    if(head==Target){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while (temp->next!=Target)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void display(Node* head){  // Using Address Method.it is Best method.
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);   
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node* head =a;
    display(head);
    head=deleteNode(head,b);
    display(head);
}