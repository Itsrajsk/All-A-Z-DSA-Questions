#include <bits/stdc++.h>
using namespace std;

int largestSubarraySum(int arr[], int n, int k)
{
    int left = 0, right = 0;
    int sum = arr[0];
    int maxLen = 0;

    while (right < n)
    {
        // Shrink the window until the sum is less than or equal to k
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }

        // Check if the current sum equals k
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move the right pointer to the next element
        right++;

        // Add the next element to the sum
        if (right < n)
        {
            sum += arr[right];
        }
    }

    return maxLen;
}

int main()
{
    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;

    cout << "The length of the largest subarray with sum " << k << " is: " << largestSubarraySum(arr, n, k) << endl;

    return 0;
}
