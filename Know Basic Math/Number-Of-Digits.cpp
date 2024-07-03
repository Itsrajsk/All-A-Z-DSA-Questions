#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    return (int)(log10(n) + 1);
}

int main()
{
    cout << count(123);
    return 0;
}
