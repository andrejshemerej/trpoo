﻿#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите трехзначное число" << endl;
    cin >> a;
    if (a % 2 == 0) {
        cout << "четное" <<endl
            ;
    }
    else {
        cout << "не четное" <<endl;

    }
    double b = (a % 10 + a % 100 / 10 + a / 100) / 3.;
    cout << "среднее арифметическое его цифр: "  << b;

    return 0;

}
