#include <iostream>
using namespace std;
int add (int a,int b)
{
	return a+b;
}
int sub (int a,int b)
{
	return a-b;
}
int main()
{
	int x,y;
	cout<< "Enter Frist number:";
	cin>>x;
	cout<<"Enter second number:";
	cin>>y;
	cout<<"Sum of "<<x<<" and "<<y<<" is: "<<add(x,y)<<endl;
	cout<<"Subtraction of "<<x<<" and "<<y<<" is: "<<sub(x,y);
	
	return 0;
}