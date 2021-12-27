#include<iostream>
#include<cstdio>
using namespace std;

void decimaltohexadecimal(int n)
{
    printf("%x",n);
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    decimaltohexadecimal(n);
    return 0;
}
