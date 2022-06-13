#include <iostream>
#include <string>

#include <fstream>

using namespace std;

void MaxStr() {
    
	ofstream outfile("output.txt");
	ifstream infile("input.txt");

	int number, n, m, sum = 0;
	
	string str;
	
	infile >> n >> m;
	
	for (int j = 0; j < m; j++) {
	    
		infile >> number;
		sum += number;
	
	}
	
	int max = sum;
	
	int maxi = 0;
	
	sum = 0;

	for (int i = 1; i < n; i++)	{
	    
		for (int j = 0; j < m; j++) {
		    
			infile >> number;
			sum += number;
		
		}
		
		if (sum > max) {
		    
			max = sum;
			maxi = i;
		
		    
		}
		
		sum = 0;
	
	}

	outfile << maxi + 1;

	outfile.close();
	infile.close();   
}
