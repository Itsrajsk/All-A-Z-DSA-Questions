#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> arr, int n, int target)
{
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << left << " " << right << endl;
            return {left, right};
        }
        else if (sum < target)
        {
            left++;
        }
        else if (sum > target)
        {
            right--;
        }
    }
    cout << -1 << " " << -1 << endl;
    return {-1, -1};
}
int main()
{
    cout << endl;
    vector<int> arr = {11, 2, 8, 5, 6};
    sort(arr.begin(), arr.end());
    int target = 14;
    twoSum(arr, arr.size(), target);
    cout << endl;
    return 0;
}