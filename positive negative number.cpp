#include <iostream>
using namespace std;
int main()
{
	int number[100], n;
	cout << "How many number you want to enter:\n";
	cin >> n;
	cout << "Enter numbers:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> number[i];
	}
	for (int j = 0; j < n; j++)
	{
		if (number[j] > 0)
			cout << number[j] << " is a positive integer\n";
		else if (number[j] < 0)
			cout << number[j] << " is a negative integer\n";
		else
			cout << "0 is 'ZERO'\n";
	}

	return 0;
}