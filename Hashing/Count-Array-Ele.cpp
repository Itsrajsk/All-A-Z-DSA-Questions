#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hash[n] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    cout << "Count Of Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " --> " << hash[i] << endl;
        ;
    }
    return 0;
}