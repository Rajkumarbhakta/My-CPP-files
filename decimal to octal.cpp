#include<iostream>
using namespace std;
void octaltodecimal(int n)
{
    int octalnum[n];
    int i=0;
    while (n>0)
    {
        octalnum[i]=n%8;
        n/=8;
        i++;
    }
    for (int j=i-1; j>=0; j--)
        cout<<octalnum[j];
}
int main()
{
    int n;
    cout <<"enter a number:";
    cin>>n;
    octaltodecimal(n) ;
    return 0;
}
