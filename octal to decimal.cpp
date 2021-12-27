#include <iostream>
using namespace std;

int octaltodecimal(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int y=n%10;
        ans +=(x*y);
        x=x*8;
        n=n/10;
    }
    return ans;
}
int main()
{
    int n;
    cout <<"enter a octal number:";
    cin>>n;

    cout <<"("<<n<<")8 = "<<"(" <<octaltodecimal( n)<<")10";
}
