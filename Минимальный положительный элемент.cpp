//Минимальный положительный элемент

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
    int Min = 2147483647;
    cin >> N;
    vector<int> Array(N);

    for (int i = 0; i < N; i++) {
        cin >> Array[i];
    }

    for (int i = 0; i < N; i++) {
        if (Array[i] < Min && Array[i] > 0) {
            Min = Array[i];
        }
    }

    if (Min != 2147483647) {
        cout << Min << endl;
    }
    else cout << 0 << endl;
    printArray(N, Array);

    return 0;
}
