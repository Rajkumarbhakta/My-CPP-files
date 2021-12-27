#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
       int mid=(s+e)/2;
       if(arr[mid]==key)
        return mid;
       else if (arr[mid]>key)
        e=mid-1;
       else
        s=mid+1;
    }
    return -1;
}
int main()
{
    cout<<"enter size of array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key element what you want to search:";
    int key;
    cin >>key;
    if (binarysearch(arr,n,key)>-1)
        cout << "Your key element "<<key<<" found in "<<binarysearch(arr,n,key)<<" th index in the array";
    else
        cout<<"Element is not found in the array!";
    return 0;
}
