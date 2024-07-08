#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
        }
        else
        {
            cout << "\nArray Is Not Sorted" << endl;
            return false;
        }
    }
    cout << "\nArray Is Sorted" << endl;
    return true;
}
int main()
{
    cout << endl;
    int arr[] = {3, 4, 5, 1, 2};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    isSorted(arr, n);
    cout << endl;
    return 0;
}