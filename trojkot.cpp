#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
double a, b, c;
cin >> a >> b >> c;
if ((a+b>c) && (a+c>b) && (b+c>a))
{
cout << "Posible " << endl;
cout << "Perimeter:  " << a + b + c << endl;
double p = (a + b + c)/2;
cout << " Area: " << sqrt(p - (p-a) * (p-b) * (p-c)) << endl;

}
else
cout << "Impossible " << endl;
return 0;

}

