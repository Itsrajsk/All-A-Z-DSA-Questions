#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if (i < 1)
        return;
    cout << i << " ";
    print(i - 1, n);
}
int main()
{
    int n = 5;
    print(n, 5);
    return 0;
}