#include "pch.h"

class Gun {
private:
	int bullet;

public:
	Gun(int bullet) : bullet(bullet) {}

	void shot() {
		cout << "BBANG!" << endl;
		--bullet;
	}

	int getBullets() {
		return bullet;
	}
};

class Police {
private:
	int handcuffs;
	Gun* piston;

public:
	Police(int bullets, int bcff) : handcuffs(bcff) {
		if (bullets > 0) {
			piston = new Gun(bullets);
		}
		else {
			piston = NULL;
		}
	}

	Police(const Police& other) {
		handcuffs = other.handcuffs;
		if (other.piston != NULL) {
			piston = new Gun(other.piston->getBullets());
		}
	}

	Police& operator=(const Police& other) {
		handcuffs = other.handcuffs;

		delete piston;
		if (other.piston != NULL) {
			piston = new Gun(other.piston->getBullets());
		}

		return *this;
	}

	void show() {
		cout << "POLICE!! " << handcuffs << " / " << piston->getBullets() << "s" << endl;
	}
};

int main() {
	Police a = Police(100, 10);
	Police b = Police(20, 10);

	a = b;
	a.show();
	b.show();

	Police c = a;
	c.show();
}