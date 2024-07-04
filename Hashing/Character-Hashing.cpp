#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcbbcdscjsnjkds";
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " --> " << hash[s[i]] << endl;
    }
    return 0;
}