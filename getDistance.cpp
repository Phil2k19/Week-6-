#include <iostream>
#include <iomanip>
using namespace std;
double getDistance(double Distance)
{
	cout << fixed << setprecision(2);
	cout << "Enter Distance in Miles\n";
	cin >> Distance;
	int i = 0;
	while (i < 2)
	{
		if (Distance > 2000)
		{
			cout << "Distance cannot be longer than 2000 MILES! Enter a valid value:\n";
			cin >> Distance;
		}
		if (Distance < 0)
		{
			cout << "Negative value detected! Enter valid Value:\n";
			cin >> Distance;
		}
		
		i++;
	}
	return Distance;
}
