#include <iostream>
using namespace std;
void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << a++ << " ";
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
    pattern15(n);
    cout << endl;
    return 0;
}