/*
    ������������ ������ �1
    ������� 24
    ������� ������� �.�; ������ ��-�
    ������:

    ���� ������������� ������������ ����� n, ����������� ����� m,
    ��� ���� m <= 8. ��������� �������� n �� m-�� ����� ����� �������. ��������, n=123.4567, m = 3. ����� n = 123.457. ������� ��
    ������������
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
    cout << "������� ����� n: " <<endl;
    cin >> n;
    cout << "������� ����� m: " << endl;
    cin >> m;
    k = pow(10, m);
    cout << "��������� ����������" << round(n * k) / k << endl;
}
