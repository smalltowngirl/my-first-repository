#include <stdio.h>

int main() {
	int math, beng, geo, his, eng, total; float ave;
	math = 20;
	beng = 10;
	geo = 5;
	his = 50;
	eng = 40;

	total = math + beng + geo + his + eng;
	ave = total/5.0;

	printf("%d\n",total);
	printf("%f\n",ave);
}