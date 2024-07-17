#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum subarray sum using Kadane's Algorithm
int maxSubarray(int arr[], int n)
{
    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    // Example array
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find and print the maximum subarray sum
    int result = maxSubarray(arr, n);
    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
