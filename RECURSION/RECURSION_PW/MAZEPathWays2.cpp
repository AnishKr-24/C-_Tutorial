

#include <iostream>
using namespace std;
int mazepath2(int Row, int Col)
{
    if (Row < 1 || Col < 1)
        return 0;
    if (Row == 1 && Col == 1)
        return 1;
    int Rowways = mazepath2(Row, Col - 1);
    int Downways = mazepath2(Row - 1, Col);
    int ans = Rowways + Downways;
    return ans;
}
void printpath(int row, int col, string s)
{
    if (row < 1 || col < 1)
        return;
    if (row == 1 && col == 1)
    {
        cout << s << endl;
        return;
    }
    if (col > 1)
        printpath(row, col - 1, s + 'R'); // Move right
    if (row > 1)
        printpath(row - 1, col, s + 'D'); // Move down
}
int main()
{
    int n, m;
    cout << "Enter the Row :";
    cin >> n;
    cout << "Enter the Col :";
    cin >> m;
    //cout << "No. of Ways : " << mazepath2(m, n)<<endl;
    printpath(n, m, "");
    return 0;
}