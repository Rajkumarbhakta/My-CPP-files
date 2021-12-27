#include <iostream>
using namespace std;

int fact (int n)
{
	int factorial=1;
	for (int i=1;i<=n;i++)
	{
		factorial *=i;
		//n!=n×(n-1)!
	}
	return factorial;
}
int main()
{
	cout <<"enter a number: ";
	int n;
	cin>>n;
	
	cout<<"factorial of "<<n <<" is : "<<fact(n);
	
	return 0;
}