#include <iostream>
using namespace std;
void mergesort(int a[], int m, int b[], int n, int res[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            res[k] = a[i];
            k++;
            i++;
        }
        else
        {
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if (i == m)
    {
        while (j < n)
        {
            res[k++] = b[j++];
        }
    }
    else
    {
        while (i < m)
        {
            res[k++] = a[i++];
        }
    }
}

int main()
{
    int a[] = {2, 5, 8, 9, 13};
    int m = sizeof(a) / sizeof(a[0]);
    int b[] = {14, 23, 34, 56, 65};
    int n = sizeof(b) / sizeof(b[0]);
    int res[m + n];
    mergesort(a, m, b, n, res);
    for (int i = 0; i < m + n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}