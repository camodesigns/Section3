/*Exercise 8 - Easier Lottery
Rewrite the previous lottery but now instead of getting $10 for each number matched in the exact same index, give the user $10 for any number that matches anywhere in the sequence.
*/
#include<iostream>
#include <cstdlib>    
#include <ctime>  
using namespace std;


bool repeatValues(int arrRepeat[], int size) {
	for (int pos = 1; pos < size; pos++) 
	{
		for(int posL=0;posL<pos;posL++)
		{
			if (arrRepeat[pos] == arrRepeat[posL]) 
			{
				return true;
			}
		}
	}
	return false;
}
bool profits(int list[], int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (list[i] == number) return true;
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
		int entry = UserSpace+1;
		cout << "Please enter your entry number #" << entry << "(1-20)" << endl;
		cin >> UserValues;
		for (int pruebaU = 0; pruebaU < ArrUserSize; pruebaU++)
		{
			if (ArrayUser[pruebaU] == UserValues)
			{
				cout << "Sorry equal number" << endl;
				cin.clear();
				cin.ignore(1000, '\n');
				UserSpace -= 1;
			}
		}

		if ((!cin.good()) || UserValues < 1 || UserValues>20) 
		{
			cout << "Sorry, invalid Input! or equal number  " << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
			UserSpace -= 1;
		}
		ArrayUser[UserSpace] = UserValues;
	}
	
	srand(time(0));
		
		do 
		{
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
	int Profits = 0;
	for (int Winn = 0; Winn < 5; Winn++)
	{
		if (profits(ArrayLotery, ArrLoterySize, ArrayUser[Winn])) 
		{
			Profits += 10;
		};
	}
	cout << endl;
	cout << "Your winnings: " << Profits << endl;

}
