

#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;  //s means start and e means end.
    int ans = -1;
    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (key > arr[mid]) {  // Right mai jaou
            s = mid + 1;
        } else if (key < arr[mid]) {  // left mai jaou
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastocc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;  //s means start and e means end.
    int ans = -1;
    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (key > arr[mid]) {  // Right mai jaou
            s = mid + 1;
        } else if (key < arr[mid]) {  // left mai jaou
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int even[9] = {2, 3, 4, 6, 5, 8, 2, 3, 6};
    cout << "FIRST OCCURRENCE OF 2 IS AT INDEX = " <<firstocc(even, 9, 2) << endl;
    cout << "LAST OCCURRENCE OF 2 IS AT INDEX = " << lastocc(even, 9, 2) << endl;
    return 0;
}
