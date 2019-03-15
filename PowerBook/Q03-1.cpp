#include "pch.h"

struct Point
{
	int xPos;
	int yPos;

	void MovePos(int x, int y) {
		this->xPos += x;
		this->yPos += y;
	}

	void AddPoint(const Point& pos) {
		this->xPos += pos.xPos;
		this->yPos += pos.yPos;
	}

	void ShowPosition() {
		std::cout << "x:" << this->xPos << ", y:" << this->yPos << std::endl;
	}
};

int main() {
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
}