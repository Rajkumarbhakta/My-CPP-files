#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number:";
	cin >> n;
	int temp=n;
	int reverse_num = 0;
	while (n > 0)
	{
		int last_digit = n % 10;

		reverse_num = reverse_num * 10 + last_digit;

		n = n / 10;
	}
	cout<<"\nReverse of "<<temp<<" is: "<<reverse_num;

	return 0;
}