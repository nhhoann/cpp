#include <stdio.h>

// Build chương trình tìm giá trị lớn nhất trong 3 số
// Nhập vào 3 số bất kì => Hiển thị số lớn nhất

int timMax (int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main () {
    int so_a, so_b, so_c;
    int ket_qua;

    printf("Nhap vao so nguyen thu nhat (A): ");
    scanf("%d", &so_a);

    printf("Nhap vao so nguyen thu hai (B): ");
    scanf("%d", &so_b);

    printf("Nhap vao so nguyen thu ba (C): ");
    scanf("%d", &so_c);

    ket_qua = timMax(so_a, so_b, so_c);

    printf("\n------------------------------------\n");
    printf("Ba so ban da nhap la: %d, %d, %d\n", so_a, so_b, so_c);
    printf("Gia tri lon nhat (MAX) la: %d\n", ket_qua);
    printf("------------------------------------\n");
    
    return 0;
}
