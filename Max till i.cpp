#include<iostream>
#include <climits>>
using namespace std;
int main ()
{
    int maximum = INT_MIN;
    cout << "enter the array lenght:";
    int n;
    cin>>n;

    int arr[n];
    cout<< "enter array elements:";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<< "output:";
    for (int i= 0; i<n;i++)
    {
        maximum = max(maximum,arr[i]) ;
        cout << maximum<< " ";
    }
    return 0;
}
