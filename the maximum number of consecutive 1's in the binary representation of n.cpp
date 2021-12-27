#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    int binaryNum[n];
    int i=0;
    int rem=0;
    int s=1;

    while(n>0)
    {
        binaryNum[i]=n%2;
        n/=2;
        i++;
    }
    for (int j=i-1;j>=0;j--)
    {
        if(binaryNum[j]==1 && binaryNum[j+1]==1)
        {
            rem++;
            if(rem>s)
                s=rem;
        }
        else
            rem=1;
    }

    cout<<s;
    return 0;
}
