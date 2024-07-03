#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    int sum = 0;
    int originalNum = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n /= 10;
    }
    return sum == originalNum;
}

int main()
{
    int n = 153;
    isArmstrong(n) ? cout << "true" : cout << "false";
    return 0;
}
