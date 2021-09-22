#include <iostream>
using namespace std;
int main()
{
    int n,x,c,v,i,a,r;
    cout << "Enter n:";
    cin >> n;
    i = 0;
    x = 0;
    c = 1;
    switch (n)
    {
    
    case 1: cout<< "fibonachi:" << x << " ";
       break;
    case 2: cout << "fibonachi:" << x << " " << c;
    
        break;
    default:
        cout << "fibonachi:" << x << " " << c << " ";
        for (int i = 1; i <= n; i++)
        {
            v = x + c;
            x = c;
            c = v;
            cout << v << " ";
        }
        break;
    }
    r = 1;
    cout << endl;
    for (a = 1; a <= n; a++)
    {
        r = r * a;
        
        }
    cout  <<"factarial:" << r;
    return 0;
}

