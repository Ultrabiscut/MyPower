#include <iostream>
#include <iomanip>
using namespace std;

/*
Program: MyPower
Author: Tyler Timmins
Class: ITSE 1307 2002
Description: Write a value-returning funciton that raises a number
	to a certian power and displays the answer.
*/

//function prototypes
double myPower(double dNum1, int iNum2);

int main()
{
	//declare variables
	double dBase;
	int iPower;
	double dAnswer;

	//input
	cout << "Enter base: ";
	cin >> dBase;

	cout << "Enter power: ";
	cin >> iPower;

	//call on function
	dAnswer = myPower(dBase, iPower);

	//output
	cout << setprecision(8);
	cout << "The answer is: " << dAnswer << endl;

	return 0;
}

double myPower(double dNum1, int iNum2)
{
	//declare variables
	double dTotal = 1;

	//loop for raising power
	for (int x = 0; x < iNum2; x++)
	{
		//accumulate
		dTotal = dTotal * dNum1;
	}
	
	return dTotal;
}