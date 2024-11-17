

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    vector<int> x;
    cout << "Enter the array of element : ";
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        x.push_back(m);
    }
    
    int a = 7;  // ey number index mai khojna hai.
    int idx = -1;
    for (int i = x.size() - 1; i >= 0; i--) { // Corrected loop initialization and condition
        if (x[i] == a) {
            idx = i;
            break;
        }
    }
    
    cout <<"Index Occurence : " <<idx << endl; // Moved the output outside the loop
    
    return 0;
}
