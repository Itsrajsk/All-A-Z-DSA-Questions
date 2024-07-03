#include <bits/stdc++.h>
using namespace std;
void printDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if ((n / i) != i)
            {
                cout << n / i << " ";
            }
        }
    }
}
int main()
{
    int n = 36;
    printDivisors(n);
    return 0;
}