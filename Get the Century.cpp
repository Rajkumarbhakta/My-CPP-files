#include<iostream>
using namespace std;
int main()
{
    cout <<"enter the year:";
    int n;
    cin >>n;

    if(n>=1001 && n<=1100)
    {
        cout<<"11th century.";
    }
    else if(n>=1101 && n<= 1200)
    {
         cout <<"12th century.";
    }
    else if(n>=1201 && n<= 1300)
    {
         cout <<"13th century.";
    }else if(n>=1301 && n<= 1400)
    {
         cout <<"14th century.";
    }else if(n>=1401 && n<= 1500)
    {
         cout <<"15th century.";
    }else if(n>=1501 && n<= 1600)
    {
         cout <<"16th century.";
    }else if(n>=1601 && n<= 1700)
    {
         cout <<"17th century.";
    }else if(n>=1801 && n<= 1900)
    {
         cout <<"19th century.";
    }else if(n>=1901 && n<= 2000)
    {
         cout <<"20th century.";
    }
    else if(n>=2001 && n<= 2100)
    {
         cout <<"21th century.";
    }

    return 0;
}
