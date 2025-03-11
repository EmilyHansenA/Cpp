//Обмен пар

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(int N, vector<int>& Array)
{
    for (int i = 0; i < N; i++) {
        cout << Array[i] << " ";
    }
    cout << endl;
}

void cinArray(int N, vector<int>& Array)
{
    for (int i = 0; i < N; i++) {
        cin >> Array[i];
    }
}
int main()
{
    int N;
    cin >> N;

    N = N * 2;

    vector<int> ArrayN(N);
    cinArray(N, ArrayN);

    int temp;
    int i = 0;
    for (; i < N - 1; i += 2)
    {
        temp = ArrayN[i];
        ArrayN[i] = ArrayN[i + 1];
        ArrayN[i + 1] = temp;
    }

    printArray(N, ArrayN);
    
    return 0;
}
