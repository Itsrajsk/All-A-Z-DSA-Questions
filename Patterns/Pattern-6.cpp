#include <iostream>
using namespace std;
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
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
    pattern6(n);
    cout << endl;
    return 0;
}