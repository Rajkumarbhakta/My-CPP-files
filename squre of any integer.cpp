#include <iostream>
#define squre(x) x *x
using namespace std;
int main()
{
	int a;
	cout << "Enter a number to find squre of this number:";
	cin >> a;
	cout << "Squre of " << a << " is: " << squre(a);

	return 0;
}