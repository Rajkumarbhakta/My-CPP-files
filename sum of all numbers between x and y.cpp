#include <iostream>
using namespace std;

int sum(int x, int y)
{
	int ans = 0;
	if (x < y)
	{
		for (int i = x; i <= y; i++)
			ans = ans + i;
		return ans;
	}
	else
	{
		for (int i = y; i <= x; i++)
			ans = ans + i;
		return ans;
	}
}
int main()
{
	int a, b;
	cout << " enter x and y: ";
	cin >> a >> b;

	cout << " sum of all numbers between " << a << " and " << b << " is :" << sum(a, b);

	return 0;
}