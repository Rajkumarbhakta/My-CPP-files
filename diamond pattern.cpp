#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"---------- Enter hight of the pattern----------"<<endl;
    cin>>n;
    int i,j,k;
    cout <<"--------- The pattern--------"<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=n-1; j>=i; j--)
        {
            cout <<"  ";
        }
        for (k=1; k<=i; k++)
        {
            cout <<"* ";
        }
        for(int l=2; l<=i; l++)
        {
            cout <<"* ";
        }
        cout<<endl;
    }
    for(i=n-1; i>=1; i--)
    {
        for(j=n-1; j>=i; j--)
        {
            cout <<"  ";
        }
        for (k=1; k<=i; k++)
        {
            cout <<"* ";
        }
        for(int l=2; l<=i; l++)
        {
            cout <<"* ";
        }
        cout<<endl;
    }
    return 0;
}
