#include <stdio.h>

int main() {

	int len,bre,area,peri;
	len = 10;
	bre = 20;

	area = len * bre;
	peri = 2 * (len + bre);

	printf("%d\n",area);
	printf("%d\n",peri);
}