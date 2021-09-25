#include <iostream>
using namespace std;
int main()
{
	float distance,taken_time, speed;
	cout<< "•Enter the distance traveled by the car(in KM):";
	cin>> distance;
	cout<< "•Enter the time taken by the car for traveling "<<distance<< " KM distance(in hours):";
	cin>> taken_time;
	speed=distance/taken_time;
	
	cout<< "So,the speed of the car is: "<<speed<<" km/h";
	return 0;
}