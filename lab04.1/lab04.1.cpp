// Лабораторна робота № 4.1
// Обчислення добутку за допомогою циклів while, do-while, for (збільшення та зменшення)
// Варіант 6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, k;
    double P;

    cout << "N = "; cin >> N;

    // 1) Спосіб while
    P = 1.0;
    k = N;
    while (k <= 19)
    {
        P *= (1.0 * (k - N) / (k + N) + 1.0);
        k++;
    }
    cout << P << endl;

    // 2) Спосіб do-while
    P = 1.0;
    k = N;
    do {
        P *= (1.0 * (k - N) / (k + N) + 1.0);
        k++;
    } while (k <= 19);
    cout << P << endl;

    // 3) Спосіб for (збільшення лічильника k++)
    P = 1.0;
    for (k = N; k <= 19; k++)
    {
        P *= (1.0 * (k - N) / (k + N) + 1.0);
    }
    cout << P << endl;

    // 4) Спосіб for (зменшення лічильника k--)
    P = 1.0;
    for (k = 19; k >= N; k--)
    {
        P *= (1.0 * (k - N) / (k + N) + 1.0);
    }
    cout << P << endl;

    return 0;
}