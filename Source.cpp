Class : COP1334-2924
Assignment: page 400, Problem 6
Due Date: 10-10-18
Description: A program that computes shipping charges based on weight and distance. The main should have a loop to
handle multipe packages until a weight of 0 is entered.
Extra Requirments:
1. double getWeight(void); - this function will prompt the user to enter a weight
( and to enter 0.00 to stop the program) and check that the weight is not < 0 or not exceed 50 Kg.
You will loop twice asking the user to enter in a correct weight: 0 <= weight <= 50.0;

2. double getDistance(void); - this function will prompt the user to enter the distance and check
that the distance is not <= 0 or not exceed 2000 miles. The function will loop twice times asking
for the correct distance: 0 <= distance <= 2000. If the user does not enter a distance in the proper
range the function will:
a) print an error message, and b) return a distance of 0.00;

3. The function calculateCharge takes two arguments: type double for weight, and type double for distance shipped.
The function returns a value of type double which is the shipping charge.
*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
#include "Shipping.h"

int main()
{
	double KiloG = 0, Distance = 0, TotalCharges = 0;
	KiloG = getWeight(KiloG);
	if (KiloG != 0.00)
	{
		Distance = getDistance(Distance);
		TotalCharges = calculateCharge(Distance, KiloG);
		cout << "Total Charges for shipping will be: $" << TotalCharges << endl;
	}
	return 0;
}
