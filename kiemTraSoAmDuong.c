#include <stdio.h>

int main() {
	int a;
	printf("Nhap so can kiem tra: ");
	scanf("%i", &a);
	if (a == 0) {
		printf("So can kiem tra la so khong am, khong duong!");
	
	}
	else if(a  < 0) {
		printf("So can kiem tra la so am!");
		
	} 
	else {
		printf("So can kiem tra la so duong!");
	}
}