#include <iostream>

namespace BestComlmpl {
	void SimpleFunc(void);
}
namespace ProgComlmpl {
	void SimpleFunc(void);
}

int main() {
	BestComlmpl::SimpleFunc();
	ProgComlmpl::SimpleFunc();
	return 0;
}

void BestComlmpl ::SimpleFunc(void) {
	std::cout<< "BestCom�� ������ �Լ�" << std::endl;
}
void ProgComlmpl::SimpleFunc(void) {
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}