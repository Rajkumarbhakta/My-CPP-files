#include<iostream>
using namespace std;

int main ()
{
    cout<<"enter the array size:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int countnum =1;
    while(countnum<n)
    {
        for (int i=0;i<(n-countnum);i++)
        {
          if(arr[i]>arr[i+1])
          {
              int temp =arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
          }
        }
        countnum++;
    }
cout <<"---------shorted array-------------";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
