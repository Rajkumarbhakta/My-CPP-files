#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter two numbers:";
	int a,b;
	cin>>a>>b;
	cout<<"Prime numbers between "<<a<<" and "<<b<<" is:\n";
	for (int i=a;i<=b;i++)
	{
		int j;
		for (j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if (j==i)
		cout<<i<<endl;
	}
	
	
	return 0;
}