#include <stdio.h>

int main() {
	int x,lower,upper,step,total;
	lower= 1;
	upper=3;
	step=1;
	total=1;

	x=lower;
	while(x<=upper) {
		total=total*x;
		x=x+step; }

		printf("%d\n",total);
	}