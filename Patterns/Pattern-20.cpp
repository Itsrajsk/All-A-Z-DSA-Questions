#include <iostream>
using namespace std;
void pattern20(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}
int main()
{
    int n;
    cout << "\nEnter Size Of Pattern : " << endl;
    cin >> n;
    cout << endl;
    pattern20(n);
    cout << endl;
    return 0;
}