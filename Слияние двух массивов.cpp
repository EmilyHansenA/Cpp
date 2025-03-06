//	Слияние двух массивов

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

void cinArray(int N, vector<int>& Array)
{
    for (int i = 0; i < N; i++) {
        cin >> Array[i];
    }
}
int main()
{
    int N, M, D;
    
    cin >> N >> M;
    D = N + M;
    vector<int> ArrayN(N);
    vector<int> ArrayM(M);
    vector<int> ArrayD(D);
    cinArray(N, ArrayN);
    cinArray(M, ArrayM);

    int x = 0; int i = 0; int j = 0;
    for (;  i < N && j < M; x++) {
        {
            if (ArrayN[i] < ArrayM[j]) {
                ArrayD[x] = ArrayN[i++];
            }
            else if (ArrayN[i] > ArrayM[j]) {
                ArrayD[x] = ArrayM[j++];
            }
            else {
                ArrayD[x] = ArrayN[i++];
                ArrayD[++x] = ArrayM[j++];
            }
        }
        
    }
    for (; i < N; i++, x++) {
        ArrayD[x] = ArrayN[i];
    }

    for (; j < M; j++, x++) {
        ArrayD[x] = ArrayM[j];
    }

    printArray(D, ArrayD);

    return 0;
}
