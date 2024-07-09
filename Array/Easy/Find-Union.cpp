#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.empty() || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.empty() || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (unionArr.empty() || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (unionArr.empty() || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    return unionArr;
}

int main()
{
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    vector<int> unionArr = findUnion(arr1, arr2, n, m);

    cout << "Union of the two arrays is: ";
    for (int num : unionArr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
