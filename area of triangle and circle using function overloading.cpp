#include <iostream>
#include <cmath>
using namespace std;
//Function overloading
float area(int a, int b, int c)
{
	float s = (a + b + c) / 2;

	float area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}
float area(int r)
{
	float pi = 3.14;
	return (pi * r * r);
}
int main()
{
	int x, y, z;
	int r;
	cout << "Enter 3 side of a triangle: ";
	cin >> x >> y >> z;
	cout << "Area of the triangle is : " << area(x, y, z) << endl;
	cout << "Enter the radius of circle: ";
	cin >> r;
	cout << "Area of the circle is : " << area(r) << endl;

	return 0;
}