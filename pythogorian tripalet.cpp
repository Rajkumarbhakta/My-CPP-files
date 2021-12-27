#include <iostream>

using namespace std;
int max (int a,int b)
{
    return (a>b)?a:b;
}
bool chack (int x,int y,int z)
{
    int a= max(x,max(y,z));
    int b,c;
    if (a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x,
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
        return true;
    else
        return false;

}
int main()
{
  int x,y,z;
  cout<<"enter numbers:";
  cin>>x>>y>>z;

  if (chack(x,y,z))
  {
      cout<<"pythogorian triplate";
  }
  else
  {
      cout<<"not a pythogorian triplate";
  }
  return 0;
}
