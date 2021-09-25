#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter a number:" << endl;
	cin >> a;
	int i;
	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			cout << "Non prime";
			break;
		}
	}
	if (i == a)
		cout << "Prime" << endl;

	return 0;
}