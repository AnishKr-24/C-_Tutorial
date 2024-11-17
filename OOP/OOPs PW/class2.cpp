#include<iostream>
using namespace std;
class player{
    public:
    int score;  // data memeber/Instance member Varible.
    int health;// data memeber/Instance member Varible.
    void showhealth(){ // member function. / Instance member function
        cout<<"Anish Health is "<<health;
    }
    void showScore(){// member function./ Instance member function
        cout<<"Amit Score is "<<score;
    }
};
int main()
{
    player anish;
    anish.score=90;
    anish.health=100;
    anish.showhealth();
    cout<<endl;
    player amit;
    amit.score=200;
    amit.showScore();
    return 0;
}