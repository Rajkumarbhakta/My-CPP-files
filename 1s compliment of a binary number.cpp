#include<iostream>
#include<cstring>
using namespace std;

class binarry
{
    string s;
    string temp;
public:
    void get_bin(void);
    void check_bin(void);
    void once (void);
    void display (void);
};
void binarry :: get_bin(void)
{
    cout << "Enter the binarry number :";
    cin>>s;
    temp = s;
}
void binarry::check_bin(void)
{
    for (int i=0; i< s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!= '1')
        {
            cout << "wrong input !";
            exit(0);
        }
    }
}
void binarry:: once (void)
{
    check_bin();
    for (int i=0; i<s.length(); i++)
    {
        if(s.at(i)== '1')
            s.at(i) = '0';
        else if (s.at(i) == '0')
            s.at(i) = '1';
    }
}
void binarry:: display (void)
{
    once();
    cout << "Once compliment of ("<< temp << ") is ("<<s<<") ";
}
int main()
{
    binarry b;
    b.get_bin();
    b.display();
    return 0;

}
