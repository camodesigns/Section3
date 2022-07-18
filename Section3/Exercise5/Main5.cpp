/*Exercise 5 - Arrays
Create an array of whatever size you want. Let the user input as many numbers as they want and populate the array with them. If they enter any invalid input, output the whole array of numbers and the sum of them all and the total numbers they input.

If the user exceeds the size of your array, tell them about it and then output the information.
*/
#include<iostream>
using namespace std;
int main()
{
	int Addition=0,IntegerCounter=0;
	int Array[6];
	int ArrSize = sizeof(Array) / sizeof(Array[0]);
	for (int i = 0; i < ArrSize; i++)
	{
		int Number;
		cout << "Enter a number if you want:"<<endl ;
		cin >> Number;
		IntegerCounter += 1;
		if (!cin.good() ) {
			cout << "Sorry, invalid Input! " << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			IntegerCounter -= 1;
			break;
		}
		Addition += Number;
	}	
	if (IntegerCounter == ArrSize) {
		cout << "Sr. you exced the Array size" << ArrSize << endl;
	}
	cout << "Total numbers entered:" << IntegerCounter << endl;
	cout << "Total sum of numbers entered:" << Addition << endl;
	return 0;

}