#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }
    return revNum;
}
bool isPalindrome(int n)
{
    return n == reverse(n) ? true : false;
}
int main()
{
    int n = 121;
    isPalindrome(n) ? cout << "true" : cout << "false";
    return 0;
}