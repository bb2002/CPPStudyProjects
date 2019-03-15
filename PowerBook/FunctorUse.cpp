#include "pch.h"

class SortRule {
public:
	virtual bool operator()(int a, int b) const = 0;
};

class AscendingSort : public SortRule {
public:
	bool operator()(int a, int b) const {
		if (a > b) {
			return true;
		}
		else {
			return false;
		}
	}
};

class DesendingSort : public SortRule {
public:
	bool operator() (int a, int b) const {
		if (a > b) {
			return false;
		}
		else {
			return true;
		}
	}
};

class DatStorage {
private:
	int* arr;
	int idx;
	const int MAX_LEN;

public:
	DatStorage(int len) : idx(0), MAX_LEN(len) {
		this->arr = new int[MAX_LEN];
	}

	void add(int data) {
		if (MAX_LEN > idx) {
			arr[idx++] = data;
		}
	}

	void show() {
		for (int i = 0; i < idx; i++) {
			cout << arr[i] << endl;
		}

		cout << endl;
	}

	void sort(const SortRule& rule) {
		for (int i = 0; i < (idx - 1); i++) {
			for (int j = 0; j < (idx - 1); j++) {
				if (rule(arr[j], arr[j + 1])) {
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}
	}
};

int main() {
	DatStorage data(10);
	data.add(567);
	data.add(5737);
	data.add(7);
	data.add(5676327);
	data.add(552);
	data.add(9423);
	data.add(1042);
	data.add(2048);
	data.add(350);
	data.add(47367);

	data.sort(AscendingSort());
	data.show();

	cout << "###########################" << endl;

	data.sort(DesendingSort());
	data.show();
}