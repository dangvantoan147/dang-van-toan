#include<stdio.h>

int main() {
	int a=4;
	int b=3;
	printf("\n Nhap 2 so:");
	scanf("%d %d" , &a, &b);
	int c = a;
	a = b;
	b = c;
	printf("after swapping, a = %d, b = %d" , a, b);
	return 0;

}
