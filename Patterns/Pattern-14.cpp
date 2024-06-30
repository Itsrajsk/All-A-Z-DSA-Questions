#include <iostream>
using namespace std;
void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= i; j++)
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
    pattern14(n);
    cout << endl;
    return 0;
}