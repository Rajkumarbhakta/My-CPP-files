#include <iostream>
#include <cstdio>
using namespace std;s

void hexadecimaltodecimal(int n)
{
    printf ("(%x)16 = (%d)10",n,n);
}
int main ()
{
    int n;
    cout<<"enter a hexcadecimal number:";
    scanf("%x",&n);
    hexadecimaltodecimal(n);
    return 0;
}
