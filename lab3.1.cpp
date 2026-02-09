#include <stdio.h>

int main () {
    float diem;
    
    printf ("Nhap diem: ");
    scanf ("%f", &diem);
// dùng if else để liệt kê các trường hợp maybe xảy ra
    if (diem >= 9) {
        printf ("Xuat sac");
    } else if (diem >= 8) {
        printf ("Gioi");
    } else if (diem >= 6.5 && diem < 8) {
        printf ("Kha");
    } else if (diem >= 5) {
        printf ("Trung bình");
    } else if (diem >= 3.5) {
        printf ("Yeu");
    } else {
        printf ("Kem");
    }
    return 0;
}
