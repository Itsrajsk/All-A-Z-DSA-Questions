#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;

        if (a == 0)
            return b;
        else
            return a;
    }
}
int main()
{
    int a = 52;
    int b = 10;
    cout << gcd(a, b);
    return 0;
}