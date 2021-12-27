#include <iostream>
using namespace std;
/*
if row=r
column=p



1()
1 1
1 2 1
1 3 3 1
1 4 6 4 1


*/
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
int nCr (int n,int r)
{
	//nCr=n!/r!×(n-r)!
	int ans=fact(n)/(fact(n-r)*fact(r));
	return ans;
}
int main()
{
	cout<<"enter a number: ";
	int n;
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<=i;j++)
		{
			cout <<nCr(i,j)<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}