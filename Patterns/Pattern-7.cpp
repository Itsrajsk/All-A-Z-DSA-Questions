#include <iostream>
using namespace std;
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "\nEnter Size Of Pattern : " << endl;
    cin >> n;
    cout << endl;
    pattern7(n);
    cout << endl;
    return 0;
}