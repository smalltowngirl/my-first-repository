#include <stdio.h>

int main() {

 	int fifth,forth,third,second,first,number,total;

 	number = 23491;

	fifth = number %10;
	if (fifth == 9) {
		fifth = 0;
	} else {
		fifth = fifth + 1;
	}
	number = number /10;

	forth = number %10;
	if (forth == 9) {
		forth = 0;
	} else {
		forth = forth + 1;
	}
	number = number /10;

	third = number %10;
	if (third == 9) {
		third = 0;
	} else {
		third = third + 1;
	}
	number = number /10;

	second = number %10;
	if (second == 9) {
		second = 0;
	} else {
		second = second + 1;
	}
	number = number /10;

	first = number %10;
	if (first == 9) {
		first = 0;
	} else {
		first = first + 1;
	}
	

	total = first * 10000 + second * 1000 + third * 100 + forth * 10 + fifth;
	printf("%d\n",total);
}

	