

#include<iostream>
using namespace std;

class Player{
private:
    int health;  // data member.
    int age;
    int score;
    bool alive;
public:
    // Getter methods
    int gethealth(){//member function.
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    // Setter methods
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
};

int addScore(Player a, Player b){
    return a.getscore() + b.getscore();
}
Player getMaxPlayerScore(Player a , Player b){
    if(a.getscore() > b.getscore())
        return a;
    else
        return b;
}
int main()
{
    Player Anish;
    Player Rajnish;

    Anish.setage(20);
    Anish.sethealth(200);
    Anish.setscore(30);
    Anish.setAlive(true);

    Rajnish.setage(120);
    Rajnish.setscore(130);
    Rajnish.sethealth(30);
    Rajnish.setAlive(true);

    cout << addScore(Anish, Rajnish)<<endl;
    Player Amit = getMaxPlayerScore(Anish , Rajnish);
    cout<<Amit.getscore()<<endl;
    return 0;
}
