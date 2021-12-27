#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number:";
	cin >> n;
	int temp = n, sum = 0;

	while (n > 0)
	{
		int last_digit = n % 10;

		sum += pow(last_digit, 3);
		n = n / 10;
	}
	if (sum == temp)
		cout << "Armstrong number";
	else
		cout << "Not a Armstrong number";

	return 0;
}