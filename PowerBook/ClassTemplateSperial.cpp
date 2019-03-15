#include "pch.h"

template<typename T>
class Point {
	T x, y;

public:
	Point(T x = 0, T y = 0) : x(x), y(y) {}

	void show() const {
		cout << x << ", " << y << endl;
	}
};

template<typename T>
class DataWapper {
private:
	T mData;

public:
	DataWapper(T data) : mData(data) {}

	void show() const {
		cout << "Data : " << mData << endl;
	}
};

template<>
class DataWapper<char*> {
private:
	char* mData;

public:
	DataWapper(const char* data) {
		this->mData = new char[strlen(data) + 1];
		strcpy(this->mData, data);
	}

	void show() const {
		cout << "str : " << this->mData << endl;
		cout << "len : " << strlen(this->mData) << endl;
	}

	~DataWapper() {
		delete[] this->mData;
	}
};

template<>
class DataWapper<Point<int>> {
private:
	Point<int> mData;

public:
	DataWapper(int x, int y) : mData(x, y) {}

	void show() const {
		this->mData.show();
	}
};

int main() {
	DataWapper<int> intWarp(10);
	intWarp.show();

	DataWapper<char*> strWarp("Hikarino mukooe!");
	strWarp.show();

	DataWapper<Point<int>> pWarp(10, 50);
	pWarp.show();
}