#include<iostream>
 using namespace std;
 inline int convert (int n)
 {
     return n*60;
 }
 int main()
{
    cout <<"enter minutes to convert into second:";
    int n;
    cin>>n;

    cout<<n<<"m = "<<convert(n)<<"s"<<endl;
    return 0;
}
