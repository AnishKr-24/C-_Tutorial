

#include <iostream>
using namespace std;
int mazepath(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er || sc == ec)
        return 1;
    int Rightways = mazepath(sr, sc + 1, er, ec);
    int Downways = mazepath(sr + 1, sc, er, ec);
    return mazepath(sr, sc + 1, er, ec) + mazepath(sr + 1, sc, er, ec);
}
void printpath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    { // Destination ke liye.
        cout << s << endl;
        return;
    }
    printpath(sr, sc + 1, er, ec, s + 'R');
    printpath(sr + 1, sc, er, ec, s + 'D');
}
int main()
{
    int n, m;
    cout << "Enter the Row :";
    cin >> n;
    cout << "Enter the Col :";
    cin >> m;
    cout<<mazepath(1,1,m,n)<<endl;
    printpath(1, 1, m, n, "");
    
}