#pragma once
namespace CarConst {
	enum
	{
		ID_LEN	= 20,
		MAX_SPD = 200,
		FUEL_STEP	= 2,
		ACC_STEP	= 10,
		BRK_STEP	= 10
	};
}

using namespace std;

class Car {
private:
	char PlayerID[CarConst::ID_LEN];
	int FuelGauge;
	int CurrentSpeed;

public:
	void InitMembers(const char *id, int fuel);
	inline void ShowCarStatus() {
		cout << "������ : " << PlayerID << endl;
		cout << "���ᷮ : " << FuelGauge << endl;
		cout << "���ӵ� : " << CurrentSpeed << endl;
	};
	void Accel();
	inline void Break()
	{
		if (CurrentSpeed < CarConst::BRK_STEP) {
			CurrentSpeed = 0;
			return;
		}

		CurrentSpeed -= CarConst::BRK_STEP;
	}
	
};