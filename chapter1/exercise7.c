#include <stdio.h>

int main() {

	int number,first,second,third,forth,fifth,total;

	number = 10000;

	first = number %10;
	number = number /10;

	second = number %10;
	number = number /10;

	third = number %10;
	number = number /10;

	forth = number %10;
	number = number /10;

	fifth = number %10;
	

	total = 10000*first + 1000*second + 100*third + 10*forth + fifth;

	printf("%d\n",total);
}