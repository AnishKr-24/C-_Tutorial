
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int arr[n]; // Note: Variable Length Arrays (VLAs) are not part of the C++ standard, but are supported by some compilers like GCC.
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n); // Sort the array
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the array
    }
    cout <<endl; // Newline for clean output
    
    return 0;
}