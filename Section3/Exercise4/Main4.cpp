/*Exercise 4 - More Multiples of 10
Rewrite the previous program, but this time loop just outputs the multiples of 10, no need to output the sum of the rest of the numbers.

This time you can only use one for loop and it should not loop more than 10 times.
*/
#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	cout << "Multiples of 10 " << "[";
	for (int i = 10; i < 101; i+=10) 
	{
		if (i % 10 == 0) 
		{
			cout << i<<",";	
		}
	}
	cout << "]";
	return 0;
}