#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
int main()
{
    cout << endl;
    int n;
    cout << "Enter Size Of Array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elements Of Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    selectionSort(arr, n);
    cout << "\nAfter Sorting Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}