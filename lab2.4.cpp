#include <stdio.h>

int main () {
    float toan, ly, hoa, diemtb;

    printf ("Nhap diem toan: ");
    scanf ("%f", &toan);

    printf ("Nhap diem ly: ");
    scanf ("%f", &ly);

    printf ("Nhap diem hoa: ");
    scanf ("%f", &hoa);

    diemtb = (toan * 3 + ly * 2 + hoa * 1)/6;

    printf ("Diem trung binh cua ban la: %.2f\n", diemtb);

    return 0;
}
