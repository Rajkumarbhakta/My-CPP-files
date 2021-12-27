#include<iostream>
using namespace std;
void nTablesPlusOne(int n)
{
    int num;
    for (int i=1;i<=10;i++)
    {
        num= (n*i)+1;
      cout<<num<<" , ";
    }

}
int main()
{
   int n;
   cout <<"enter a number:";
   cin>>n;
   nTablesPlusOne(n);
   return 0;
}
