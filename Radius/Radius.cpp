#include <iostream>
using namespace std;

int main()
{
	double radius;
	double area;

	// Step 1: Read in radius
	radius = 20;

	// Step 2: Compute Area
	area = radius * radius * 3.14159;

	// Step 3: Display the Area
	cout << "The Area is " << area << endl;

	return 0;
}