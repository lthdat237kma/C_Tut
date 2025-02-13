#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int soChinhPhuong(int number) {
    int scp = sqrt(number);
    return scp * scp == number;
}

int main() {
    int n;
    
    // Nhập số nguyên dương n từ người dùng
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    
    // Kiểm tra và in các số chính phương bé hơn n
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    for (int i = 1; i < n; ++i) {
        if (soChinhPhuong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}