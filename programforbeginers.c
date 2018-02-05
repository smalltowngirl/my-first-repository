#include <stdio.h>

int add(int x, int y) {
	int z = x + y;
	return z;
}
int main() {
	int z=add(2,5);	
	printf("%d\n",z);
}
	