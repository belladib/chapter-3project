// chapter 3project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


using namespace std;



int main()
{
	double oneS, oneB, oneF, recipe, amtS, amtB, amtF;
	double sugar(1.5), butter(1), flour(2.75);
	double cookies;

	cout << "How many cookies would you like to make?\n";
	cin >> cookies;

	oneS = sugar / 48;
	oneB = butter / 48;
	oneF = flour / 48;

	amtS = oneS * cookies;
	amtB = oneB * cookies;
	amtF = oneF * cookies;

	cout << "\nin order to make " << cookies << " cookies, you would need\n\n\n"
		<< left << fixed << showpoint << setprecision(2) << setw(8) << amtS << " cups of sugar\n"
		<< setw(8) << amtB << " cups of butter\n"
		<< setw(8) << amtF << " cups of flour\n";


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
