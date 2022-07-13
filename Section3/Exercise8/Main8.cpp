/*Exercise 8 - Easier Lottery
Rewrite the previous lottery but now instead of getting $10 for each number matched in the exact same index, give the user $10 for any number that matches anywhere in the sequence.
*/
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
		for (int pruebaU = 0; pruebaU < ArrUserSize; pruebaU++)
		{
			if (ArrayUser[pruebaU] == UserValues) {
				cout << "Sorry equal number" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				 UserSpace-= 1;
				 entry -= 1;
			}
		}

		if ((!cin.good()) || UserValues < 1 || UserValues>20) {
			cout << "Sorry, invalid Input! or equal number  " << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
			entry -= 1;
			UserSpace -= 1;
		}
		ArrayUser[UserSpace] = UserValues;
	}
	cout << "Lottery results: " ;
	srand(time(0));
	for (int LoterySpace = 0; LoterySpace < ArrLoterySize; LoterySpace++)
	{
		int LoteryValue = rand() % 20;
		cout << LoteryValue << ",";
		ArrayLotery[LoterySpace] = LoteryValue;

		for (int prueba = 0; prueba < ArrLoterySize; prueba++)
		{
			if (ArrayLotery[prueba]==LoteryValue) {
				prueba -= 1;
				int LoteryValue = rand() % 20;
				ArrayLotery[LoterySpace] = LoteryValue;
			}
		}
	
	}

	int Profits = 0;
	for (int Result = 0; Result < 6; Result++)
	{
		if (ArrayLotery[Result] == ArrayUser[Result]) {
			Profits+10;
		}
	}
	cout << endl;
	cout << "Your winnings: " << Profits << endl;

}