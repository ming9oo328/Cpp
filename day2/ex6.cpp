#include <iostream>
using namespace std;

int& RefFunc(int& ref) {
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int num2 = RefFunc(num1);

	num1 += 1;
	num2 += 100;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}