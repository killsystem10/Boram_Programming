#include <stdio.h>
int main() {
	long long int a, b, c, temp;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", a + b + c);
	temp = a + b + c;
	printf("0.1f", temp / 3);
}