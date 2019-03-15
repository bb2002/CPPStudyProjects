#pragma once
template <typename ARR_TYPE>
class BoundCheckArray {
private:
	ARR_TYPE* arr;
	int len;

	BoundCheckArray(const BoundCheckArray& other) {};
	void operator=(const BoundCheckArray& other) {};

public:
	BoundCheckArray(int len);

	ARR_TYPE& operator[](int idx);

	ARR_TYPE& operator[](int idx) const;

	int size() const {
		return this->len;
	}

	void show() const;

	~BoundCheckArray() {
		delete[] arr;
	}
};