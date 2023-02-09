#include <iostream>

namespace BestComlmpl {
	void SimpleFunc(void);
}
namespace BestComlmpl {
	void PrettyFunc(void);
}
namespace ProgComlmpl {
	void SimpleFunc(void);
}

int main() {
	BestComlmpl::SimpleFunc();
	return 0;
}
void BestComlmpl::SimpleFunc() {
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	ProgComlmpl::SimpleFunc();
}
void BestComlmpl::PrettyFunc() {
	std::cout << "so pretty!" << std::endl;
}
void ProgComlmpl::SimpleFunc() {
	std::cout << "BestCom이 정의한 함수" << std::endl;
}