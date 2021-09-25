#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number:" << endl;
	cin >> n;
	cout << "Prime numbers upto " << n << " is:" << endl;
	for (int i = 2; i <= n; i++)
	{
		int j;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
			cout << i << endl;
	}

	return 0;
}