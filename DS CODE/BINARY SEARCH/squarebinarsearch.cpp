


#include<iostream>
using namespace std;
long long int squarroot(int num)
{
    int s = 0;
    int e = num;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        if (square < num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number=";
    cin >> num;
    long long int tempRoot = squarroot(num);
    cout << "Square Root is=" << tempRoot;
    return 0;
}

