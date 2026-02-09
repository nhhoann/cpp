#include <stdio.h>
#include <math.h>

// Xây dựng chương trình giải phương trình 
// Bậc 1: Phương trình có dạng ax + b = 0
// Nhập giá trị a, b => hiển thị nghiệm

int main () {
    float a, b, c;

    printf ("Nhap a, b, c: ");
    scanf ("%f %f %f", &a, &b, &c);
  
    if (a == 0) { // 0x + b = c
        if (b == 0) {  // 0x + 0 = c
            if (c == 0) {  // 0x + 0 = 0
                printf ("Phuong trinh vo so nghiem");
            } else {
                printf ("Phuong trinh vo nghiem");
            }
        } else {
            printf ("Phuong trinh co mot nghiem: x = %.2f", -c/b);
        }
    } else {
        // Bậc 2: Phương trình có dạng ax2 + bx + c = 
        // Nhập giá trị a, b => hiển thị nghiệm
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf ("Phuong trinh vo nghiem");
        } else if (delta == 0){
            printf ("Phuong trinh co nghiem kep: x = %.2f", -b/(2 * a));
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a); 
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf ("Phuong trinh co hai nghiem: x1 = %.2f, x2 = %.2f", x1, x2);
        }

    }
    return 0;
}
