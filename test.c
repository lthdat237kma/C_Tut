#include <stdio.h>

int ltd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return ltd(b, a % b);
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen duong a va b: ");
    scanf("%d %d", &a, &b);
    if (ltd(a, b) == 1) {
        printf("%d va %d la hai so nguyen to cung nhau", a, b);
    } else {
        printf("%d va %d khong phai la hai so nguyen to cung nhau", a, b);
    }
   
    return 0;
}

