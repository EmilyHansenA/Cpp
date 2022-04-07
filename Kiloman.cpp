#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    int n, def = 0;

    cout << "¬ведите количество выстрелов\n";
    cin >> n;

    int* a = new int[n];
    char* c = new char[n];

    cout << "¬ведите массив чисел\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "¬ведите массив действий\n";
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {

        if (c[i] == 'J' && a[i] > 2) {
            def++;
        }

        else if (c[i] == 'S' && a[i] <= 2) {
            def++;
        }

    }

    cout << def;

    delete[] a;

    return 0;
}