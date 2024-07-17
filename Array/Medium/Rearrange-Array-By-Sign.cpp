#include <bits/stdc++.h>
using namespace std;

// Function to rearrange the array
vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIdx = 0, negIdx = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            ans[posIdx] = nums[i];
            posIdx += 2;
        }
        else
        {
            ans[negIdx] = nums[i];
            negIdx += 2;
        }
    }
    return ans;
}

int main()
{
    // Example usage
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
