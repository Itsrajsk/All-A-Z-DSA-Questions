#include <iostream>
using namespace std;

void pattern19(int n)
{
    int iniS = 0;
    for (int i = n; i >= 1; i--)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Center spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        iniS += 2;
    }
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Center spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }
}

int main()
{
    int n;
    cout << "\nEnter Size Of Pattern : " << endl;
    cin >> n;
    cout << endl;
    pattern19(n);
    cout << endl;
    return 0;
}
