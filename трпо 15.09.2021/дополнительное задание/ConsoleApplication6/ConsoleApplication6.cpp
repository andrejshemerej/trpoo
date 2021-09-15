#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout <<"Введите год" 
        << endl;
    cin >> a;
    int b = a % 12;
    cout << b;

    switch (b)
    {
    case 7: cout << "кот (кролик)";
        break;
    case 8: cout << "дракон";
        break;
    case 9: cout << "змея";
        break;
    case 10: cout << "лошадь";
        break;
    case 11: cout << "коза";
        break;
    case 0: cout << "обезьяна";
        break;
    case 1: cout << "петух";
        break;
    case 2: cout << "собака";
        break;
    case 3: cout << "свинья";
        break;
    case 4: cout << "Крыса";
        break;
    case 5: cout << "Бык";
        break;
    case 6: cout << "тигр";
        break;
    default: cout << "ошибка";
        break;
    }
    
    return 0;
}

