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

		// ���� ������ ����
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
		cout << "å ���� : " << this->title << endl;
		cout << "å ���̵� : " << this->isbn << endl;
		cout << "å ���� : " << this->price << endl;
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
		cout << "å ���� : " << this->secKey << endl;
	}
};

int main() {
	Book datealive = Book("����Ʈ �� ���̺�", "123456789", 8500);
	Book neyogi = Book("�� �������� �̷��� �Ϳ��︮�� ����", "1��243576", 7000);
	Book neyogi2 = neyogi;

	datealive.show();
	neyogi.show();
	neyogi2.show();

	EBook sao1 = EBook("�ҵ� ��Ʈ �¶���", "��5��7��3��4������3", "P@ssw0rd", 8000);
	EBook neru = EBook("��", "��������������", "��������������", 15000);
	EBook sao2 = sao1;
	sao1 = neru;

	sao1.show();
	sao2.show();
	neru.show();
	
}