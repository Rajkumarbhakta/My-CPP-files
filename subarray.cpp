#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter array size :";
    int n;
    cin>>n;

    int arr[n];
    cout << "enter array elements :";
    for (int i=0;i<n;i++)
    {
        cin >> arr [i];
    }
    cout <<"output:";
    for(int i=0;i<n;i++)
    {
            int sum =0;
        for (int j=i;i<n;i++)
        {
            sum += arr[i];
        cout << sum << " ";
        }
        cout<<endl;
    }
    return 0;
}
