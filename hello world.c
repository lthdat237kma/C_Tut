#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct SinhVien {
    char mssv[20];
    char hoTen[99];
    char gioiTinh[10];
    float diemTB;
    struct SinhVien* pNext;
}SinhVien;

void themSinhVien(SinhVien** pHead) {
    SinhVien* pNew = (SinhVien*) malloc(sizeof(SinhVien));
    printf("Nhap mssv: ");
    scanf("%s", pNew->mssv);
    fflush(stdin);
    printf("Nhap ho ten: ");
    fgets(pNew->hoTen, 99, stdin);
    pNew->hoTen[strcspn(pNew->hoTen, "\n")] = 0; 
    printf("Nhap gioi tinh: ");
    fgets(pNew->gioiTinh, 10, stdin);
    pNew->gioiTinh[strcspn(pNew->gioiTinh, "\n")] = 0; // 
    fflush(stdin);
    printf("Nhap diem TB: ");
    scanf("%f", &pNew->diemTB);
    pNew->pNext = NULL;
    if (*pHead == NULL) { // danh sach rong
        *pHead = pNew;
    }
    else {
        SinhVien* pCur = *pHead; // con tro pCur duyet qua cac phan tu
        while (pCur->pNext != NULL) {
            pCur = pCur->pNext;
        }
        pCur->pNext = pNew;
    }
}


void xoaSinhVien(SinhVien** pHead, char* mssv) {
    if (*pHead == NULL) { // danh sach rong
        return;
    }
    if (strcmp((*pHead)->mssv, mssv) == 0) { // xoa dau danh sach
        SinhVien* pTemp = *pHead;
        *pHead = (*pHead)->pNext;
        free(pTemp);
        return;
    }
    SinhVien* pCur = *pHead; // con tro pCur duyet qua cac phan tu
    while (pCur->pNext != NULL && strcmp(pCur->pNext->mssv, mssv) != 0) {
        pCur = pCur->pNext;
    }
    if (pCur->pNext != NULL) { // tim thay phan tu co mssv can xoa
        SinhVien* pTemp = pCur->pNext;
        pCur->pNext = pCur->pNext->pNext;
        free(pTemp);
    }
}

void inDanhSach(SinhVien* pHead) {
    printf("%-5s %-20s %-10s %s\n", "STT", "Ho Ten", "Gioi Tinh", "Diem TB");
    int stt = 1;
    while (pHead != NULL) {
        printf("%-5d %-20s %-10s %-5.2f\n", stt, pHead->hoTen, pHead->gioiTinh, pHead->diemTB);
        pHead = pHead->pNext;
        stt++;
    }
}

int main() {
    SinhVien* pHead = NULL;
    int choice;
    char mssv[20];
    // sly
    do {
        printf("\n\n\n\n============ QUAN LY SINH VIEN ============\n\n\n");
        printf("1. Them sinh vien\n");
        printf("2. Xoa sinh vien\n");
        printf("3. In danh sach sinh vien\n");
        printf("4. Thoat\n\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                themSinhVien(&pHead);
                break;
            case 2:
                printf("\nNhap mssv can xoa: ");
                scanf("%s", mssv);
                xoaSinhVien(&pHead, mssv);
                break;
            case 3:
                inDanhSach(pHead);
                printf("\n\nDa in danh sach sinh vien hien co \n");
                break;
            case 4:
                printf("\nKet thuc chuong trinh\n");
                break;
            default:
                printf("\n\nLua chon khong hop le, moi ban chon lai \n");
        }
    } while (choice != 4);
    return 0;
}
