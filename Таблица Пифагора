#include <iostream>
#include <fstream>

using namespace std;

void PTabl() {
    
	ofstream outfile("output.txt");

	int k;
	
	cin >> k;
	
	for (int i = 1; i <= k; i++) {
	    
		for (int j = 1; j < k; j++)	{
		    
			outfile << i * j << " ";
			
		}
		
		outfile << i * k << endl;
		
	}

	outfile.close();
}

int main(){

	PTabl();

	return 0;
}
