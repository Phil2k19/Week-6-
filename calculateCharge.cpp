/* 2kg or less = $3.10 for	500 MILES SHIPPED	Max is 2000
2 - 6kg =	$4.20
6 - 10kg = $5.20
over 10 kg = $6.40
*/
#include <iostream>
#include <iomanip>
using namespace std;
double calculateCharge(double Distance, double KiloG)
{
	double TotalCharges;
	cout << fixed << setprecision(2);
	if (KiloG <= 2)
		TotalCharges = 3.10 * (Distance / 500);
	else if (KiloG > 2 && KiloG <= 6)
		TotalCharges = 4.20 * (Distance / 500);
	else if (KiloG > 6 && KiloG <= 10)
		TotalCharges = 5.30 * (Distance / 500);
	else
		TotalCharges = 6.30 * (Distance / 500);
	return TotalCharges;
}
