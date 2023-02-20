#pragma once
#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point (const int &xpos, const int &ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};