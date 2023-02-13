#include <iostream>
using namespace std;
#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car {
	//멤버 변수
	char ownerID[ID_LEN];
	int fuel;
	int curSpeed;

	//멤버 함수
	void ShowCarState() {
		cout << "소유자ID: " << ownerID << endl;
		cout << "연료량: " << fuel << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}
	void Accel(){
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
	void Break() {
		if (curSpeed < BRK_STEP) {
			curSpeed = 0;
			return;
		}
		curSpeed -= BRK_STEP;
	}
};

int main() {
	Car car1 = { "car1", 100, 0 };
	car1.ShowCarState();

	return 0;
}