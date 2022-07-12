#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int Number;
	cout << " Please enter a number between 1-10 please" << endl;
	cin >> Number;
	int Contador = 0;
	while (Number > 10 || Number < 1 || (!(cin >> Number))) {
		cout << "Invalid Input, try again! " << endl;;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Please enter a number between 1-10:" << endl;
		cin >> Number;
		Contador += 1;
		cout << Contador << endl;
		if (Contador >5) {
			cout<<"No more think loser"<<endl;
		}
		cout << "Your Number is:" << Number << endl;
	}
	return 0;
}