#include <iostream>
using namespace std;

int fact(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
		//n!=n×(n-1)!
	}
	return factorial;
}
int nCr(int n, int r)
{
	//nCr=n!/r!×(n-r)!
	int ans = fact(n) / (fact(n - r) * fact(r));
	return ans;
}
int main()
{
	cout << "Enter 2 number to find nCr:";
	int n, r;
	cin >> n >> r;
	cout << nCr(n, r);

	return 0;
}