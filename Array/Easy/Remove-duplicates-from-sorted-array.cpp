#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int *arr, int n)
{
    if (n == 0)
        return; // Handle case where array is empty

    int i = 0; // To keep track of the unique elements' index
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "\nArray Elements After Removing Duplicates: " << endl;
    for (int k = 0; k <= i; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main()
{
    cout << endl;
    int arr[] = {1, 2, 2, 3, 4, 5, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array Elements Before Removing Duplicates: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    removeDuplicates(arr, n);

    cout << endl;
    return 0;
}
