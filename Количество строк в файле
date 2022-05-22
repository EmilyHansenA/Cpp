#include <iostream>
#include <string>

#include <fstream>
 
using namespace std;
 
int main() {
    
    ifstream in("input.txt");
    
    string s;
    
    int i = 0;
    
    while (in.peek() != EOF) {
        getline(in, s);
        i++;
    }
    
    cout << i << endl;
    
    in.close();
    
    system("pause");
    
    return 0;
}
