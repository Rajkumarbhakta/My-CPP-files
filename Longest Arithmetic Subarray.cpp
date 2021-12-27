#include <bits/stdc++.h>
using namespace std;
int main ()
{
    cout<< "enter array size :";
    int n;
    cin>>n;
    int arr [n];
    cout << "enter array elements :";
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
    }

    int ans =2;
    int pd =arr[1]-arr[0];
    int j=2;
    int curr=2;
    while (j<n)
    {
        if((arr[j]-arr[j+1])== pd)
            curr++;
        else
        {
            pd = arr[j]-arr[j+1];
            curr=2;
        }
        ans = max (ans,curr);
        j++;
    }
    cout << "output:\n logest arithmetic subarry in the given array is :"<<ans;
    return 0;
}
