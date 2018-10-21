/*
Program Name: Distance Traveled
Author: B. Bayless
Date last Updated: 10/27/2018
Purpose: Calculate Distance Traaveled based on given speed and time.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int speed;
	int i = 0;
	float hoursTraveled;
	cout << "What is the speed in mph?" << endl;
	cin >> speed;

	cout << "How many hours of travel?" << endl;
	cin >> hoursTraveled;

	cout << "You entered " << speed << "mph and you drove for " << hoursTraveled << " hours." << endl;
	cout << "Here is a break down of how far you traveled by hour." << endl;
	cout << " --------------------" << endl;
	cout << left;
	cout << " " << setw(10) <<  "Hour"  << "Miles" << endl;
	i = 1;

	while ( i <= hoursTraveled) 
	{
		int dist = i * speed;
		cout << " " << setw(10) << i << setw(10) << dist << endl;
		i = i + 1;
	}
	return 0;
}