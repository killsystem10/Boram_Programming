#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % 2 == 0) {
		if (b % 2 == 0) {
			printf("¦��+¦��=¦��");
		}
	}
	if (a % 2 == 0) {
		if (b % 2 != 0) {
			printf("¦��+Ȧ��=Ȧ��");
		}
	}
	if (a % 2 != 0) {
		if (b % 2 == 0) {
			printf("Ȧ��+¦��=Ȧ��");
		}
	}
	if (a % 2 != 0) {
		if (b % 2 != 0) {
			printf("Ȧ��+Ȧ��=¦��");
		}
	}
}