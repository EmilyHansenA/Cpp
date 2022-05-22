#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Inverttext
{
private:
string text;
public:
void Vvod();
void Vivod();

};

void Inverttext::Vvod()
{
getline(cin, text);
}

void Inverttext::Vivod()
{
string word = "", mostlong = "";
int i = 0, dlina=0,dlinamax=0;

while (text[i] != '\0')
{
for (i; text[i] != ' ' && text[i]!='\0'; i++)
{
word += text[i];
dlina++;
}

if (dlina > dlinamax)
{
dlinamax = dlina;
dlina = 0;
mostlong = word;
word = "";
}
else
{
dlina = 0;
word = "";
}

if (text[i] == '\0')
break;
else i++;
}
cout << mostlong;
}

int main()
{
Inverttext c1;
c1.Vvod();
c1.Vivod();
return 0;
}
