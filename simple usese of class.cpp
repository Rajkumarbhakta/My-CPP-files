#include <iostream>
using namespace std;
class person
{
	char name[30];
	int age;

  public:
	void getdata();
	void display();
};
void person::getdata()
{
	cout << "Enter name:";
	cin >> name;
	cout << "Enter age:";
	cin >> age;
}
void person::display()
{
	cout << "Name: " << name<<endl;
	cout << "Age: " << age;
}

int main()
{
	person p;

	p.getdata();
	p.display();

	return 0;
}