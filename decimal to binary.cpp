# include<iostream>
using namespace std;
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
     for( int j=i-1;j>=0;j--)
     {
         cout<<binaryNum[j];
     }
 }
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    decimaltobinary(n);
    return 0;
}
