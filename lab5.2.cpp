#include <stdio.h>

// Xây dựng hàm tính năm nhuận
// Nhập năm => Năm nhuận hay không?

int checkYear(int year) {
    if (year % 400 == 0) {
        return 1; 
    } else if (year % 4 == 0 && year % 100 != 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int nam_nhap_vao;
    int ket_qua;

    printf("Nhap vao mot nam can kiem tra: ");
    
    if (scanf("%d", &nam_nhap_vao) != 1) {
        printf("\nLoi: Dau vao khong hop le. Vui long nhap mot so nguyen.\n");
        return 1; 
    }

    ket_qua = checkYear(nam_nhap_vao);

    printf("\n--- KET QUA ---\n");
    if (ket_qua == 1) {
        printf("Nam %d la nam nhuan.\n", nam_nhap_vao);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", nam_nhap_vao);
    }

    return 0;
}

