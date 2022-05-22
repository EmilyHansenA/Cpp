#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Inverttext
{
private:
string D, W, T, tempword="";
public:
void Vvod();
void Vivod();

};

void Inverttext::Vvod()
{
getline(cin, D);
getline(cin, W);
getline(cin, T);
}

void Inverttext::Vivod()
{
int i = 0;
while (D[i] != '*')
{
while (D[i] != ' ')
{
tempword += D[i];
i++;
}

if (tempword == W)
{
D.insert(i," ");
D.insert(i + 1, T);
break;
}

tempword = "";
i++;
}
cout << D;
}

int main()
{
Inverttext c1;
c1.Vvod();
c1.Vivod();
return 0;
}
