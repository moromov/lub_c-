/*
    Лабораторная работа №1
    Вариант 24
    Студент Моромов Н.С; группа ПИ-Э
    Задача:

    Даны положительное вещественное число n, натуральное число m,
    при этом m <= 8. Округлить значение n до m-ой цифры после запятой. Например, n=123.4567, m = 3. Ответ n = 123.457. Циклами не
    пользоваться
*/

#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double n;
    int m,k;
    cout << "Введите число n: " <<endl;
    cin >> n;
    cout << "Введите число m: " << endl;
    cin >> m;
    k = pow(10, m);
    cout << "Результат вычисления" << round(n * k) / k << endl;
}
