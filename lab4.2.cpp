#include <stdio.h>
#include <math.h> // Khai báo thêm cái này để dùng các hàm toán học có sẵn

// Xây dựng chương trình xác định số nguyên tố
// Nhập vào x => Hiển thị x có/không là số nguyên tố

int main () {
    int x, i, dem = 0;

    printf ("Nhap x: ");
    scanf ("%d", &x);

    if (x < 2) {
        printf ("%d khong phai la so nguyen to\n");
        return 1;
    }
    for (i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            dem++;
            break;
        }
    }
    if (dem == 0) {
        printf ("%d la so nguyen to\n", x);
    } else {
        printf ("%d khong phai la so nguyen to\n", x);
    }
    return 0;
}
