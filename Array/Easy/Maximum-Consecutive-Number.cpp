#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int cnt = 0, maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1}; // Example input
    cout << "The maximum number of consecutive 1's is: " << findMaxConsecutiveOnes(nums) << endl;

    return 0;
}
