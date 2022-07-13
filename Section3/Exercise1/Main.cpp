/*Exercise 1 - Input Validation
Write a program that will ask the user to enter a number between 1-10. Keep asking the same question until a valid input is given. Add an annoyed comment if they take more than a certain number of tries.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int Number;
	cout << " Please enter a number between 1-10 please" << endl;
	cin >> Number;
	int Counter = 0;
	while (Number > 10 || Number < 1 || (!(cin >> Number))) 
	{
		cout << "Invalid Input, try again! " << endl;;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please enter a number between 1-10:" << endl;
		cin >> Number;

		Counter += 1;
		cout <<Counter << endl;
		if (
			Counter >5) {
			cout<<"No more think loser"<<endl;
		}
		cout << "Your Number is:" << Number << endl;
	}
	return 0;
}