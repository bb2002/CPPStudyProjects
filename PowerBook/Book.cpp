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
		cout << "제목 : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "가격 : " << price << endl;
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
		cout << "키 : " << secKey << endl;
	}
};

int main() {
	Book book("데이트 어 라이브 16", "123456789", 8000);
	book.show();

	EBook ebook("러브라이브 선샤인~ 오버더~", "123456789", 18500, "JKASDKJRY");
	ebook.showEBook();
}