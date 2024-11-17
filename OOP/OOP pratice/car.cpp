

#include<iostream>
using namespace std;
class car{
    public:
    int Tyre;
    int String;
    int Break;
    int Seat;
    void setTyre(){
        cout<<"Tyre fit Successfully"<<endl;
    }
    void setString(){
        cout<<"String fit successfully"<<endl;
        cout<<"String is a circullar "<<endl;
    }
    void setBreak(){
        cout<<"Break fit successfully"<<endl;
    }
    void fitseat(){
        cout<<"seat fit successfully"<<endl;
    }

};
int main(){
    car c1,c2;
    c1.Tyre=4;
    c2.Tyre=5;
    c1.String=6;
    c2.String=7;
    c1.Break=9;
    c2.Break=1;
    c1.Seat=12;
    c2.Seat=10;
    c1.setTyre();
    c2.setTyre();
    c1.setBreak();
    c2.setBreak();
    c1.setString();
    c2.setString();
    c1.fitseat();
    c2.fitseat();
    return 0;
}