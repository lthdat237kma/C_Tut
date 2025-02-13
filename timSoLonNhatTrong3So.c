#include <stdio.h>

int main() {
	int a, b, c;
	printf("Nhap 3 so a, b, c lan luot la: ");
	scanf("%i %i %i", &a, &b, &c);
	 if (a == b && b == c) {
        printf("Ba so bang nhau: %d\n", a);
    } else {
        int max;
        if (a >= b && a >= c) {
            max = a;
        } else if (b >= a && b >= c) {
            max = b;
        } else {
            max = c;
        }
        printf("So lon nhat la: %d\n", max);
    }
    
}