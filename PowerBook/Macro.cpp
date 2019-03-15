#include "pch.h"

#define PRINT_NUM(x) printf("%d ", x)
#define PRINT_NUM3(x) printf("%d\n", x);\
					printf("%d\n", x+1);\
					printf("%d\n", x+2)\


#define SWAP(a,b,type) { \
	type temp; \
	temp = a; \
	a = b; \
	b = temp; \
}

#define MUL(a, b) ((a) * (b))

#define ADD(a, b) ((a) + (b))

#define CONCAT(a, b) a##b

#define EXEC(x) hello##x()

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

void hello1() {
	printf("hello 1\n");
}


void hello2() {
	printf("hello 2\n");
}

int main() {
	std::cout << MIN(10, 20) << std::endl;
	std::cout << MAX(4 & 4, 2 & 2) << std::endl;
}