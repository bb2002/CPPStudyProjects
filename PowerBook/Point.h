#pragma once
class Point {
private:
	int x, y;

public:
	bool InitMember(int x, int y);
	int GetX() const {
		return x;
	}

	int GetY() const {
		return y;
	}

	bool SetX(int newX);
	bool SetY(int newY);
};