#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if (a >= 10 && a <= 100) {
		printf("%d í in range (10,100)", a);
    } else {
	    printf("%d is not in range (10, 100)", a);  
    }
	return 0;
}
