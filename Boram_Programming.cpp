#include <stdio.h>
int main() {
	int a,temp=2;
	scanf("%d", &a);
	while (a != 1) {
		temp = temp * 2;
		a = a - 1;
	}
	printf("%d", temp);
}