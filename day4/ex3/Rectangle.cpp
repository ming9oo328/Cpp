#include <iostream>
#include "Point.h"
using namespace std;

class Rectangle {
private:
	Point upLeft;
	Point lowRight;
public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};

bool Rectangle::InitMembers(const Point& ul, const Point& lr) {
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
		cout << "�߸��� ���� ����" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const {
	cout << "�� ���: " << "[" << upLeft.GetX() << ",";
	cout << upLeft.GetY() << "]" << endl;
	cout << "�� �ϴ�: " << "[" << lowRight.GetX() << ",";
	cout << lowRight.GetY() << "]" << endl;
}