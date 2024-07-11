#include <bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int N)
{
    int xor1 = 0, xor2 = 0;
    int n = N - 1;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}
int main()
{
    cout << endl;
    int arr[] = {1, 2, 4, 5, 6};              // Example array
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // Since one number is missing

    cout << "The missing number is " << missingNumber(arr, n) << endl;
    cout << endl;
    return 0;
}