#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d", &a);
reget:
	scanf_s("%d", &b);
	if (a-- != 0) {
		printf("%d\n", b);
		goto reget;
	}
}