#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a,cnt;
double xt, yt;
int main() {
	srand(time(NULL));
	for (int i = 0; i <= 32767; i++) {
		xt = (double)(rand()) / 32767 * 2;
		yt = (double)(rand()) / 32767 * 2;
		a++;
		if (xt * xt + yt + yt <= 4) {
			cnt++;
		}
	}
	printf("%lf\n", 4.0 * cnt / a);
}