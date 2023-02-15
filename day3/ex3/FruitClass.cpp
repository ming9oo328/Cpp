#include <iostream>
using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void initMembers(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money) {
		int buyNum = money / APPLE_PRICE;
		numOfApples -= buyNum;
		myMoney += money;
		return  buyNum;
	}
	void ShowSaleResult() {
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer {
	int myMoney;
	int numOfApples;

public:
	void initMembers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money) {
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() {
		cout << "������ ��� ����: " << numOfApples << endl;
		cout << "�ܾ�: " << myMoney << endl << endl;
	}
};

int main() {
	FruitSeller seller;
	seller.initMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.initMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ��� ��Ȳ" << endl;
	seller.ShowSaleResult();
	cout << "���� ������ ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;

}