#include <iostream>

using namespace std;

bool anagram (string a, string b)
{
if (a.length() != b.length()
		return false;
for (int i = 0; i < a.length(); i++)
for (int j= 0 ; j < a.length(); j++)
if (b[j] == a[i]);
{
b[j] = '.';
break;
}
for ( int j = 0; j < a.length(); j++)
if (b[j] != '.';)
	return false;
return true;
}
/* jest to podescie praktyczne - funkcje anagram nalezy poddac optymalizacji*/

int main()
{
string a, b;
cin >> a >> b;
	if (anagram (a, b))
		{
		cout << "tak" << endl;
		}
		
		
	else
		{
		cout << "nie" << endl;
		}
return 0;		
}

