#include <stdio.h>

int main() {
	int n, k;
	printf("So luong so co trong day: ");
	scanf("%d", &n);
	int a[n]; 
	
	for( int i = 0; i < n; i++) {
		printf("So thu %d ", i + 1);
		scanf("%d", &a[i] );
	}
	
	
	printf("Nhap so k can tim: ");
	scanf("%d", &k);
	
	int cout = 0;
	for (int i = 0; i < n; i++ ) {
		if (a[i]==k) {
			cout++;
			
			
		}
	}
	printf("so %d xuat hien %d lan trong day da nhap.", k, cout);
}