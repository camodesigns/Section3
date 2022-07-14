/*Exercise 7 - Lottery
Write a program that will simulate the lottery.Create two arrays of 5 integers.The first array should be populated with 5 random numbers from 1 - 20. For the second array, ask the user to input 5 numbers from 1 - 20. Make sure to handle invalid input and make sure numbers are not repeated.
For each number that is matched in the same index, give the user $10.*/
#include<iostream>
#include <cstdlib>    
#include <ctime>  
using namespace std;
bool repeatValues(int arrRepeat[], int size) {
	for (int pos = 1; pos < size; pos++)
	{
		for (int posL = 0; posL < pos; posL++)
		{
			if (arrRepeat[pos] == arrRepeat[posL])
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int ArrayLotery[5];
	int ArrayUser[5];
	int ArrLoterySize = sizeof(ArrayLotery) / sizeof(ArrayLotery[0]);
	int ArrUserSize = sizeof(ArrayUser) / sizeof(ArrayUser[0]);

	cout << "Welcome to the lottery!" << endl;


	int UserValues;

	for (int UserSpace = 0; UserSpace < ArrUserSize; UserSpace++)
	{
		int entry = UserSpace + 1;
		cout << "Please enter your entry number #" << entry << "(1-20)" << endl;
		cin >> UserValues;
		for (int pruebaU = 0; pruebaU < ArrUserSize; pruebaU++)
		{
			if (ArrayUser[pruebaU] == UserValues) {
				cout << "Sorry equal number" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				UserSpace -= 1;
			}
		}

		if ((!cin.good()) || UserValues < 1 || UserValues>20) {
			cout << "Sorry, invalid Input! or equal number  " << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
			UserSpace -= 1;
		}
		ArrayUser[UserSpace] = UserValues;
	}

	srand(time(0));

	do {
		for (int Result = 0; Result < ArrLoterySize; Result++)
		{
			int LoteryValue = (rand() % 20) + 1;
			ArrayLotery[Result] = LoteryValue;
		}

	} while (repeatValues(ArrayLotery, ArrLoterySize));
	cout << "Lottery results: ";
	for (int L = 0; L < ArrLoterySize; L++)
	{
		cout << ArrayLotery[L] << ",";
	}

	int Profits=0;
	if (ArrayLotery[0] == ArrayUser[0]) {
		Profits += 10;
	}
	else if (ArrayLotery[1] == ArrayUser[1]) {
		Profits += 10;
	}
	else if (ArrayLotery[2] == ArrayUser[2]) {
		Profits += 10;
	}
	else if (ArrayLotery[3] == ArrayUser[3]) {
		Profits += 10;
	}
	else if (ArrayLotery[4] == ArrayUser[4]) {
		Profits += 10;
	}
	cout << endl;
	cout << "Your winnings: " << Profits << endl;

}