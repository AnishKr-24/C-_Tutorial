



#include<iostream>
using namespace std;
long long int rootInt(int num)
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
double moreprecision(int num,int precision,int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int  i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j * j < num ; j = j + factor) 
        {
            ans = j;
        }
        
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number=";
    cin >> num;
    int tempsol = rootInt(num);
    cout<<"Answer is ="<<moreprecision(num , 3 , tempsol)<<endl;
    return 0;
}

