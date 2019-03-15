#pragma once

template <typename T>
class SmartPoint {
private:
	T* ptr;

public:
	SmartPoint(T* ptr);

	T* operator->() const;

	T& operator*() const;

	~SmartPoint() {
		cout << "DELTE!!!" << endl;
		delete ptr;
	}
};