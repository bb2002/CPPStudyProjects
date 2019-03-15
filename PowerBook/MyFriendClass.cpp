#include "pch.h"
#include <iostream>

using namespace std;

class Girl;

class Boy {
private:
	int height;
	friend class Girl;

public:
	Boy(int h) : height(h) {}

	void ShorGirlFriend(const Girl& girl);
};

class Girl {
private:
	char phNum[20];

public:
	Girl(const char* phNum) {
		strcpy(this->phNum, phNum);
	}

	void ShowBoyFriend(const Boy& );
	friend class Boy;
};


void Girl::ShowBoyFriend(const Boy& boy) {
	cout << "그녀의 남친 : " << boy.height << endl;;
}

void Boy::ShorGirlFriend(const Girl& girl) {
	cout << "여친 아.. " << girl.phNum << endl;
}

int main() {
	Boy boy(170);
	Girl girl("1234-5678");
	boy.ShorGirlFriend(girl);
	girl.ShowBoyFriend(boy);
}