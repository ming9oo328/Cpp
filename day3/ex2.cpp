#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10
/*
namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}
*/

class Car
{
private:
	char ownerID[20];
	int fuel;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(const char* ID, int fuelG) {
	strcpy(ownerID, ID);
	fuel = fuelG;
	curSpeed = 0;
}
void Car::ShowCarState() {
	cout << "소유자ID: " << ownerID << endl;
	cout << "연료량: " << fuel << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel() {
	if (fuel <= 0)
		return;
	else
		fuel -= FUEL_STEP;
	if (curSpeed + ACC_STEP >= MAX_SPD) {
		curSpeed = MAX_SPD;
		return;
	}
	curSpeed += ACC_STEP;
}
void Car::Break() {
	if (curSpeed < BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= BRK_STEP;
}

int main() {
	Car car1;
	car1.InitMembers("car1", 100);
	car1.ShowCarState();
	car1.Accel();
	car1.Accel();
	car1.Accel();
	car1.ShowCarState();


	return 0;
}
#endif