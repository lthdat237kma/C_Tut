#include<stdio.h>
#include<math.h>

int main() {
	int fib;
	int a = 0;
	int b = 1;
	int n;
	printf("Nhap n:\n");
	scanf("%d", &n);
	for(int i = 2; i <= n; i++) {
		fib = a + b;
		b = a;
		a = fib;
		
 }
    printf("So Fibonacci thu n la %d", fib);
	return 0;
}
