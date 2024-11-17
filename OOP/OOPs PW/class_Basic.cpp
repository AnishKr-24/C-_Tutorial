

#include<iostream>
class player{  // class
    public:
    int score;//data memeber
    int health;
};
using namespace std;
int main()
{
    //Player 1st.
    player anish;  // object1
    anish.score=90;
    anish.health=100;
    cout<<"Score :"<<anish.score<<endl;
    cout<<"Health :"<<anish.health<<endl;
    cout<<"-----------------"<<endl;
    //Player 2nd.
    player Rohit;  // object2
    Rohit.score=100;
    Rohit.health=20;
    cout<<"Score :"<<Rohit.score<<endl;
    cout<<"Health :"<<Rohit.health<<endl;
    return 0;
}