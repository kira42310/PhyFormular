#include <iostream>

using namespace std;

double velocity(double deltaDistance, double time)
{
	return deltaDistance/time;
}

double velocity(double distance2, double distance1, double time2, double time1 = 0)
{
	return (distance2-distance1)/(time2-time1);
}

double acceleration(double deltaVelocity, double time)
{
	return deltaVelocity/time;
}

double acceleration(double velocity2, double velocity1, double time2, double time1 = 0 )
{
	return (velocity2-velocity1)/(time2-time1);
}

double velocityIncrease(double acceleration, double time, double velocityInit = 0 )
{
	return ( acceleration * time ) + velocityInit;
}

double distance(double velocity, double time, double distanceInit = 0 )
{
	return ( velocity * time ) + distanceInit;
}

double timeByVelocity(double distance, double velocity)
{
	return distance / velocity;
}

int main()
{
	cout << velocity(12,4) << endl;
	cout << velocity(12,4,4) << endl;
	cout << velocity(12,4,9,1) << endl;
	cout << acceleration(12,4) << endl;
	cout << acceleration(20,10,4) << endl;
	cout << acceleration(20,10,4,2) << endl;
	return 0;
}

