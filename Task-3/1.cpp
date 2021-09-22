#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "P=" << 2 * (a + b) << "  S=" << a * b << endl;
    for (int i = 1; i <= a; i++)
    {


        for (int j = 1; j <= b; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}

