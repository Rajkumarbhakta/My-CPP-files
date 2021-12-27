#include <iostream>
using namespace std;
int binarytodecimal (int n)
{
    int ans=0;
    int x=1;
    while ( n>0)
    {
        int y=n%10;
        ans += x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter a binary  number:";
    cin>>n;

    cout <<"("<<n<<")2 = "<<"(" <<binarytodecimal( n)<<")10";
    return 0;
}
