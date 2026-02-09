#include <stdio.h>
#include <math.h>

// Build menu cho 3 bài trên
// Yêu cầu:
// Nhập 1 => Run 1
// Nhập 2 => Run 2
// Nhập 3 => Run 3
// Nhập 4 => Out
// Nhập số khác => Hiển thị lại như cũ


// lab4.1
void bai1 () {
    int min, max, i;
    float tong = 0;
    int dem = 0;

    printf ("Nhap min: ");
    scanf ("%d", &min);

    printf ("Nhap max: ");
    scanf ("%d", &max);

    for (i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong +=i;
            dem++;
        }
    }
    if (dem == 0) {
        printf ("Khong co so chan trong doan [%d, %d]\n", min, max);
    } else {
        printf ("Trung binh cong cac so chan = %.2f\n", tong / dem);
    }
}

// lab4.2
void bai2 () {
    int x, i, dem = 0;

    printf ("Nhap x: ");
    scanf ("%d", &x);

    if (x < 2) {
        printf ("%d khong phai la so nguyen to\n");
        return;
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
}

// lab4.3
void bai3 () {
    int x;

    printf ("Nhap x: ");
    scanf ("%d", &x);

    int can = sqrt(x);
    if (can * can == x) {
        printf ("%d la so chinh phuong\n", x);
    } else {
        printf ("%d khong phai la so chinh phuong\n", x);
    }
}

//build menu
int main () {
    int choice;
    do {
        printf ("\n----------MENU----------\n");
        printf ("| 1.Tinh trung binh tong  |\n");
        printf ("| 2.Tim so nguyen to      |\n");
        printf ("| 3.Tim so chinh phuong   |\n");
        printf ("| 4.Thoat chuong trinh    |\n");
        printf ("---------------------------\n");
        printf ("Vui long chon: ");
        scanf ("%d", &choice);
//case 1: use switch
        switch (choice) {
            case 1:
                bai1 ();
                break;
            case 2:
                bai2 ();
                break;
            case 3:
                bai3 ();
                break;
            case 4:
                printf ("Thoat chuong trinh\n");
                break;
            default:
                printf ("Lua chon khong hop le\n");
                break;
        }
    } while (choice !=0);
// case 2: dùng while
        while (1) {
          printf ("\n===== MENU =====");
          printf ("\n1. In Hello");
          printf ("\n2. In Bye");
          printf ("\n0. Thoat");
          printf ("\nChon: ");
          scanf ("%d", &choice);

          if (choice == 0) {
            printf ("Ket thuc chuong trinh");
            break;
          }
          if (choice == 1) {
            printf ("Hello");
            break;
          }
          if (choice == 2) {
            printf ("Bye");
            break;
          }
          else {
            printf ("Lua chon khong hop le!");
          }
        }  
    return 0;
}
