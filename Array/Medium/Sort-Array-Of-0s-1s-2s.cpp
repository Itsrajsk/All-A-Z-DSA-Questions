#include <bits/stdc++.h>
using namespace std;

// Function to sort the array
void sortArray(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    // Sample input array
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array before sorting
    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array
    sortArray(arr, n);

    // Print array after sorting
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
