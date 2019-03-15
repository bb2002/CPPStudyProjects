#include "pch.h"
#include "SmartPoint.h"

template <typename T>
SmartPoint<T>::SmartPoint(T* ptr) : ptr(ptr) {

}

template <typename T>
T* SmartPoint<T>::operator->() const {
	return this->ptr;
}

template <typename T>
T& SmartPoint<T>::operator*() const {
	return *this->ptr;
}

