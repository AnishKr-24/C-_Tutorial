

#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = INT_MAX;  //int min = a[0];
    for (int i = 0; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    int smin = INT_MAX; //int smin = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] != min && a[i] < smin) {
            smin = a[i];
        }
    }
    cout << "Second minimum number: " << smin;
    return 0;
}
