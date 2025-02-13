#include <stdio.h>

int main() {
	
	int n;
	printf("Mang co so phan tu la: ");
	scanf("%i", &n);
	
	if (n <= 0) { 
	printf("Mang khong hop le!");
	}
	
	else { 
	int a[n];
	printf("Nhap %i phan tu cua mang: \n\n", n);

	for (int i = 1; i < n; i++)  {
        printf("Phan tu thu %d la: \n", i);
        scanf("%d", &a[i]);
    }
    
	int max = a[0];
    for (int i = 0; i < n; i++) {
        if ( a[i] > max) {
            max = a[i];
        }
    }
    printf("Phan tu lon nhat trong mang da nhap la: %i", max);
	}
}
	
