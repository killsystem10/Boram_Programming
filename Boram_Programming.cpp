#include <stdio.h>
#include <queue>
std::queue<int> Q;

int main() {
	for (int i = 1; i <= 3; i++) {
		Q.push(i);
	}
	for (int i = 1; i <= 2; i++) {
		printf("%d ", Q.front());
		Q.pop();
	}
	printf("\n");
	Q.push(4);
	Q.push(5);
	while (!Q.empty()) {
		printf("%d ", Q.front());
		Q.pop();
	}
	printf("\n");
	
}