#include <iostream>
using namespace std;

void SwapByRef2(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
	//참조자는 main에 직접 찾아가 수정, 메모리 적게 씀
	//하지만 NULL불가, 반드시 초기화
}

int main() {
	int val1 = 10;
	int val2 = 20;
	SwapByRef2(val1, val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	
	return 0;
}