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
namespace All = Parent::Sub;

int main() {
	Parent::Sub::f();
	All::f();
}