#include <bits/stdc++.h>
using namespace std;
void printLargest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "\nLargest : " << largest << endl;
}
int main()
{
    cout << endl;
    int arr[] = {3, 2, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    printLargest(arr, n);
    cout << endl;
    return 0;
}