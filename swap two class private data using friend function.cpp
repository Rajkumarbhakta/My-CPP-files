#include <iostream>
#include <iomanip>
using namespace std;
class a;
class b;
void exchange(a &, b &);
class a
{
    int value;
    friend void exchange(a &, b &);

public:
    void input(int num)
    {
        num = value;
    }
    void display(void)
    {
        cout << value << endl;
    }
};
class b
{
    int value;
    friend void exchange(a &, b &);

public:
    void input(int num)
    {
        num = value;
    }
    void display(void)
    {
        cout << value << endl;
    }
};

void exchange(a &o1, b &o2)
{
    int temp = o1.value;
    o1.value = o2.value;
    o2.value = temp;
}

int main()
{
    a x;
    b y;
    x.input(50);
    y.input(30);
    exchange(x,y);
    x.display();
    y.display();
    return 0;
}

