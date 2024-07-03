#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if (i > n)
        return;
    print(i + 1, n);
    cout << i << " ";
}
int main()
{
    int n = 5;
    print(1, 5);
    return 0;
}