#include <iostream>
using namespace std;
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char a = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
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