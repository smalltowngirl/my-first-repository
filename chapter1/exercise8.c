#include <stdio.h>

int main() {

	int population, totalMale, litMale, illitMale;

	population = 80000;

	totalMale = population * .52;
	litMale = population * .35;
	illitMale = totalMale - litMale;

	printf("%d\n",illitMale);
}