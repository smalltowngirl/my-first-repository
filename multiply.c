d#include <stdio.h>

int main() {
	printf("hello world\n");
	mult(5, 6);
}

void mult(int x, int y) {
	int z = x * y;
	printf("%d\n", z);
}