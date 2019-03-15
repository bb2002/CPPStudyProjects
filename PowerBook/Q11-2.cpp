#include "pch.h"

class Book {
protected:
	char* title;
	char* isbn;
	int price;

public:
	Book(const char* title, const char* isbn, int price) : price(price) {
		this->title = new char[strlen(title) + 1];
		this->isbn = new char[strlen(isbn) + 1];

		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}

	Book(const Book& other) : price(other.price) {
		this->title = new char[strlen(other.title) + 1];
		this->isbn = new char[strlen(other.isbn) + 1];

		strcpy(this->title, other.title);
		strcpy(this->isbn, other.isbn);
	}

	Book& operator=(const Book& other) {
		this->price = other.price;

		// 기존 데이터 삭제
		delete[] this->title;
		delete[] this->isbn;

		// Malloc
		this->title = new char[strlen(other.title) + 1];
		this->isbn = new char[strlen(other.isbn) + 1];
		strcpy(this->title, other.title);
		strcpy(this->isbn, other.isbn);

		return *this;
	}

	void show() const {
		cout << "책 제목 : " << this->title << endl;
		cout << "책 아이디 : " << this->isbn << endl;
		cout << "책 가격 : " << this->price << endl;
	}
};

class EBook : public Book {
private:
	char* secKey;

public:
	EBook(const char* title, const char* isbn, const char* secKey, int price) :
		Book(title, isbn, price) {
		this->secKey = new char[strlen(secKey) + 1];
		strcpy(this->secKey, secKey);
	}

	EBook(const EBook& other) : Book(other) {
		this->secKey = new char[strlen(other.secKey) + 1];
		strcpy(this->secKey, other.secKey);
	}

	EBook& operator=(const EBook& other) {
		Book::operator=(other);

		delete[] this->secKey;
		this->secKey = new char[strlen(other.secKey) + 1];
		strcpy(this->secKey, other.secKey);

		return *this;
	}

	void show() const {
		Book::show();
		cout << "책 보안 : " << this->secKey << endl;
	}
};

int main() {
	Book datealive = Book("데이트 어 라이브", "123456789", 8500);
	Book neyogi = Book("내 여동생이 이렇게 귀여울리가 없어", "1ㅇ243576", 7000);
	Book neyogi2 = neyogi;

	datealive.show();
	neyogi.show();
	neyogi2.show();

	EBook sao1 = EBook("소드 아트 온라인", "ㅇ5ㅁ7ㅅ3ㄹ4ㅁㄴㅇ3", "P@ssw0rd", 8000);
	EBook neru = EBook("잠", "ㅁㄴㅇㄻㄴㅇㄹ", "ㅁㄴㅇㄻㄴㅇㄹ", 15000);
	EBook sao2 = sao1;
	sao1 = neru;

	sao1.show();
	sao2.show();
	neru.show();
	
}