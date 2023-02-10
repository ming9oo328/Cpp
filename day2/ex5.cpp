#include <iostream>
using namespace std;

int& RefFunc(int& ref) {
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int& num2 = RefFunc(num1); //num1 = 2, num2 = 2

	num1++; //num1 = 3, num2 = 2
	num2++; //num1 = 3, num2 = 3
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num1 << endl;

	return 0;
}