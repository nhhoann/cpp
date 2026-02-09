#include <stdio.h>

// Input: Nhâp điểm của sinh viên
//Output: Hiển thị ra màn hình học lực của sinh viên
// Biết rằng: 
// Xuất sắc: điểm >= 9
// Giỏi: 9 > điểm >= 8
// Khá: 8 > điểm >= 6.5
// Trung bình: 6.5 > điểm >= 5
// Yếu: 5 > điểm > 3.5
// Kém: 3.5 > điểm

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
