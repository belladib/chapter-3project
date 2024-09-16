// chapter 3project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;




int main()
{
    double principal, rate, compound, total, interest;

    cout << "what is your current principal (account balance)?\n";
    cin >> principal;

    cout << "\nwhat is your current interest rate as a decimal?\n";
    cin >> rate;

    cout << "\nhow many times is your interest compounded over 12 months?\n"; 
    cin >> compound;

    total = principal * pow((1 + rate / compound), compound);

    interest = total - principal;

    cout << "\nyour total amount of interest earned is " << fixed << showpoint << setprecision(2) << interest
        << " and your total balance with interest is " << total << endl;





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
