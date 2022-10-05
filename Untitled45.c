#include<stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	int count = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}


