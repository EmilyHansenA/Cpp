#include <iostream>
#include <string>

#include <fstream>

using namespace std;

int main() {
    
    string a;
    
    int kl = 0;

    ifstream infile("input.txt");
    
    while ( infile >> a) {
        
        kl++;
        
    }
    
    infile.close();

    ofstream offile("output.txt");
    offile << kl;
    
    offile.close();

    return 0;
}
