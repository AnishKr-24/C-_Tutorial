
#include<iostream>
using namespace std;
void bubbleshort(int arr[], int num) 
{
    for (int i = 0; i < num; i++) 
    {
        for (int j = 0; j < num - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "After Sorting= ";
    for (int i = 0; i < num; i++) 
    {
        cout << arr[i] << " ";
    }
}
int main() 
{
    int num;
    cout << "Enter the array of range= ";
    cin >> num;
    int arr[num]; 
    cout << "Enter the array elements= ";
    for (int i = 0; i < num; i++) 
    {
        cin >> arr[i];
    }

    bubbleshort(arr, num);
    return 0;
}

