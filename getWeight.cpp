#include <iostream>
#include <iomanip>
using namespace std;
double getWeight(double KiloG)
{
	
	cout << fixed << setprecision(2);
	cout << "Enter weight in kilograms:\n" << "Enter 0 if you wish to EXIT.\n";	
	cin >> KiloG;
	int i = 0;
	while (i < 2)
	{
		if (KiloG > 50)
		{
			cout << "Weight cannot be bigger than 50 Kilograms! Enter a valid value:\n";
			cin >> KiloG;
		}
		if (KiloG < 0)
		{
			cout << "Negative value detected! Enter valid Value:\n";
			cin >> KiloG;
		}
		if (KiloG == 0.00)
			break;
		i++;
	}
	return KiloG;
}
