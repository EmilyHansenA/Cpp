#include <iostream>
#include <string>

#include <fstream>

using namespace std;

int main() {
    
    string a;
    
    int kl = 0, n;

    ifstream infile("input.txt");
    ofstream offile("output.txt");

    getline(infile, a);
    
    n = stoi(a);
    
    while (getline(infile, a)) {
        
        kl++;
        
        offile << a << endl;
        
        if (kl % n == 0)
        
            offile << "-8-8-8-8-8-8-8-" << endl;
            
    }

    infile.close();
    offile.close();

    return 0;
}
