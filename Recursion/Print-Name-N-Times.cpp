#include <bits/stdc++.h>
using namespace std;
void print(int i, int n)
{
    if (i > n)
        return;
    cout << "Raj" << endl;
    print(i + 1, n);
}
int main()
{
    int n;
    cout << "Enter Number = " << endl;
    cin >> n;
    print(1, n);
    return 0;
}