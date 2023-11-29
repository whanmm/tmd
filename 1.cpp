#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int n;
	int x;
	double i, r, sum;

	scanf("%d %lf", &n, &i);

	scanf("%d", &x);
	r = 1.0;
	sum = x;
	for (int k = 1; k <= n; k++) {
		scanf("%d", &x);
		r = r * (i + 1);
		sum += sum + x / r;
	}
	printf("%.3f", sum);
	return 0;
}