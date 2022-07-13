#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	cout << "Multiples of 10 " << "[";
	for (int i = 0; i < 101; i++) {
		if (i % 10 == 0) {
			cout << i<<",";	
		}
	}
	cout << "]";
	return 0;
}