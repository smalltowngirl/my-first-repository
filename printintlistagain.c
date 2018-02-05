#include <stdio.h>

int main() {
	int x,lower,upper,step,total;
	lower= 1;
	upper= 10;
	step= 1;
	total=0;
	
	x= lower;
	while(x<=upper) {
	total=total+x;
	x= x+ step;}
	printf("%d\n",total); 
	}