#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % 2 == 0) {
		if (b % 2 == 0) {
			printf("Â¦¼ö+Â¦¼ö=Â¦¼ö");
		}
	}
	if (a % 2 == 0) {
		if (b % 2 != 0) {
			printf("Â¦¼ö+È¦¼ö=È¦¼ö");
		}
	}
	if (a % 2 != 0) {
		if (b % 2 == 0) {
			printf("È¦¼ö+Â¦¼ö=È¦¼ö");
		}
	}
	if (a % 2 != 0) {
		if (b % 2 != 0) {
			printf("È¦¼ö+È¦¼ö=Â¦¼ö");
		}
	}
}