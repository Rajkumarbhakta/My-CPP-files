#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"-------Enter the pattern hight----------"<<endl;
    cin>>n;
    int i,j,k;
    cout<<"------------ The pattern-----------"<<endl;
    for(i =1 ; i <=n; i++)
    {
        for ( j=1; j<=i; j++)
        {
            cout <<"* ";
        }
        for(k=1; k<= 2*(n-i); k++)
        {
            cout <<"  ";
        }
        for (int l=i ; l>=1; l--)
        {
            cout <<"* ";
        }
        cout<<endl;
    }
    for(i =n-1; i >=1; i--)
    {
        for ( j=1; j<=i; j++)
        {
            cout <<"* ";
        }
        for(k=1; k<=2*(n-i); k++)
        {
            cout <<"  ";
        }
        for (int l=i ; l>=1; l--)
        {
            cout <<"* ";
        }
        cout<<endl;
    }


    return 0;
}
