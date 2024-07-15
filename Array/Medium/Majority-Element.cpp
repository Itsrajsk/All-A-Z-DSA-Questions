#include <bits/stdc++.h>
using namespace std;

// Function to find the majority element in the array
int majorityElement(int arr[], int n)
{
    int cnt = 0;
    int el;

    // Phase 1: Find the candidate for majority element
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    // Phase 2: Verify if the candidate is actually the majority element
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
            cnt1++;
    }

    if (cnt1 > n / 2)
    {
        return el;
    }
    else
    {
        // Return -1 if no majority element found
        return -1;
    }
}

int main()
{
    // Example array
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find and print the majority element
    int result = majorityElement(arr, n);
    if (result != -1)
    {
        cout << "The majority element is: " << result << endl;
    }
    else
    {
        cout << "There is no majority element in the array." << endl;
    }

    return 0;
}
