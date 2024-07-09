#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
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
    cout << endl;
    int num = 5;
    cout << num << " At Index : " << linearSearch(arr, n, num);

    cout << endl;
    return 0;
}