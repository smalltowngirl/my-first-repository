#include <stdio.h>

int main() { 

	int c,d,t;
	
	c = 10;
	d = 20;

	t = c;
	c = d;
	d = t;

	printf("%d\n",c);
	printf("%d\n",d);
}