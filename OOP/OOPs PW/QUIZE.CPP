#include<iostream>
using namespace std;
class Book{  // class
public:
    char name;
    int page;  // data member
    int price;
    int countbooks(int prices){  // member function
        if(price<prices)
            return 1;
        else
            return 0;
        
    }
    bool isbookPresent(char Book){  // member function
        if(name==Book)
            return true;
        else
            return false;
    }
};
int main()
{
    Book geeta;  // Object
    geeta.name='G';
    geeta.price=300;
    geeta.page=1000;
    cout<<geeta.countbooks(100)<<endl;
    cout<<geeta.countbooks(1080)<<endl;
    cout<<geeta.isbookPresent('G')<<endl;
    cout<<geeta.isbookPresent('H')<<endl;
}