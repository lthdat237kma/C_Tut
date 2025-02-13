#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>


// Le Thanh Dat




 void nhapMaTran(int a[][100], int n) {
    printf("Nhap cac phan tu cua ma tran:\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void inMaTran(int a[][100], int n) {
    printf("Ma tran vua nhap:\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void inDuongCheoChinh(int a[][100], int n) {
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i][i]);
        for (int j = 0; j < n; j++) {
            if (i != j && j == n-1) {
                printf("*");
            } else if (i != j) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int timMax(int a[][100], int n) {
    int max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}
int timMin(int a[][100], int n) {
    int min = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}
void sapXepTangDanTheoHang(int a[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (a[i][j] > a[i][k]) {
                    int tmp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = tmp;
                }
            }
        }
    }
    printf("Ma tran sau khi sap xep tang dan theo hang:\n");
    inMaTran(a, n);
}


void sapXepTangDanTheoCot(int a[][100], int n) 
 {
	
for (int j = 0; j < n; j++) {
for (int i = 0; i < n-1; i++) {
for (int k = i+1; k < n; k++) {
if (a[i][j] > a[k][j]) {
int tmp = a[i][j];
a[i][j] = a[k][j];
a[k][j] = tmp;
           }
     }
   }
}
printf("Ma tran sau khi sap xep tang dan theo cot:\n");
inMaTran(a, n);
}

int timMax2(int a[][100], int n) {
int max1 = timMax(a, n);
int max2 = a[0][0];
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (a[i][j] > max2 && a[i][j] != max1) {
max2 = a[i][j];
}
}
}
return max2;
}


int isPrime(int n) {
if (n < 2) {
return 0;
}
for (int i = 2; i <= n/2; i++) {
if (n % i == 0) {
return 0;
}
}
return 1;
}

int tongSoNguyenTo(int a[][100], int n) {
int sum = 0;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (isPrime(a[i][j])) {
sum += a[i][j];
}
}
}
return sum;
}

int main() {

int n, a[100][100];
int choice;



do {
    system("cls");
    printf("Ho va ten: Le Thanh Dat.\n");
    printf("23/07/2004\n");
    printf("MaSV:DT060105.\n");
    printf("Lop:L05\n");
    printf("Bai so 2\n\n");
    printf("\n-------MENU-------\n");
    printf("-1. Nhap ma tran vuong cap n\n");
    printf("-2. In cac phan tu tren duong cheo chinh\n");
    printf("-3. Tim phan tu lon nhat cua ma tran\n");
    printf("-4. Tim phan tu nho nhat cua ma tran\n");
    printf("-5. Sap xep cac phan tu tang dan theo hang\n");
    printf("-6. Sap xep cac phan tu tang dan theo cot\n");
    printf("-7. Tim phan tu lon nhat thu hai cua ma tran\n");
    printf("-8. Tinh tong cac so nguyen to trong ma tran\n");
    printf("-0. Thoat\n\n");

    printf("Chon chuc nang: ");
    scanf("%d", &choice);

    switch (choice) {
        case 0:
            printf("Da thoat");
            break;
        case 1:
            printf("Nhap cap cua ma tran: ");
            scanf("%d", &n);
            nhapMaTran(a, n);
            inMaTran(a, n);



case 2:
printf("Cac phan tu tren duong cheo chinh:\n");
inDuongCheoChinh(a, n);
printf("\n");
system("pause");
 break;
case 3:
printf("Phan tu lon nhat cua ma tran la %d\n", timMax(a, n));
system("pause");
 break;
case 4:
printf("Phan tu nho nhat cua ma tran la %d\n", timMin(a, n));
system("pause");
 break;
case 5:
sapXepTangDanTheoHang(a, n);
system("pause");
 break;
case 6:
sapXepTangDanTheoCot(a, n);
system("pause");
 break;
case 7:
printf("Phan tu lon nhat thu hai cua ma tran la %d\n", timMax2(a, n));
system("pause");
 break;
case 8:
printf("Tong cac so nguyen to trong ma tran la %d\n", tongSoNguyenTo(a, n));
system("pause");
 break;
default:
printf("Lua chon khong hop le. Vui long chon lai!\n");
system("pause");
 break;
}


} while (choice != 0);

return 10;
}
