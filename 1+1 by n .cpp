#include <iostream>
//1+1/2+1/3+....+1/n
using namespace std;
int main()
{
	int n;
	float r, temp;
	cout << "Enter the 'n' : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		temp = 1.0 / i;
		r = r + temp;
	}
	cout << r;

	return 0;
}