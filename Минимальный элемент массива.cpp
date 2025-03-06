//Вам дан массив целых чисел. Найдите минимальный элемент в заданном массиве.

#include <iostream>
#include <vector>
using namespace std;

void printArray(int N, vector<int>& Array)
{
    for (int i = 0; i < N; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    int Bpos = 0, Cneg = 0;

    cin >> N;
    vector<int> Array(N);

    for (int i = 0; i < N; i++) {
        cin >> Array[i];
    }

    for (int i = 0; i < N; i++) {
        if (Array[i] < 0)
            Bpos++;
        else if (Array[i] > 0)
            Cneg++;
    }

    vector<int> ArrayB(Bpos);
    vector<int> ArrayC(Cneg);

    int bIndex = 0, cIndex = 0;

    for (int i = 0; i < N; i++) {
        if (Array[i] < 0) {
            ArrayB[bIndex] = Array[i];
            bIndex++;
        }
        else if (Array[i] > 0) {
            ArrayC[cIndex] = Array[i];
            cIndex++;
        }
    }

    printArray(Cneg, ArrayC);
    printArray(Bpos, ArrayB);
    printArray(N, Array);

    return 0;
}
