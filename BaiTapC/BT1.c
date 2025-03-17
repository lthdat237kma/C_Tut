#include <stdio.h>
#include <stdlib.h>


typedef struct {
    float toan;
    float van;
    float anh;
} Diem;


typedef struct Node {
    Diem data;
    struct Node *next;
} Node;


Node* taoNode(Diem diem) {
    Node *nodeMoi = (Node*)malloc(sizeof(Node));
    nodeMoi->data = diem;
    nodeMoi->next = NULL;
    return nodeMoi;
}


void themDau(Node **head, Diem diem) {
    Node *nodeMoi = taoNode(diem);
    nodeMoi->next = *head;
    *head = nodeMoi;
}

void themCuoi(Node **head, Diem diem) {
    Node *nodeMoi = taoNode(diem);
    if (*head == NULL) {
        *head = nodeMoi;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = nodeMoi;
}


void themViTri(Node **head, Diem diem, int viTri) {
    if (viTri <= 1) {
        themDau(head, diem);
        return;
    }
    
    Node *temp = *head;
    for (int i = 1; temp != NULL && i < viTri - 1; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    Node *nodeMoi = taoNode(diem);
    nodeMoi->next = temp->next;
    temp->next = nodeMoi;
}

void xoaTheoViTri(Node **head, int viTri) {
    if (*head == NULL) return;

    Node *temp = *head;

    if (viTri == 1) {
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < viTri - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    Node *nodeXoa = temp->next;
    temp->next = nodeXoa->next;
    free(nodeXoa);
}


void inDanhSach(Node *head) {
    int stt = 1;
    while (head != NULL) {
        printf("Node %d: Toan=%.2f, Van=%.2f, Anh=%.2f\n",
            stt++, head->data.toan, head->data.van, head->data.anh);
        head = head->next;
    }
}


void giaiPhongDanhSach(Node **head) {
    Node *current = *head;
    Node *nextNode;

    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    
    *head = NULL;
}


int main() {
    
    Node *danhSach = NULL;

    Diem d1 = {8.5, 7.0, 9.0};
    Diem d2 = {6.5, 8.0, 7.5};
    Diem d3 = {9.0, 9.5, 8.5};

    themDau(&danhSach, d1);
    
    themCuoi(&danhSach, d2);

    themViTri(&danhSach, d3, 2); 

    printf("Danh sach sau khi them:\n");
    inDanhSach(danhSach);

    xoaTheoViTri(&danhSach, 2); 

    printf("\nDanh sach sau khi xoa vi tri thu 2:\n");
    inDanhSach(danhSach);

    giaiPhongDanhSach(&danhSach);

    return 0;
}
