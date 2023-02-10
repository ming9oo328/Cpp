#include <iostream>
using namespace std;

int Adder(const int& num1, const int& num2) {
	return num1 + num2;
}

int main() {
	int result = Adder(10, 20);
	cout << result << endl;

	return 0;
}