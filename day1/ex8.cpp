#include <iostream>

namespace Parent {
	int num = 10;
	namespace Sub {
		int num = 5;
		void f() {
			std::cout << num;
		}
	}
}

int main() {
	Parent::Sub::f();
}