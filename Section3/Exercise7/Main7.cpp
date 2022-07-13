/*Exercise 7 - Lottery
Write a program that will simulate the lottery.Create two arrays of 5 integers.The first array should be populated with 5 random numbers from 1 - 20. For the second array, ask the user to input 5 numbers from 1 - 20. Make sure to handle invalid input and make sure numbers are not repeated.
For each number that is matched in the same index, give the user $10.*/
#include<iostream>
#include <cstdlib>    
#include <ctime>  
using namespace std;
int main()
{
	int ArrayLotery[5];
	int ArrayUser[5];
	int ArrLoterySize = sizeof(ArrayLotery) / sizeof(ArrayLotery[0]);
	int ArrUserSize = sizeof(ArrayUser) / sizeof(ArrayUser[0]);

	cout << "Welcome to the lottery!" << endl;
	int UserValues, entry = 1;

	for (int UserSpace = 0; UserSpace < ArrUserSize; UserSpace++)
	{
		cout << "Please enter your entry number #" << entry << "(1-20)" << endl;
		entry += 1;
		cin >> UserValues;

		if ((!cin.good()) || UserValues == ArrayUser[UserSpace - 1] || UserValues < 1 || UserValues>20) {
			cout << "Sorry, invalid Input! or equal number  " << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
			entry -= 1;
			UserSpace -= 1;
		}
		ArrayUser[UserSpace] = UserValues;
	}
	cout << "Lottery results: " << endl;
	for (int LoterySpace = 0; LoterySpace < ArrLoterySize; LoterySpace++) 
	{
		int LoteryValue = 1 + rand() % (21 -1);
		cout << LoteryValue<<",";
		ArrayLotery[LoterySpace] = LoteryValue;

	}

	int Profits=0;
	for (int Result = 0; Result < 6; Result++) 
	{
		if (ArrayLotery[Result] == ArrayUser[Result]) {
			Profits += 10;
		}
	}
	cout << endl;
	cout << "Your winnings: " << Profits << endl;

}