
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int kolElement(string s, char x);
string transferToString(int n);
string transferToString(double n);
int kolElement(int* a, int n, int x);
string transferToString(double n,int k);

int main()
{
  //============================================================================
    //Task 1
    /* int n;
     cout << "input number:";
     cin >> n;
    cout<<transferToString(n);*/
//==============================================================================
    //Task 2.1
   /* double n;
    cout << "input number:";
    cin >> n;    
   cout<<transferToString(n);*/
//==============================================================================
   //Task 2.2
  /* double n;
   int k;
   cout << "input number:";
   cin >> n;
   cout << "input the number of elements to convert:";
   cin>>k;
  cout<<transferToString(n,k); */
//==============================================================================
   //Task 3.1
    /*int n, x;
    cout << "the size of the array:";
    cin >> n;
    int* a = new int[n];
    cout << "input elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "element to search:";
    cin >> x;
    cout << "number of matching elements:" << kolElement( a, n,x);*/
 //==============================================================================
     //Task 3.2
   /* string s;
    char x;
    cout << "input string:\n";
    getline(cin, s);
    cout << "element to search:";
    cin >> x;
    cout << "number of matching elements:" << kolElement(s, x);*/
}
string transferToString(int n)
{
    string s;
    int d;
    while (n!=0)
    {
        d = n % 10;
        n /= 10;
        s = (char)(d + 48) + s;
    }
    return s;
}
string transferToString(double a)
{
    string s = transferToString(int(trunc(a)));
    s += ',';
    a = (a - trunc(a)) * 1000000;
    
    s = s + transferToString(int(trunc(a)));
    return s;
}
int kolElement(int* a, int n, int x)
{
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            b++;
        }
    }
    return b;
}
int kolElement(string s, char x)
{
    int b = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == x)
        {
            b++;
        }
    }
    return b;
}
string transferToString(double a,int k)
{
    string s = transferToString(int(trunc(a))),n;
    s += ',';
    a = (a - trunc(a)) * 1000000;

    s = s + transferToString(int(trunc(a)));
    for (int i = 0; i < k+1; i++)
    {
        n+= s[i];
    }
    return n;
}