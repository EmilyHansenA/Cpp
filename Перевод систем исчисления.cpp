#include <stdlib.h>
#include<stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <malloc.h>
using namespace std;

class Inverttext
{
private:
	int A, B, L, count = 0, temp = 0, C = B, digit = 0;
	string numb, tempnumb = "";
public:
	void Vvod();
	void Vivod();
};

void Inverttext::Vvod()
{
	cin >> A >> B >> L >> numb;
}

void Inverttext::Vivod()
{
	count = L / B;
	if (L % B != 0)
	{
		count++;
	}

	for (int i = 0; i < L; i += B)
	{
		for (int b = i; (b < B + i) && (numb[b] != '\0'); b++)
		{
			tempnumb += numb[b];
		}

		C = B - 1;

		for (int b = 0; tempnumb[b] != '\0'; b++)
		{
			digit = (char)tempnumb[b] - 48;
			temp += pow(A, C) * digit;
			C--;
		}

		if (temp > 9)
		{
			temp += 55;
			cout <<(char)temp;
		}
		else cout << temp;

		tempnumb = "";
		temp = 0;
	}
}

int main()
{
	Inverttext c1;
	c1.Vvod();
	c1.Vivod();
	return 0;
}
