#include <stdio.h>

int main() {

	int first,second,third,forth,fifth,total,number;

	number = 12345;

	first = number %10;
	number = number /10;

	second = number %10;
	number = number /10;

	third = number %10;
	number = number /10;

	forth = number %10;
	number = number /10;

	fifth = number %10;
	
	total = first+second+third+forth+fifth;

	printf("%d\n",total);
}

