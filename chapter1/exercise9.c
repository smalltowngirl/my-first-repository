#include <stdio.h> 

int main() {

	int number, hundred, fifty, ten, total;

	number = 260;

	hundred = number /100;
	number = number %100;

	fifty = number /50;
	number = number %50;

	ten = number /10;
	number = number %10;

	total = hundred + fifty + ten;

	printf("%d\n",total);
}