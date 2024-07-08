#include <bits/stdc++.h>
using namespace std;
void printSecondLargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    cout << "\nSecond Largest : " << slargest << endl;
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

    printSecondLargest(arr, n);
    cout << endl;
    return 0;
}