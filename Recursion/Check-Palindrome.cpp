#include <bits/stdc++.h>
using namespace std;
bool isPal(int i, string s, int n)
{
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return isPal(i + 1, s, n);
}
int main()
{
    string s = "MADAM";
    isPal(0, s, 5) ? cout << "true" : cout << "false";
    return 0;
}