#include <iostream>
#include <string>

#include <fstream>
#include <sstream>

using namespace std;

int main() {
    
	string str, StrTwo;
	string w;
	
	bool fW;

	ifstream infile("input.txt");
	ofstream outfile("output.txt");

	while (getline(infile, str)) {
	    
		if (str.empty())
		
			outfile << endl;
			
		else {
		    
			fW = true;
			
			stringstream stream(str);
			
			while (stream >> w) {
			    
				if (w[0] != 'A')	{
				    
					if (fW) {
					    
					    StrTwo += w;
						fW = false;
						
					}
					
					else {
					    
						StrTwo += " "; 
						StrTwo += w;
						
					}
				}
			}
			
			outfile << StrTwo << endl;
			StrTwo.clear();
			
		}
	}

	infile.close();
	outfile.close();

	return 0;
}
