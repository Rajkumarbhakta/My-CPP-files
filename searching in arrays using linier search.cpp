#include <iostream>
using namespace std;
int liniarsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    cout <<"enter the size of array:";
    int n;
    cin>>n;
    int arr[n];

    cout <<"enter the array element :";
    for (int i=0; i<n; i++)
    {
        cin >>arr[i];
    }

    cout <<"enter the number what you want to search in the arry?"<<endl;
    int key;
    cin>>key;

    if(liniarsearch(arr,n,key)>-1)
        cout << "Your key element "<<key<<" found in "<<liniarsearch(arr,n,key)<<" th index in the array";
    else
        cout<<"Element is not found in the array!";
    return 0;
}
