#include "pch.h"
#include "TemplateArray.h"

template <typename ARR_TYPE>
BoundCheckArray<ARR_TYPE>::BoundCheckArray(int len) : len(len) {
	this->arr = new ARR_TYPE[len];
}

template <typename ARR_TYPE>
ARR_TYPE& BoundCheckArray<ARR_TYPE>::operator[](int idx) {
	if (idx < 0 || idx >= len) {
		cout << "Index out of range." << endl;
		exit(0);
	}
	else {
		return this->arr[idx];
	}
}

template <typename ARR_TYPE>
ARR_TYPE& BoundCheckArray<ARR_TYPE>::operator[](int idx) const {
	if (idx < 0 || idx >= len) {
		cout << "Index out of range." << endl;
		exit(0);
	}
	else {
		return this->arr[idx];
	}
}

template <typename ARR_TYPE>
void BoundCheckArray<ARR_TYPE>::show() const {
	for (int i = 0; i < len; i++) {
		cout << i << " : " << this->arr[i] << endl;
	}
}