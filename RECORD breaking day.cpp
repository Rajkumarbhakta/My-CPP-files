#include<bits/stdc++.h>
using namespace std;
int main ()

{
    cout <<"enter size of array:";
    int n;
    cin >>n;
    int arr[n];
    cout << "enter array elements:";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum=INT_MIN;
    int ans=0;
    for (int i=0;i<n;i ++)
    {
        if(arr[i]>maximum && arr[i]>arr[i+1])
            ans++;
      maximum=max (maximum,arr[i]);
    }
    cout<<"total record breaking days: "<<ans<<endl;
    cout << "the highst record breaking days: "<<maximum;
    return 0;

}
