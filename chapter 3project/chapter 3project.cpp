// chapter 3project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double num1, num2, answer;
    char ch;
    
    //user creates their own numbers because i don't know how to create random numbers yet
    cout << "enter a random number\n";
    cin >> num1;
    
    cout << "\nenter another random number\n";
    cin >> num2;
    
    answer = num1 + num2;
    
    cout <<'\n' << num1 << " + " << num2 << " = \n\n";
    
    
    cout << "please do the math and when you are ready press enter to see the answer\n\n";
    cin.ignore(20, '\n');
    cin.get(ch);
    
     
    cout << "the answer is " << answer;

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
