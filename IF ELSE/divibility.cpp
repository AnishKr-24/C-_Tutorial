


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number=";
    cin >> n;
    if ((n % 3 == 0 || n % 5 == 0) && (n % 15 != 0))
    {
        cout << "Divisible by both 3 and 5";
    }
    else
    {
        cout << "not divisible by 15 ";
    }
    return 0;
}
