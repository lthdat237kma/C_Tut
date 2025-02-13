#include <stdio.h>

int main( ) {
	int a;
	printf("Nhap so can kiem tra: ");
	scanf("%i", &a);
	if( a % 2 == 0) {
		printf("So can kiem tra la so chan!");
	} 
	else {
		printf("So can kiem tra la so le!");
	}
}