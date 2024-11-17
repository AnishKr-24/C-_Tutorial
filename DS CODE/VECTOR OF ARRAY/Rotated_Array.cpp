

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& num, int low, int high) {
    while (low < high) {
        swap(num[low], num[high]);
        low++;
        high--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k is greater than n
    if (k == 0) return; // No need to rotate if k is 0

    reverse(nums, 0, n - k - 1);
    reverse(nums, n - k, n - 1);
    reverse(nums, 0, n - 1);
}

int main() {
    int x, k;
    cout << "Enter the number of elements: ";
    cin >> x;
    
    vector<int> nums(x);
    
    cout << "Enter the elements: ";
    for (int i = 0; i < x; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the number of rotations: ";
    cin >> k;

    rotate(nums, k);
    
    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
