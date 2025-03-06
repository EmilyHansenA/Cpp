//Меньше среднего

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

    vector<int> ArrayN(N);
    cinArray(N, ArrayN);

    float sum = 0;
    int i = 0;
    for (; i < N; i++)
    {
        sum += ArrayN[i];
    }
    sum = sum / N;

    int count = 0;
    for (i = 0; i < N; i++) {
        if (ArrayN[i] < sum) {
            count++;
        }
    }

    //printArray(N, ArrayN);
    cout << count;
    return 0;
}
