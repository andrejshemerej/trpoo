#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int z;
    cout <<  "Введите номер месеца" << endl;
    cin >> z;
    switch (z)
    {
    case 1: cout << "зима";
        break;
    case 2: cout << "зима";
        break;
    case 3: cout << "весна";
        break;
    case 4: cout << "весна";
        break;
    case 5: cout << "весна";
        break;
    case 6: cout << "лето";
        break;
    case 7: cout << "лето";
        break;
    case 8: cout << "лето";
        break;
    case 9: cout << "осень";
        break;
    case 10: cout << "осень";
        break;
    case 11: cout << "осень";
        break;
    case 12: cout << "зима";
        break;
    default: cout << "ошибка";
        break;
    }
    return 0;

}
