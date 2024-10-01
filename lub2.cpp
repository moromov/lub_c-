/*
    Лабораторная работа №2
    Вариант 24
    Студент Моромов Н.С; группа ПИ-Э
    Задача:

    Даны четыре точки на числовой прямой A, B, C и D, причём A ≤ B, C
    ≤ D. Найти длину пересечения отрезков AB и CD.

    Дата: 28.09.2024
    Версия: 1.0
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, c, d, start, end;

    cout << "Введите координаты точек: A, B, C, D" << endl;
    cin >> a >> b >> c >> d;

    if (a >= c) {
        start = a;
    }
    else {
        start = c;
    }
    if (b <= d) {
        end = b;
    }
    else {
        end = d;
    }
    if (start < end) {
        cout << "Пересечение отрезков = " << end - start;
    }
    else {
        cout << "Пересечение отрезков = 0";
    }

}

