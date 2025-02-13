#include <stdio.h>
#include <math.h>

// Hàm tính ước chung lớn nhất (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;   // lặp đi lặp lại cho đến khi số dư = 0. Khi đó, ước số cuối cùng chính là GCD của hai số
    }
    return a;
}

// Hàm tính bội chung nhỏ nhất (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);   // ct tính bcnn từ ước chung lớn nhất.
}

int main() {
    int a, b;

    // Nhập hai số nguyên dương a và b từ người dùng
    printf("Nhap hai so nguyen duong a va b: ");
    scanf("%d %d", &a, &b);

    // Tính và in ra ước chung lớn nhất (GCD) và bội chung nhỏ nhất (LCM)
    int ucln = gcd(a, b);
    int bcnn = lcm(a, b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln); 
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}


