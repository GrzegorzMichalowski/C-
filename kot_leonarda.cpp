#include <iostream>

using namespace std;

int main()
{
	const int MAX=46;
	int F[MAX + 1 ];
	F[0] = 0;
	F[1] = 1;
	for (int n = 2; n <= MAX; n++)
	F[n] = F[n -1] + F[n-2];
	for (int n = 0; n <= MAX; n++)
	cout << n << ' ' <<  F[n] << '\n';
return 0;


}
