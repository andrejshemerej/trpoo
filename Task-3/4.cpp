#include <iostream>
using namespace std;

int main()

{
    cout << "a = ";
    int a;
    cin >> a;
    string s = "";
    while (a) {
        s += (a % 2) +'0';
        a /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s ;
   

    return 0;
}
