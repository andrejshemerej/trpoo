
#include <iostream>
using namespace std;

int main()

{

    int a, b,k,l;
    l = 1;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    for (int i = 1; i <= a; i++)
    {
        k = a % i;
        if (k == 0)
        {

            l++;

        }
    }
    if (l==3)
    {
        cout << "a - ptostoe" <<endl;
    }
    else
    {
        cout << "a - sostavnoe" <<endl;
    }
    l = 1;
    for (int m = 1; m <= b; m++)
    {
        k = b % m;
        if (k == 0)
        {
            l++;

        }
    }

    if (l == 3)
    {
        cout << "b - ptostoe" <<endl;
    }
    else
    {
        cout << "b - sostavnoe" <<endl;
    }
    while (true) {
  if (a == b) {
        cout << "nod= " << a;
        return 0;
    }
    else {
      if (a > b) {
          a -= b;
      }
      else
          b -= a;
    }
  
    }
    return 0;
}
