#include <bits/stdc++.h>
using namespace std;
void moveAllZero(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
}
int main()
{
    cout << endl;
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 0, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Elements Before Operation : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    moveAllZero(arr, n);
    cout << "\nArray Elements Before Operation : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}