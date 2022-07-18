/*Exercise 2 - More Input Validation
Rewrite the true or false quiz you did in the previous section. This time, instead of asking for 1 or 2 as inputs, ask them to answer T or F. If they enter invalid input, give them a couple of tries before you automatically fail them.
*/

#include<iostream>
using namespace std;
int main() {
	char Answer1, Answer2, Answer3;
	cout << "Welcome to your quiz!" << endl;
	cout << "F-False" << endl;
	cout << "T-True" << endl;
	int Counter = 0;
	int FaultCounter = 0,FaultCounter2 = 0, FaultCounter3 = 0;
	float Score = 0.0f;
	cout << "Question 1(1pt)" << endl;
	cout << "1. The meat is fruit?" << endl;
	cin >> Answer1;
	while(!cin.good() || Answer1 != 'T' && Answer1 != 'F') 
	{
		if(FaultCounter <5)
		{
			cout << "Invalid Input, try again! " << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please enter your answer again" << endl;
		cin >> Answer1;
		FaultCounter += 1;
		cout << FaultCounter << endl;
		}else
		{
			cout << "No more intents" << endl;
			return 0;
		}
		if (Answer1 == 'T')
		{
		cout << "WRONG! How could you miss that?" << endl;
		}
		else if(Answer1=='F')
		{
		cout << "CORRECT!Looks like you have common sense." << endl;
		Score += 1.0f;
		Counter += 1;
		}
	}
	cout << "Question 2(2pts)" << endl;
	cout << "2.The human is composed for 80% water?" << endl;
	cin >> Answer2;
	while (cin.good() || Answer2 != 'T' && Answer2 != 'F')
	{
		if (FaultCounter2 < 5)
		{
			cout << "Invalid Input, try again! " << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please enter your answer again" << endl;
			cin >> Answer2;
			FaultCounter2 += 1;
			cout << FaultCounter2 << endl;
		}
		else
		{
			cout << "No more intents" << endl;
			return 0;
		}
		if (Answer2 == 'F')
		{
			cout << "You need Study more!" << endl;
		}
		else if (Answer2 == 'T')
		{
			cout << "CORRECT!Ausome!" << endl;
			Score += 2.0f;
			Counter += 1;
		}
	}
	cout << "Question 3(2pts)" << endl;
	cout << "3. Teravision Games is a Shoes Company" << endl;
	cin >> Answer3;
	while (!cin.good() || Answer3 != 'T' && Answer3 != 'F')
	{
		if (FaultCounter3 < 5) 
		{
			cout << "Invalid Input, try again! " << endl;
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please enter your answer again" << endl;
			cin >> Answer3;
			FaultCounter3 += 1;
			cout << FaultCounter3 << endl;
		}
		else
		{
			cout << "No more intents" << endl;
			return 0;
		}
		if (Answer3 == 'F')
		{
			cout << "WRONG! Really Niga" << endl;
		}
		else if (Answer3 == 'T')
		{
			cout << "CORRECT!You know about good services!" << endl;
			Score += 2.0f;
			Counter += 1;
		}
	}
	cout << "You have " << Counter << " correct answers, You have " << Score << " of final grade" << endl;
}
