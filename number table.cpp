#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<< "Enter the number which table you want:";
	cin>>n;//getting input
	for (int i=1;i<=10;i++)
	{
		cout<< n<< " × "<<i<<" = "<<n*i<<"\n";
		//printing the table
	}
	
	return 0;
}