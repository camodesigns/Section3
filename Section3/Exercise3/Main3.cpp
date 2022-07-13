/*Exercise 3 - Multiples of 10
Write a program that will output multiples of 10 between 1 and 100. Use a for-loop that goes through numbers 1-100.	

At the end of the program, output the sum of all the numbers that were NOT multiples of 10. Do NOT use an else statement for this program and do NOT use more than one loop.
*/
#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	cout<<"Multiples of 10 " << "[";
	for (int i = 0; i < 101; i++) {
		if (i % 10 == 0) {
			int n = 0;
			int *Multiples= new int[n];
			for (int o = 0; o < n+1; o++) {
				Multiples[o] = i;
				cout << Multiples[o] <<",";
			}
			n += 1;
		}
		else if(i%10>0.0) {
			sum += i+1;
		}
	}
	cout << "]";
	cout << endl;
	cout << "The sumatory of the numbers not multiples of 10 is equal:" << sum << endl;

}