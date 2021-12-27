#include<iostream>
#include <cstdio>
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
void hexadecimaltodecimal(int n)
{
    printf ("(%x)16 = (%d)10",n,n);
}
void decimaltobinary(int n)
{
    int binaryNum[n];
    int i=0;

    while (n>0)
    {
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    for( int j=i-1; j>=0; j--)
    {
        cout<<binaryNum[j];
    }
}
void decimaltooctal(int n)
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
void decimaltohexadecimal(int n)
{
    printf("(%d)10 = (%x)16",n);
}

int main ()
{
    int choose;
    cout<< "choose for conversation:\n1.Binary to Decimal\n2.Octal to Decimal\n3.Hexadecimal to Decimal"<<endl;
    cout<<"4.Decimal to Binary\n5.Decimal to Octal \n6.Decimal to Hexadecimal"<<endl;
    cin>>choose;
    int n;


    if (choose == 1){
        cout<<"enter a binary  number:";
        cin>>n;
        cout <<"("<<n<<")2 = "<<"(" <<binarytodecimal( n)<<")10";
    }
    else if (choose == 2){
        cout <<"enter a octal number:";
        cin>>n;
        cout <<"("<<n<<")8 = "<<"(" <<octaltodecimal( n)<<")10";
    }
    else if(choose== 3){
        cout<<"enter a hexcadecimal number:";
        scanf("%x",&n);
        hexadecimaltodecimal(n);
    }
    else if (choose == 4){
        cout<<"enter a number:";
        cin>>n;
        decimaltobinary(n);
    }
    else if (choose==5){
        cout <<"enter a number:";
        cin>>n;
        octaltodecimal(n) ;
    }
    else if(choose == 6){
        cout<<"enter a number:";
        cin>>n;
        decimaltohexadecimal(n);
    }
    else
        cout<<"INVALID INPUT";



    return 0;
}
