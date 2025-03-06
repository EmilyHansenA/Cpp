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
    int N, indexMax;
    int Max = -2147483647;
    cin >> N;
    vector<int> Array(N);

    for (int i = 0; i < N; i++) {
        cin >> Array[i];
    }

    for (int i = 0; i < N; i++) {
        if (Array[i] > Max) {
            Max = Array[i];
            indexMax = i;
        }
    }

    cout << indexMax << endl;
    printArray(N, Array);

    return 0;
}
