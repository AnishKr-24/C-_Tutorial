

#include<iostream>
using namespace std;
int main()
{
    int Length = 5;
    int Breadth = 4;
    int Height = 3;
    int sellingcost =7.50 ;
    int celing = Length * Breadth * 7.50;
    int perimeter = (Length * Breadth * Height * 4 * 7.50) + (celing);
    cout<<"Washing the wall of the room and ceiling="<<perimeter;
    return 0;
}