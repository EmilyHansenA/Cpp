#include <iostream>
using namespace std;


int main()
{
    int a, a1, a2, a3;
    int b, b1, b2, b3;
    int T;


    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> T; //5

    a = a1 + a2 + a3; //4 tram
    b = b1 + b2 + b3; //5 trol

    
    if (b <= T) {
        cout << "YES";
        cout << "\nTrolleybus";
        cout << "\n" << T - b;
    }

    else if (a <= T) {
        cout << "YES";
        cout << "\nTram";
        cout << "\n" << T - a;
    }

    else {
        cout << "NO\nTrolleybus";
    }

    return 0;
}