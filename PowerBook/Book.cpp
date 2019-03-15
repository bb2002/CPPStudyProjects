#include "pch.h"
#include <iostream>

using namespace std;

class Book {
private:
	char* title;
	char* isbn;
	int price;

public:
	Book(const char* title, const char* isbn, int price) : price(price) {
		this->title = new char[50];
		this->isbn = new char[50];

		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}

	void show() {
		cout << "���� : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "���� : " << price << endl;
	}
};

class EBook : public Book {
private:
	char* secKey;

public:
	EBook(const char* title, const char* isbn, int price, const char* key) : Book(title, isbn, price) {
		this->secKey = new char[50];
		strcpy(this->secKey, key);
	}

	void showEBook() {
		show();
		cout << "Ű : " << secKey << endl;
	}
};

int main() {
	Book book("����Ʈ �� ���̺� 16", "123456789", 8000);
	book.show();

	EBook ebook("������̺� ������~ ������~", "123456789", 18500, "JKASDKJRY");
	ebook.showEBook();
}