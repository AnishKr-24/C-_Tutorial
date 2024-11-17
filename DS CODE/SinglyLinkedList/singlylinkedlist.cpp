

#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *start=0;
struct node *createNode()
{
    struct node*h1;
    h1=(struct node *)malloc(sizeof(struct node));
    cout<<"Enter the data=";
    cin>>h1->data;
    h1->next=0;
    return h1;
}
void insertStart()
{
    struct node *k1;
    k1 = createNode();
    if (start==0)
    {
        start = k1;
    }
    else
    {
        k1 ->next=start;
        start=k1;
    }
}
void insertEnd()
{
    struct node*j1,*g1;
    j1 = createNode();
    if (start==0)
    {
        start = j1;
    }
    else
    {
        g1=start;
        while (g1->next!=0)
        {
            g1=g1->next;
        }
        g1->next=j1; 

    }
}
void insertMiddle()
{
    struct node *h1 , *f ,*j;
    h1 = createNode();
    if (start == 0)
    {
        start = h1;
    }
    else
    {
        int d;
        cout<<"Enter a data where you want to insert:=";
        cin>>d;
        f=start;
        while (f->next->data!=d)
        {
            f=f->next;
        }
        j = f->next;
        f->next=h1;
        h1->next=j;
    }
}
void deleteStart()
{
    struct node *y1;
    if (start == 0)
    {
        cout<<"There is no any node to delete";
    }
    else
    {
        y1=start;
        start=start->next;
        y1->next=0;
        free(y1);
    }
}
void deleteEnd()
{
   struct node *h1,*a1;
   if (start==0)
   {
        cout<<"There is no any node to delete:";
   }
   else
   {
        h1=start;
        while (h1->next->next!=0)
        {
            h1 = h1->next;
        }
        a1=h1->next;
        h1->next=0;
        free(a1);
   }
    
}
void deleteMidddle()
{
    struct node *g , *h , *p;
    if (start==0)
    {
        cout<<"There is no any node to delete";
    }
    else
    {
        int d;
        g = start;
        cout<<"Enter a data that you want to data";
        cin>>d;
        while (g->next->data!=d)
        {
            g = g->next;
        }
        p=g->next->next;
        g->next->next=0;
        h=g->next;
        g->next=p;
        free(h);
    }
}
void display()
{
    struct node *j1;
    j1 = start;
    while (j1!=0)
    {
        cout<<j1->data<<"\t";
        j1=j1->next;
    }  
}

int main()
{
    int ch;
    cout<<"1.Insertion from start"<<endl;
    cout<<"2.Insertion from end"<<endl;
    cout<<"3.Insertion from middle"<<endl;
    cout<<"4.Deletion from start"<<endl;
    cout<<"5.Deletion from end"<<endl;
    cout<<"6.Deletion from middle"<<endl;
    cout<<"7.Display"<<endl;
    cout<<"8.Exit"<<endl;
    while (1)
    {
        cout<<"\nEnter your choice:"<<endl;
        cin>>ch;
        switch (ch)
        {
            case 1:
            {
             insertStart();
                break;
            }
            case 2:
            {
                insertEnd();
                break;
            }
            case 3:
            {
                insertMiddle();
                break;
            }
            case 4:
            {
                deleteStart();
                break;
            }
            case 5:
            {
                deleteEnd();
                break;
            }
            case 6:
            {
                deleteMidddle();
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
            {
                cout<<"Invalid"<<endl;
                break;
            }
        
        }
    }
    return 0;
}