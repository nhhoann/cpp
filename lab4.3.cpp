#include <stdio.h>
#include <math.h>

// Build chương trình số chính phương
//Nhập vào x => Hiển thị x có/không là số chính phương

int main () {
    int x;

    printf ("Nhap x: ");
    scanf ("%d", &x);

    int can = sqrt(x);  // sqrt = căn bậc 2
    if (can * can == x) {
        printf ("%d la so chinh phuong\n", x);
    } else {
        printf ("%d khong phai la so chinh phuong\n", x);
    }
    return 0;
}
