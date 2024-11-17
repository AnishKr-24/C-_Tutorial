
#include<iostream>
using namespace std;

/* You are tasked with implementing a single number guessing game in c++
 involving a Gusser, three Players, and an Umpire. The game operates as 
follows:

Guesser: This entity will guess a number.
Players: Each of the three players will guess a number,
3 players p1-2 p2-4 p3-2.

Umpire: This entity will collect the guesses from the Guesser
and the Players and determine which players. it any,have guessed the 
same number as the Gusser.

p1->2  p2->2  p3->2  x->2

Umpire
p1 -> 2 2 -> win the game
p2 -> 2 2 -> win the game
p3 -> 2 2 -> win the game

All the players won the game !!

Classes --> guesser
            Umpire
            Player

main functions --> 
                2. get the number from Gusser
                3. get the number from all three Players.

*/

class Gusser{
    int guessednum;

    public:
    int takeguesserinput(){
        int x;
        cout<<"Give the number for the guesser"<<endl;
        cin>>x;
        guessednum = x;
        return guessednum;
    }
};

class Player{
    int playernum;
    public:
    int takeplayerinput(){
        int p;
        cin>>p;
        playernum=p;
        return playernum;
    }
};

class Umpire{
    public:
    int g;
    int p1num;
    int p2num;
    int p3num;

   
    void GetTheNumberFromGuesser(){
        Gusser g1;
        g = g1.takeguesserinput();
    }
    void GetTheNumberFromPlayer(){
        Player p1;
        Player p2;
        Player p3;
        cout<<"Give the number for Player 1 :"<<endl;
        p1num=p1.takeplayerinput();
        cout<<"Give the number for Player 2 :"<<endl;
        p2num=p2.takeplayerinput();
        cout<<"Give the number for Player 3 :"<<endl;
        p3num=p3.takeplayerinput();


    }
    void printTheResult(){
        //  g p1num p2num p3num
        if(g==p1num){
            // p1 has won
            // p2 ? p3
            if(g==p2num){
                // p1 has won p2 has won
                // p3 ?
                if(g==p3num){
                    cout<<"All Player has won the Game "<<endl;
                }
                else{
                    // p1 has won p2 won p3 has lost.
                    cout<<"The Player 1 and 2 has won the game "<<endl;
                }
            }
            else{
                // p1 has won p2 has lost the game
                if(g==p3num){
                    cout<<"The Player 1 and 3 has won the Game "<<endl;
                }
                else{
                    // p1 has won p2 won p3 has lost.
                    cout<<"The Player 2 has won the game "<<endl;
                }
            }
        }
        else if(g==p2num){
            // p1 has lost p2 has won --> already know
            // test for p3 -->test
            if(p3num==g){
                // p1 has lost p2 has won p3 has also won-->already know
                cout<<"The Player 2 and 3 has won"<<endl;
            }
            else{
                // p1 has lost p2 has won p3 has lost-->already know
                cout<<"The Player 2 has won the game "<<endl;
            }
        }
        else if(g==p3num){
            // p1 has not won p2 has won and p3 has won --> already know
            cout<<"The Player 3 has won te Game "<<endl;
        }
        else{
            // p1 lost, p2 has lost p3 has lost-> already know
            cout<<"All the Player has lost the Game "<<endl;
        }
    }
};



int main(){
    cout<<"------Let`s start the Game--------"<<endl;
    
    //Create a Umpire object

    Umpire u;
    u.GetTheNumberFromGuesser();
    u.GetTheNumberFromPlayer();
    u.printTheResult();
    cout<<"------End the Game--------"<<endl;
 
    return 0;
}