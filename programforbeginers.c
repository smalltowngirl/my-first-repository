#include <stdio.h>

int add(int x, int y) {
	int z = x + y;
	return z;
}
int main() {
	int x, y;
	scanf("%d%d", &x, &y); 
	int z=add(x, y);	
	printf("%d\n",z);
}
	