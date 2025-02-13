#include<stdio.h>
#include <stdbool.h>

bool soNguyenTo(int number) {
	if (number <= 1) {
		return false;
	}
	for ( int i = 2; i*i <= number; i++) {
		if (number %i == 0) { return false;
		}
	}
	return true;
}
// Ham kiem tra so nguyen to


int main() {
	int n;
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	printf("Cac so nguyen to nho hon %d la:\n", n);
    for (int i = 2; i < n; i++) {
        if (soNguyenTo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
	
}