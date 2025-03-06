//Суммы пар

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
    int N, D;
    
    cin >> N;
    D = N / 2;
    vector<int> ArrayN(N);
    vector<int> ArrayD(D);
    cinArray(N, ArrayN);

    for (int i = 0, j = N-1; i < D && j >= D; i++, j--)
    {
        ArrayD[i] = ArrayN[i] + ArrayN[j];
    }

    printArray(D, ArrayD);

    return 0;
}
