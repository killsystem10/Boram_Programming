#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int d, temp;
	temp = c - 1;
	d = temp * b;
	printf("%d", a + d);
	
}