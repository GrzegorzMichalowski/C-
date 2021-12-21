#include <iostream>

using namespace std;

int main()
{
const int MAX = 46;
int F[MAX + 1];

F[0] = 0;
F[1] = 1;

for (int n = 2; n <=MAX; n++)
	F[n] = F[n-1] + F[n-2];
int x;
cin >> x;
int n = MAX;

while (F[n] >= x)
	n--;
cout << F[n] << '\n';

x = x - F[n];
n--;
while ( x > 0)
{
       if (F[n] >= x)
       {
	       cout << F[n] << '\n';
	       x = x - F[n];
       }
       n--;
}
return 0; 
}
