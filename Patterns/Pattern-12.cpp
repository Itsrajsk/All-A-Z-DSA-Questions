#include <iostream>
using namespace std;
void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // Space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // Numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
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
    pattern12(n);
    cout << endl;
    return 0;
}