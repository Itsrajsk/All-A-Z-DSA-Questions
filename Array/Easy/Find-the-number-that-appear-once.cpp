#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans ^= nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2}; // Example input
    cout << "The single number is: " << singleNumber(nums) << endl;

    return 0;
}
