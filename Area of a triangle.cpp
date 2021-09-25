#include <iostream>
#include <cmath>
using namespace std;
// formula, A= √S(S-a)(S-b)(S-c)
//where a,b,c are side of triangle and 2S=a+b+c
int main()
{
	float a, b, c, s; //a,b,c is length of three side
	cout << "Enter the length of three side of a triangle:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	float x = a + b + c; //x is sum of three side of the triangle
	s = x / 2;			 //2S=a+b+c
						 //	cout << s;
	float s1, s2, s3;
	s1 = s - a;
	//cout << s1;
	s2 = s - b;
	//	cout << s2;
	s3 = s - c;
	//	cout << s3;
	float d = s * s1 * s2 * s3;
	//cout << d;
	float A = sqrt(d);
	cout << "The Area of the triangle is: " << A;

	return 0;
}