

#include<iostream>
using namespace std;
class Node{  //LinkedList Node.
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
        
}
int size(Node* head) {
    Node* temp = head;
    int n = 0;
    while (temp != NULL) {
        n++;
        temp = temp->next;
    }
    return n;
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    display(a);
    size(a);


    //cout<<a->val<<" ";
    //cout<<a->next->next->next->val<<endl;;  //---40


    // Node* temp=a;
    // while (temp!=NULL)
    // {
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }




    // 10 20 30 40.
    // Node a(10);
    // Node b(20);
    // Node c(30);
    // Node d(40);
    //forming linkedlist
    // a.next=&b;
    // b.next=&c;
    // c.next=&d;
    // d.next=NULL;
    //cout<<(*(a.next)).val;  // ey dono same kam krta hai.
    //cout<<(a.next)->val;    // ey dono same kam krta hai.
    // cout<<a.val<<endl;  iska value 10
    // cout<<(a.next)->val<<endl;  iska value 20
    // cout<<((a.next)->next)->val<<endl;  iska value 30
    // cout<<(((a.next)->next)->next)->val;  iska value 40
    // Node temp=a;
    // while (1)
    // {
    //     cout<<temp.val<<" ";
    //     if (temp.next==NULL) break;
    //     temp=*(temp.next);
    // }
    
}