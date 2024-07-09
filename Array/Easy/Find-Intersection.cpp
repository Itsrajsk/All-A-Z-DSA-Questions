#include <bits/stdc++.h>
using namespace std;

// Function to find the intersection of two sorted arrays
vector<int> findIntersection(int A[], int B[], int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    // Sample input arrays
    int A[] = {1, 2, 4, 5, 6};
    int B[] = {2, 3, 5, 7};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    // Finding intersection
    vector<int> intersection = findIntersection(A, B, n, m);

    // Printing the intersection
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < intersection.size(); i++)
    {
        cout << intersection[i] << " ";
    }
    cout << endl;

    return 0;
}
