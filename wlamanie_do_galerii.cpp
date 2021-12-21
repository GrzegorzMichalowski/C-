#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n; 
	cin >> n; 
	int min_a{ 1000000001 }, max_a{ };
	for(int i{1}; i<=n; i++)
	{
	int a;
	cin >> a;
	if(a < min_a) 
		min_a = a;
	if(a > max_a) 
		max_a = a;
	}
	cout << max_a - min_a + 1 - n << '\n'; 
return 0;
}
