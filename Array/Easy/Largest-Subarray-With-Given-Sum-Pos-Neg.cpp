#include <bits/stdc++.h>
using namespace std;

int largestSubarraySum(int arr[], int n, int k)
{
    unordered_map<int, int> sumIndexMap;
    int currSum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        if (currSum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        if (sumIndexMap.find(currSum) == sumIndexMap.end())
        {
            sumIndexMap[currSum] = i;
        }

        if (sumIndexMap.find(currSum - k) != sumIndexMap.end())
        {
            maxLen = max(maxLen, i - sumIndexMap[currSum - k]);
        }
    }
    return maxLen;
}

int main()
{
    int arr[] = {10, 2, -2, -20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = -10;

    int result = largestSubarraySum(arr, n, k);
    cout << "The length of the largest subarray with sum " << k << " is: " << result << endl;

    return 0;
}
