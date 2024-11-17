

#include <iostream>
using namespace std;

int sum(int a, int b) 
{
    int total = a + b;
    return total;
}

int main() {
    int n;
    cin >> n;
    cout << sum(2, 3) << endl;
    
    return 0;
}
