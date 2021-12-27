#include <iostream>
using namespace std;
int sum(int n)
{
	int ans = 0;
	ans = (n * (n + 1)) / 2;
	return ans;
}
int main()
{
	int a;
	cout << "Enter n: ";
	cin >> a;
	cout << "Sum of frist " << a << " numbers: " << sum(a);

	return 0;
}