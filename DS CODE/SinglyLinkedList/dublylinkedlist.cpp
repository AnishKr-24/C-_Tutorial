
// Doubly Linked List

#include<iostream>
using namespace std;
struct node
{
    struct node * prev;
    char data[10];   // int data;
    struct node *next;
};
struct node *start = 0;  //golobal declearation.
struct node *createnode()
{
    struct node*m1;
    m1 = (struct node *)malloc(sizeof(struct node));
    cout<<"Enter the data : ";
    cin>>m1->data;
    m1 ->next=0;
    m1->prev=0;
    return m1;
}
void inserstart()
{
    struct node*A1;
    A1 = createnode();
    if (start==0)
    {
        start = A1;
    }
    else
    {
        A1->next=start;
        start->prev=A1;
        start=A1;
    }
}
void insertend()
{
    struct node*x1;
    x1=createnode();
    if (start==0)
    {
        start=x1;
    }
    
}
void insertmiddle()
{

}
void deletestart()
{
    struct node*h1;
    if (start==0)
    {
        cout<<"There is no any node to delete : ";
    }
    else
    {
        h1 = start;
        start=start->next;
        start->prev=0;
        h1->next=0;
        free(h1);
    }
}
void deleteend()
{
    struct node *ptr2 , *ptr3;
    if (start==0)
    {
        cout<<"There is no any node to delete";
    }
    else{
        if (start->next==0)
        {
            free(start);
            start=0;
        }
        else
        {
            ptr2=start;
            while (ptr2->next->next!=0)
            {
                ptr2=ptr2->next;
            }
            ptr3=ptr2->next;
            ptr3->prev=0;
            ptr2->next=0;
            free(ptr3);
        }
    }
    
}
void deletemiddle()
{
    
}
void display()
{
    struct node *L1;
    L1=start;
    if (start==0)
    {
        cout<<"Ther is no any node to display";
    }
    else
    {
        while (L1!=0)
        {
            cout<<L1->data<<"\t";
            L1=L1->next;
        }
        /*while (L1->prev!=0)
        {
            cout<<L1->data<<"\t";
            L1=L1->prev;
        }*/
        
    }
}
int main()
{
    int ch;
    cout<<"1.Insert Start"<<endl;
    cout<<"2.Insert End"<<endl;
    cout<<"3.Insert Middle"<<endl;
    cout<<"4.Delete Start"<<endl;
    cout<<"5.Delete End"<<endl;
    cout<<"6.Delete Middle"<<endl;
    cout<<"7.Display"<<endl;
    cout<<"8.Exit"<<endl;
    while (1)
    {
        cout<<"\nEnter Your Choice"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
                inserstart();
                break;
            }
            case 2:
            {
                insertend();
                break;
            }
            case 3:
            {
                insertmiddle();
                break;
            }
            case 4:
            {
                deletestart();
                break;
            }
            case 5:
            {
                deleteend();
                break;
            }
            case 6:
            {
                deletemiddle();
                break;
            }
            case 7:
            {
                display();
                break;
            }
            case 8:
            {
                exit(0);
                break;
            }
        default:
            cout<<"Invalid Input"<<endl;
            break;
        }
    }
    return 0;
}