/*Exercise 6 - Arrays improved!
Rewrite the previous exercise, but this time only exit the application if the user inputs the ENTER key or when they exceed the max amount of numbers.

If the user enters any invalid input, tell them that they’ve entered an invalid input and that they must enter a number.

If the user just hits ENTER when asked for a number, output the same information as the previous exercise. 

Hint: You’ll need to look up stuff here, too. How would you detect invalid input and an enter key press.

*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int Number, Addition = 0, IntegerCounter = 0;
	int Array[6];
	int ArrSize = sizeof(Array) / sizeof(Array[0]);
	for (int i = 0; i < ArrSize; i++)
	{
		cout << "Enter a number if you want or press Enter to finish:" << endl;
		if (cin.peek() == '\n')break;
		cin >> Number;
		IntegerCounter += 1;
		if (!cin.good())
		{
			cout << "Sorry, invalid Input! " << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
			IntegerCounter -= 1;
			cout << "Please enter a valid number or press Enter to finish!" << endl;
			Number = cin.peek();	
		}
		Addition += Number;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if (IntegerCounter == ArrSize) 
	{
		cout << "Sr. you exced the Array size" << ArrSize << endl;
	}
	cout << "Total numbers entered:" << IntegerCounter << endl;
	cout << "Total sum of numbers entered:" << Addition << endl;
	return 0;

}