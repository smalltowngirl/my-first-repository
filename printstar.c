#include <stdio.h>

int main() {
		int x,y,lower,upper,step,z;
		step = 1;
		lower = 1;
		upper = 10;
		x =lower;
		
		while(x<=upper) {
			z=1;
			while(z<=x){
			printf("*");
			z=z+step;}
			printf("\n");
			x= x+step;}
		}
		