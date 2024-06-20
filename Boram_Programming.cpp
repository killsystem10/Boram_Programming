#include <stdio.h>
int print_number(int n) {
	if (n > 3) return n;
	printf("%d\n", n);
	print_number(n + 1);
}

int main(void) {
	int count = 1;
	print_number(count);
	return 0;
}