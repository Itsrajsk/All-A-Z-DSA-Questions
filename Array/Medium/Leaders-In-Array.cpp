#include <bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(vector<int> arr, int n)
{
    int maxi = INT_MIN;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(arr[i], maxi);
    }
    reverse(ans.begin(), ans.end()); // To maintain the order of leaders as in the original array
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> leaders = leadersInArray(arr, n);

    cout << "Leaders in the array are: ";
    for (int leader : leaders)
    {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}
