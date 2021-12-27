#include <iostream>
using namespace std;

void fiv (int num)
{
	int t1=0,t2=1;
	int next;
	for (int i=1;i<=num;i++)
	{
		cout<< t1<<endl;
		next=t1+t2;
		t1=t2;
		t2=next;
	}
	return;
}
int main()
{
	cout<<"enter a number:";
	int n;
	cin>>n;
	
	fiv(n);
	
	return 0;
}