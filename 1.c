#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
    double a[100];
	double sum = 0;
	int i;
	for ( i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	double t = sum / n;
	double d = 0;
	for (i = 0; i < n; i++) {
		d += pow(a[i] - t, 2);
	}
	d /= n;
	for (i = 0; i < n; i++) {
		printf("%.16f\n", (a[i] - t) / sqrt(d));
	}
	return 0;
}