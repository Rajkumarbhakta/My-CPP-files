#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout <<"enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxNum=INT_MIN;
    int minNum=INT_MAX;
    for(int i=0; i<n; i++)
    {
        maxNum= max(maxNum,arr[i]);
        minNum = min (minNum,arr[i]);
    }
cout<<"Maxmum element ofthe array is: "<<maxNum<<endl;
cout<<"MInimum element of the array is: "<<minNum;

    return 0;
}
