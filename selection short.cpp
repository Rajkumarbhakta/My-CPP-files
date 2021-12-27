#include<iostream>
using namespace std;

int main ()
{
    cout<<  "enter the array size:";
    int n;
    cin>>n;
    cout<< "enter array elements:";
    int arr[n];
    for (int i=0; i<n; i++) //getting input for array
    {
        cin>>arr[i];
    }
    for (int i=0; i<n-1; i++) //shorting algorithm
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<< "output : ";
    for (int i=0; i<n; i++) //printing the shorting array
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}
