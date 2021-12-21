#include <bits/stdc++.h>

using namespace std;

int digits (int n)
{
int counter { };
do 
{
counter++;
n /= 10;
}
while(n > 0);
return counter;
}

int main()
{
int n;
cin >> n;
cout << digits(n) << endl;
return 0;
}
