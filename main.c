#include <stdio.h>

double raizq(double n);

int main(void) {

	double n;
	scanf("%lf", &n);
	printf("%.2f\n", raizq(n));

	return 0;
}

double raizq(double n) {

	int x;
	double r = n;
	for (x = 0; x < 10; ++x)
	r = (r / 2) + (n / (2 * r));

	return r;

}
