#include <iostream>
using namespace std;

int Plus(int& num) {
	num += 1;
	return num;
}

int Minus(int& num) {
	num *= (-1);
	return num;
}

int main() {
	int num1 = 10;
	int num2 = 20;

	cout<< Plus(num1)<< endl;
	cout << Minus(num2) << endl;
}