#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (i == 1 || j == 1 || i == a || j == b || i == j || j == (a - i + 1))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}

	return 0;
}