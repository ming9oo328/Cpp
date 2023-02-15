#include <iostream>
using namespace std;

void MyFunc() {
	cout << "MyFunc() called" << endl;
}
void MyFunc(char c) {
	cout << "MyFunc(char c) called" << endl;
}
void MyFunc(int a, int b) {
	cout << "MyFunc(int a, int b) called" << endl;
}

int main() {
	MyFunc();
	MyFunc(s);
	MyFunc(3, 4);

	return 0;
}