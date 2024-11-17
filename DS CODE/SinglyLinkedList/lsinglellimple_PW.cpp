
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
void display(Node* head){  // Using Address Method.it is Best method.
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}
void recdisplay(Node* head){
    if(head==NULL) return;
    recdisplay(head->next);
    cout<<head->val<<" ";
}
void displayrecur(Node* head){  // Display recursive Method.
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrecur(head->next);
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
    //cout<<a->next->val;
    //display(a);
    recdisplay(a);
    cout<<endl;
    displayrecur(a);
    cout<<endl;
    cout<<"Size:"<<size(a);
}