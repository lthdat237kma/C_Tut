#include <stdio.h>

int kiemTraNamNhuan(int year) {
    if (year < 0) {
        return -1; 
    }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int year;
        printf("Nhap nam: ");
        scanf("%d", &year);
        int ketQua = kiemTraNamNhuan(year);
        if (ketQua == -1) {
            printf("Nam %d TCN khong hop le de kiem tra nam nhuan!\n", -year);
        } else if (ketQua == 1) {
            printf("Nam %d la nam nhuan!\n", year);
        } else {
            printf("Nam %d khong phai la nam nhuan!\n", year);
        }  
}
