#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	cout<<"Multiples of 10 " << "[";
	for (int i = 0; i < 101; i++) {
		if (i % 10 == 0) {
			int n = 0;
			int *Multiplos= new int[n];
			for (int o = 0; o < n+1; o++) {
				Multiplos[o] = i;
				cout << Multiplos[o] <<",";
				
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